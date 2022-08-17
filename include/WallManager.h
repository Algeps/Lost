//
// Created by nik17 on 11.07.2021.
//
#ifndef INCLUDE_WALLMANAGER_H_
#define INCLUDE_WALLMANAGER_H_
#include <BearLibTerminal.h>

#include <algorithm>
#include <utility>
#include <vector>

#include "include/Player.h"
#include "include/Wall.h"

#pragma once

class WallManager {
  int wallX{};
  int wallY{};
  Player *player_;
  Controls *controls_;

  void FindWall();

 public:
  WallManager(Controls *controls, Player *player) : player_(player), controls_(controls) {}

  std::vector<Wall> wall{};

  void Update();
};
#endif  // INCLUDE_WALLMANAGER_H_
