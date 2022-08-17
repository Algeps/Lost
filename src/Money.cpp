//
// Created by nik17 on 08.08.2020.
//

#include "include/Money.h"

int to_pos(float x);

void Money::Update() const {
  { terminal_printf(to_pos(x), to_pos(y), "[color=yellow]$"); }
}
