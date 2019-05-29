#include "fan.h"

Fan::Fan() {
	speed = 1;
	on = false;
	radius = 5;
}

bool Fan::getState() {
	return on;
}
void Fan::toggleState() {
	on = !on;
}

int Fan::getSpeed() {
	return speed;
}
bool Fan::setSpeed(int newSpeed) {
	if (newSpeed == 1 || newSpeed == 2 || newSpeed == 3){
		speed = newSpeed;
		return true;
	}
	else {
		return false;
	}
}

double Fan::getRadius() {
	return radius;
}
bool Fan::setRadius(int newRadius) {
	if (newRadius > 0) {
		radius = newRadius;
		return true;
	}
	else {
		return false;
	}
}
