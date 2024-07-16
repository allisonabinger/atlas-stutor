#include <stdio.h>
#include <unistd.h>
/**
 * play_maracas- gives a cue for an instrument
 * 
 * return: void (success)
*/
void play_maracas(void)
{
	printf("maracas shake! ");
}

/**
 * play_tambourine- gives a cue for an instrument
 * 
 * return: void (success)
*/
void play_tambourine(void)
{
	printf("tambourine beat!\n");
}

/**
 * clap_along- gives a cue for an instrument
 * 
 * return: void (success)
*/
void clap_along(void)
{
	printf("audience claps!\n");
}

/**
 * play_triangle- gives a cue for an instrument
 * 
 * return: void (success)
*/
void play_triangle(void)
{
	printf("play triangle!\n");
}

/**
 * main- main music loop
 * 
 * Return: 0 (successful loop completed)
*/

int main (void)
{
	int beat;
	int measure = 0;
	int countdown;

	for(countdown = 5; countdown <=8; countdown++)
	{
		printf("%d\n", countdown);
		sleep(1);
	}
	measure++;
	while (measure <= 4)
	{
		printf("Measure: %d\n", measure);
		for (beat = 1; beat <=4; beat++)
		{
			printf("%d - ", beat);
			if ((beat % 2) != 0)
			{
				play_tambourine();
				sleep(1);
			}
			else
			{
				if (beat == 4)
				{
					play_maracas();
				}
				clap_along();
				sleep(1);
			}
		}
		measure++;
	}
	play_triangle();
	return(0);
}
