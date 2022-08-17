//
// Created by nik17 on 08.08.2020.
//
#ifndef INCLUDE_MONEY_H_
#define INCLUDE_MONEY_H_
#pragma once

#include <BearLibTerminal.h>

class Money {
 public:
  int x;
  int y;

  Money(int x, int y) : x(x), y(y) {}

  void Update() const;
};
#endif  // INCLUDE_MONEY_H_
