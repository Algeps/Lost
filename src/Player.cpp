//
// Created by nik17 on 08.08.2020.
//

#include "include/Player.h"

void Player::Update() {
    Move();
    Render();
}

void Player::Move() {
  if (controls_.IsUP()) {
    y_--;
  }
  if (controls_.IsRight()) {
    x_++;
  }
  if (controls_.IsLeft()) {
    x_--;
  }
  if (controls_.IsDown()) {
    y_++;
  }
}

void Player::Render() {
  terminal_put((x_), (y_), symbol);
}
