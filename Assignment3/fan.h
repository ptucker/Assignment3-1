#ifndef fan_h
#define fan_h

class Fan {
	public:
		Fan(); //default constructor

		bool getState(); //returns if the fan is on or off
		void toggleState(); //slips the swtich to turn on/off the fan

		int getSpeed(); //return speed of fan
		bool setSpeed(int); //sets speed as 1, 2, or 3, returns true for value speeds

		double getRadius(); //return fan radius
		bool setRadius(int); //sets fan radius, returns true for value radii

	private:
		int speed;
		bool on;
		double radius;
};

#endif