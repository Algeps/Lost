//
// Created by nik17 on 11.07.2021.
//

#include "include/WallManager.h"

void WallManager::Update() {
  // todo Рендер стен
  for (auto &w : wall) {
    w.Update();
  }
  FindWall();
}

// todo Вокруг персонажа создаётся поле, которое ищет стены
void WallManager::FindWall() {
  wallX = player_->GetX();
  wallY = player_->GetY();

  auto findUp{find_if(wall.begin(), wall.end(), [this](const Wall &w) { return w.x == wallX && w.y == (wallY - 1); })};
  if (findUp != wall.end()) {
    controls_->is_up_ = false;
  }

  auto findDown{
      find_if(wall.begin(), wall.end(), [this](const Wall &w) { return w.x == wallX && w.y == (wallY + 1); })};
  if (findDown != wall.end()) {
    controls_->is_down_ = false;
  }

  auto findLeft{
      find_if(wall.begin(), wall.end(), [this](const Wall &w) { return w.x == (wallX - 1) && w.y == wallY; })};
  if (findLeft != wall.end()) {
    controls_->is_left_ = false;
  }

  auto findRight{
      find_if(wall.begin(), wall.end(), [this](const Wall &w) { return w.x == (wallX + 1) && w.y == wallY; })};
  if (findRight != wall.end()) {
    controls_->is_right_ = false;
  }
}
