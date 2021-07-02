
#include "Robot.h"

#include <iostream>

#include <frc/smartdashboard/SmartDashboard.h>

Robot::Robot():
    a_xbox(XBOX),
    a_joystick(JOYSTICK)
{

}

void Robot::RobotInit() {}

void Robot::RobotPeriodic() {}

void Robot::AutonomousInit() {}

void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {}

void Robot::TeleopPeriodic() {}

void Robot::DisabledInit() {}

void Robot::DisabledPeriodic() {}

void Robot::TestInit() {}

void Robot::TestPeriodic() {}

//activates the robot
#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif
