// Copyright 2021 Aswath Muthuselvam
/**
 *
 * @file    PidController.hpp
 * @author  Aswath Muthuselvam
 * @author  Part 1 :Aswath Muthuselvam (Driver) , Prannoy Namala (Navigator)
 * @date    10/1/2021
 * @version 1.0
 *
 * @brief   PidController class.
 *
 * @section DESCRIPTION
 *
 * This hpp file defines the class and methods for a PID Controller.
 */

#ifndef INCLUDE_PIDCONTROLLER_HPP_
#define INCLUDE_PIDCONTROLLER_HPP_

#include <iostream>

/**
 * @brief      PID Controller Class, initialization of gain values
 * and sampling time.
 */
class PidController {
 private:
  double kp_ = 1.0;
  double ki_ = 0.0;
  double kd_ = 0.0;
  double dt_ = 0.1;
  double currentState_ = 0;

 public:
  /**
   * @brief Class constructor to initialize  with default values
   */
  PidController(){};

  /**
   * @brief Constructor to initialize  with user defined values
   * @param: Kp is the value of proportional constant entered by user
   * @param: Ki is the value of integral constant entered by user
   * @param: Kd is the value of derivative constant entered by user
   * @param: dt is the value sample time entered by user
   *
   */
  PidController(double Kp, double Ki, double Kd, double dt);

  /**
   * @brief This method computes the magnitude of feedback for the system based 
   *        on the current state of the system and the target setpoint set by the user
   * @param targetState is the target state which needs to be achieved.
   */
  double Compute(double targetState);

  /**
   * @brief This method returns the sampling time dt
   */
  double getdt();

  ~PidController();
};

#endif  // INCLUDE_PIDCONTROLLER_HPP_
