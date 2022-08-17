//
// Created by nik17 on 07.08.2020.
//
#ifndef INCLUDE_CONTROLS_H_
#define INCLUDE_CONTROLS_H_

#pragma once

class Controls {
 public:
  bool is_right_ = false;
  bool is_left_ = false;
  bool is_down_ = false;
  bool is_exit_ = false;
  bool is_up_ = false;
  bool IsUP() const;

  bool IsRight() const;

  bool IsLeft() const;

  bool IsDown() const;

  bool IsExit() const;

  void Update();
};
#endif  // INCLUDE_CONTROLS_H_
