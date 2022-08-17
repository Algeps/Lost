//
// Created by nik17 on 09.08.2020.
//

#include "include/StepCounter.h"

void StepCounter::Update() {
    AnyMove();
    RenderText();
}

void StepCounter::RenderText() const {
  terminal_printf(12, 0, "[color=blue]STEPS: %d", stepNumber);
}

void StepCounter::AnyMove() {
  if (controls.is_up_) {
    stepNumber++;
  }
  if (controls.is_down_) {
    stepNumber++;
  }
  if (controls.is_right_) {
    stepNumber++;
  }
  if (controls.is_left_) {
    stepNumber++;
  }
}
