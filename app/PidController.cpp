// Copyright 2021 Aswath Muthuselvam
/**
 *
 * @file    PidController.cpp
 * @author  Aswath Muthuselvam
 * @author  Part 1 :Aswath Muthuselvam (Driver) , Prannoy Namala (Navigator)
 * @date    10/1/2021
 * @version 1.0
 *
 * @brief   PidController class implementation.
 *
 * @section DESCRIPTION
 *
 * This cpp file defines the class and methods for a PID Controller.
 */

#include <iostream>
#include "PidController.hpp"

/**
 * @brief Constructs the PidController class object with default values
 */
PidController::PidController() {
}

/**
 * @brief Constructs the PidController object with user defined values
 */
PidController::PidController(double Kp, double Ki, double Kd, double dt)
    : kp_(Kp),
      ki_(Ki),
      kd_(Kd),
      dt_(dt) {
  std::cout << "User defined PID constants are " << "Kp:" << kp_ << " Ki:"
            << ki_ << " Kd:" << kd_ << " dt:" << dt_ << std::endl;
}

/**
 * @brief Computes the state based on target and actual state of the system
 */
double PidController::Compute(double targetState) {
    // Calculate error
double error = targetState - currentState_;
// Calculation for Proportional term
double proportionalTerm = kp_ * error;
// Calculation for Integral term
double integralTerm = ki_ * error * dt_;
// Calculation for Derivative term
double derivative = error / dt_;
double derivativeTerm = kd_ * derivative;
// Calculate total output
double output = proportionalTerm + integralTerm + derivativeTerm;
    if (output > 999) {
        output = 999;
    }
    if (output < -50) {
        output = -50;
    }
return output;
}

/**
 * @brief This method returns the sampling time
 */
double PidController::getdt() {
  return dt_;
}

/**
 * @brief Destructor for PidController class object
 */
PidController::~PidController() {
}
