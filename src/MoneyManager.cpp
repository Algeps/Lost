//
// Created by nik17 on 08.08.2020.
//

#include "include/MoneyManager.h"

void MoneyManager::RenderText() const {
  terminal_printf(2, 0, "[color=green]MONEY: %d", mon);
}

void MoneyManager::Update() {
  // todo Рендер монет
  for (auto &m : money) {
    m.Update();
  }
  // todo Собирание монет и их удаление из вектора
  CollectMoney();
  // todo Отображение количества собранных монет
  RenderText();
}

void MoneyManager::CollectMoney() {
  moneyX = player_.GetX();
  moneyY = player_.GetY();
  auto result{find_if(money.begin(), money.end(), [this](const Money &m) { return m.x == moneyX && m.y == moneyY; })};
  if (result != money.end()) {
    mon++;
    money.erase(result);
  }
}
