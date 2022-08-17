//
// Created by nik17 on 08.08.2020.
//
#ifndef INCLUDE_PLAYER_H_
#define INCLUDE_PLAYER_H_
#pragma once

#include <BearLibTerminal.h>

#include "include/Controls.h"

class Player {
  char symbol = '@';
  const Controls &controls_;
  int x_;
  int y_;

  void Render();
  void Move();

 public:
  Player(const Controls &controls, int x, int y) : controls_(controls), x_(x), y_(y) {}

  void Update();
  int GetX() const {
    return x_;
  }
  int GetY() const {
    return y_;
  }
};
#endif  // INCLUDE_PLAYER_H_
