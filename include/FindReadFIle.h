//
// Created by nik17 on 10.07.2021.
//
#ifndef INCLUDE_FINDREADFILE_H_
#define INCLUDE_FINDREADFILE_H_
#include <BearLibTerminal.h>
#include <processenv.h>

#include <fstream>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

#include "include/Money.h"
#include "include/MoneyManager.h"
#include "include/Reader.h"
#include "include/Wall.h"
#include "include/WallManager.h"

#pragma once

class FileRead : Reader {
  wchar_t LevelInput[32] = L"";
  int numberLevel{};
  TCHAR bufferPath[MAX_PATH]{};
  std::string pathGame = bufferPath;
  static const int widthConsole = 80;
  char levelBuff[widthConsole] = {""};

  void FileReader(std::ifstream *fileLevel);
  void GetGameLevel();

  MoneyManager *mm_;
  WallManager *wm_;

 public:
  FileRead(MoneyManager *mm, WallManager *wm) : mm_(mm), wm_(wm) {}
  void OpenFile() override;
  void PathFile() override;
};
#endif  // INCLUDE_FINDREADFILE_H_
