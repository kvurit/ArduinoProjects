#ifndef State_h
#define State_h

class State {
public:
    //* Enviroment
    long Time;

    int Heat;

    //* Things
    bool LightsOn;

    int DoorState;

    bool HeaterOn;

    //* User actions
	bool ButtonClicked;
	
	bool ButtonHold;

	bool ButtonReleased;

    //* Goals
    long LightsOnTime;

    long LightsOffTime;

    long DoorOpenTime;

    long DoorCloseTime;

	int HeatGoal;
	
	int DoorActivationDuration;

    //* Logs
	long DoorActivationTime;

    //* Logs
	long HeaterChangedTime;	
	
	long TimeFactor;
};

#endif