#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

//______Introduire les prototypes________

double kmh_to_ms(double s_kmh);
double reaction_distance(double speed, double reaction_time);
double break_distance(double speed, double deceleration);
double total_stop_distance(double speed, double reaction_time, double deceleration);
bool stop_before_obstacle(double stop_distance, double obstacle_distance);

// Variables globales:

double s_kmh = 0;
double s_ms = 0;
double reaction_time = 0;
double deceleration = 0;
double obstacle_distance = 0;

int main(int argc, const char *argv[])
{
	s_kmh = 3.6; // A enlever plus tard une fois que la saisie sera configurée.
	s_ms = kmh_to_ms(s_kmh);
	printf("%.2f\n", s_ms);

	reaction_distance(s_ms, reaction_time);
	double dist = reaction_distance(s_ms, reaction_time);
	return 0;
}

double kmh_to_ms(double s_kmh)
{
	assert(s_kmh >= 0);
	return s_kmh / 3.6;
}

double reaction_distance(double s_ms, double reaction_time)
{
	// d = v * t

	assert(reaction_time >= 0);
	

	return s_ms * reaction_time;
}

double break_distance(double s_ms, double deceleration){
	// d = v2/2*deceleration¨
	return (s_ms * s_ms) / (2*deceleration);
}