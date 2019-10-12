/**
 * Copyright (C)
 * 2019 - Nakul Patel
 *
 */

/**
 * @file AnalogSensor.hpp
 *
 * @author Nakul Patel
 *
 * @brief declaration of AnalogSensor class
 *
 * @version 1
 *
 * @date 2019-10-06
 *
 */

#ifndef _INCLUDE_LIB_HPP_
#define _INCLUDE_LIB_HPP_

#include <iostream>

class AnalogSensor {
 public:
    AnalogSensor(unsigned int samples);
    ~AnalogSensor();
    int Read();
 private:
    unsigned int mSamples;
};

#endif   // _INCLUDE_LIB_HPP_
