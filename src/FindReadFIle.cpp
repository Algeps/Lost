//
// Created by nik17 on 10.07.2021.
//
#include "include/FindReadFIle.h"

#include <string>

// todo Ввод пути к уровню
void FileRead::PathFile() {
  terminal_printf(0, 0, "Enter the level number:");
  terminal_read_str(0, 1, LevelInput, widthConsole);
}

void FileRead::OpenFile() {
  GetGameLevel();
  std::ifstream fileLevel(pathGame);
  // todo Открытие файла, если не открылся, то выводит об этом сообщение
  if (fileLevel.is_open()) {
    // todo Объекты из файла загружаются в векторы
    FileReader(&fileLevel);
  }
}

void FileRead::FileReader(std::ifstream *fileLevel) {
  int lineRender = 1;
  while (!fileLevel->eof()) {
    fileLevel->getline(levelBuff, widthConsole);
    for (int i = 0; i != widthConsole; i++) {
      if (levelBuff[i] == '#') {
        // todo Добавление координат всех стен в вектор
        wm_->wall.emplace_back(i, lineRender);
      }
      if (levelBuff[i] == '$') {
        // todo Добавление координат всех монет в вектор
        mm_->money.emplace_back(i, lineRender);
      }
    }
    lineRender++;
  }
  fileLevel->close();
}

void FileRead::GetGameLevel() {
  GetCurrentDirectory(sizeof(bufferPath), bufferPath);
  for (char &i : bufferPath) {
    if (i == '\\') {
      i = '/';
    }
  }
  pathGame = bufferPath;
  numberLevel = _wtoi(LevelInput);
  pathGame += "/Levels/";
  pathGame += std::to_string(numberLevel);
  pathGame += ".txt";
}
