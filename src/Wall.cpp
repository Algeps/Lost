//
// Created by nik17 on 20.07.2021.
//

#include "include/Wall.h"

int to_pos(float x);

void Wall::Update() const {
  { terminal_printf(to_pos(x), to_pos(y), "[color=grey]#"); }
}
