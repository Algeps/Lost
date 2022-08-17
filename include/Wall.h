//
// Created by nik17 on 20.07.2021.
//
#ifndef INCLUDE_WALL_H_
#define INCLUDE_WALL_H_

#include <BearLibTerminal.h>

#pragma once

class Wall {
 public:
  int x;
  int y;

  Wall(int x, int y) : x(x), y(y) {}

  void Update() const;
};
#endif  // INCLUDE_WALL_H_
