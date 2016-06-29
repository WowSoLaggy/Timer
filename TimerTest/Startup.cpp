#include "stdafx.h"

#include "Timer.h"


void main(int argc, char *argv[])
{
	Timer timer;
	double time;

	timer.Start();

	Sleep(1500);
	time = timer.Check();
	std::cout << "Check: " << time << std::endl;

	Sleep(1000);
	time = timer.Check();
	std::cout << "Check: " << time << std::endl;

	Sleep(1000);
	time = timer.Check();
	std::cout << "Check: " << time << std::endl;

	Sleep(1000);
	time = timer.Restart();
	std::cout << "Restart: " << time << std::endl;

	Sleep(1000);
	time = timer.Check();
	std::cout << "Check: " << time << std::endl;

	Sleep(1000);
	time = timer.Check();
	std::cout << "Check: " << time << std::endl;

	std::getchar();
}
