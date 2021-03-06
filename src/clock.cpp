/*
 * clock.cpp
 *
 * hfcxx package <https://github.com/ifilot/hfcxx>
 *
 * Author: Ivo Filot <ivo@zuidstijl.nl>
 * Description:
 */
 
#include "clock.h"

Clock::Clock() {
	this->tic();
}

void Clock::tic() {
	gettimeofday(&time1, NULL);
}

void Clock::toc() {
	gettimeofday(&time2, NULL);
}

double Clock::passed() {
	seconds = time2.tv_sec - time1.tv_sec;
	useconds = time2.tv_usec - time1.tv_usec;
	mtime = ((seconds) * 1000 + useconds / 1000.0) + 0.5;

	return double(mtime);
}
