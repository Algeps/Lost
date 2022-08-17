//
// Created by nik17 on 08.08.2020.
//
#ifndef INCLUDE_MONEYMANAGER_H_
#define INCLUDE_MONEYMANAGER_H_
#pragma once

#include <algorithm>
#include <vector>

#include "include/Money.h"
#include "include/Player.h"

class MoneyManager {
  int mon = 0;
  int moneyX{};
  int moneyY{};

  void RenderText() const;
  void CollectMoney();
  const Player &player_;

 public:
  std::vector<Money> money{};
  explicit MoneyManager(const Player &player) : player_(player) {}

  void Update();
};
#endif  // INCLUDE_MONEYMANAGER_H_
