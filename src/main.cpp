#include <BearLibTerminal.h>

#include "include/Controls.h"
#include "include/FindReadFIle.h"
#include "include/MoneyManager.h"
#include "include/StepCounter.h"
#include "include/WallManager.h"

int to_pos(float x);

int main() {
  terminal_open();
  terminal_refresh();

  Controls controls;
  Player player{controls, 1, 2};
  StepCounter stepCounter{controls};
  MoneyManager mm{player};
  WallManager wm{&controls, &player};
  FileRead fileRead{&mm, &wm};

  fileRead.PathFile();
  fileRead.OpenFile();

  while (true) {
    terminal_clear();
    controls.Update();
    if (controls.IsExit()) {
      break;
    }
    wm.Update();
    mm.Update();
    player.Update();
    stepCounter.Update();
    terminal_refresh();
  }
  terminal_close();
}
