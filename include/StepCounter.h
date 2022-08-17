//
// Created by nik17 on 09.08.2020.
//
#ifndef INCLUDE_STEPCOUNTER_H_
#define INCLUDE_STEPCOUNTER_H_
#pragma once

#include <BearLibTerminal.h>

#include "include/Controls.h"

class StepCounter {
  int stepNumber = 0;
  const Controls &controls;

  void RenderText() const;
  void AnyMove();

 public:
  explicit StepCounter(const Controls &controls) : controls(controls) {}

  void Update();
};
#endif  // INCLUDE_STEPCOUNTER_H_
