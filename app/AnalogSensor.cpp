/**
 * Copyright (C)
 * 2019 - Nakul Patel
 *
 */

/**
 * @file AnalogSensor.cpp
 *
 * @author Nakul Patel
 *
 * @brief implementation of AnalogSensor class
 *
 * @version 1
 *
 * @date 2019-10-06
 *
 *
 */

#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples) {
}

AnalogSensor::~AnalogSensor() {
}

int AnalogSensor::Read() {
  std::vector<int> *readings = new std::vector<int>(mSamples, 10);
  double result = std::accumulate(readings->begin(), readings->end(), 0.0)
      / readings->size();
  delete readings;
  return result;
}

