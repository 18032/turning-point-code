#pragma config(Motor,  port2,           driveL,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           driveR,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           puncherF,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           puncherB,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           liftR,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           liftL,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           ballIntake,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           clawTurner,    tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	//Main while loop.
	while(true) {
		//Set the drivetrain motor speeds:
		motor[driveL] = vexRT[Ch3];
		motor[driveR] = vexRT[Ch2];

		//Lift operation
		int liftSpeed = 127*(vexRT[Btn5U]-vexRT[Btn5D]);
		motor[liftL] = liftSpeed;
		motor[liftR] = liftSpeed;

		//Linear puncher and ball intake
		motor[ballIntake] = 127*vexRT[Btn6D];
		motor[puncherF] = 127*vexRT[Btn6U];
		motor[puncherB] = 127*vexRT[Btn6U];

	}
}
