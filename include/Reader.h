//
// Created by nik17 on 13.07.2021.
//
#ifndef INCLUDE_READER_H_
#define INCLUDE_READER_H_
#pragma once

class Reader {
 protected:
  virtual void PathFile() = 0;
  virtual void OpenFile() = 0;
};
#endif  // INCLUDE_READER_H_
