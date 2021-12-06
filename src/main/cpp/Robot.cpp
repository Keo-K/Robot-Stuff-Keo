// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.h"

void Robot::RobotInit() {}
void Robot::RobotPeriodic() {}

void Robot::AutonomousInit() {}
void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {}
void Robot::TeleopPeriodic() {
  // motor.Set(ControlMode::PercentOutput, 0.25);
  bool buttonOnePressed = false;
  buttonOnePressed  = controller.GetRawButton(1);
  if (buttonOnePressed) {
    motor.Set(ControlMode::PercentOutput, 0.25); // tells the motor to move at 1/4 speed, if the button is pressed
  } else {
    motor.Set(ControlMode::PercentOutput, 0); // if the button is not pressed, the motor does not move
  }
}

void Robot::DisabledInit() {}
void Robot::DisabledPeriodic() {}

void Robot::TestInit() {}
void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif
