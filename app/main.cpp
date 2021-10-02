// Copyright 2021 Aswath Muthuselvam
/**
 *
 * @file    main.cpp
 * @author  Aswath Muthuselvam
 * @author  Part 1 :Aswath Muthuselvam (Driver) , Prannoy Namala (Navigator)
 * @date    10/1/2021
 * @version 1.0
 *
 * @brief   Main execution file.
 *
 * @section DESCRIPTION
 *
 * This hpp file defines the class and methods for a PID Controller.
 */

#include <iostream>
#include <memory>
#include "PidController.hpp"

/**
 * @brief Main function
 * @return Program execution status
 */
int main() {
  /**
   * Create an object for class Controller_PID and call the compute method.
   */
  // stores desired velocity, proportional gain
  double targetState, kp, ki, kd, dt;

  // integral gain, differential gain and time step.
  std::cout << "Enter the desired proportional, integral,"
            " and derivate gain and time-step: ";
  std::cin >> kp >> ki >> kd >> dt;
  // accepts parameter values and stores in the corresponding variables.
  std::cout << "\n Enter the target state of the system: ";
  std::cin >> targetState;  // accepts desired velocity.

  // create object of class Controller_PID
  std::shared_ptr<PidController> pidController;
  pidController = std::make_shared<PidController>(kp, ki, kd, dt);

  // call the compute method to get the calculated velocity.
  double updatedState = pidController->Compute(targetState);

  // Output the calculated velocity
  std::cout << "The new state of the system is: " << updatedState << " m/s"
            << std::endl;
  return 0;
}
