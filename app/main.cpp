/**
 * Copyright (C)
 * 2019 - Nakul Patel
 *
 */

/**
 * @file main.cpp
 *
 * @author Nakul Patel
 *
 * @brief program for Analog sensor readings
 *
 * @version 1
 *
 * @date 2019-10-06
 *
 *
 */

#include <iostream>
#include <AnalogSensor.hpp>

int main() {
  AnalogSensor lightSensor(5);
  std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
  bool terminator = true;
  if (terminator) {
    std::cout << "DONE" << std::endl;
  }
  return 0;
}
