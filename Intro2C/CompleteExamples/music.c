#include <stdio.h>
#include <unistd.h>
/**
 * play_maracas- gives cue for instrument
 *
 * Return: void (success)
*/
void play_maracas(void)
{
		printf("Maracas shake! ");
}

/**
 * play_tambourine- gives cue for instrument
 *
 * Return: void (success)
*/
void play_tambourine(void)
{
		printf("Tambourine beat!\n");
}

/**
 * clap_along- gives cue for instrument
 *
 * Return: void (success)
*/
void clap_along(void)
{
	printf("Audience Claps!\n");
}

/**
 * play_triangle- gives cue for instrument
 *
 * Return: void (success)
*/
void play_triangle(void)
{
	printf("Play Triangle!\n");
}
/**
 * main- main loop for music!
 *
 * Return: 0 (successful loop)
*/
int main(void)
{
	int beat;
	int measure = 0;
	int countdown;

	for (countdown = 5; countdown <= 8; countdown++)
	{
		/* starts loop to give the 5, 6, 7, 8 (tempo) */
		printf("%d\n", countdown);
		sleep(1);
	}
	measure++; /* moves to measure 1 */
	while (measure <= 4) /* how long is your song? this one is 4 measures long! */
	{
		printf("Measure: %d\n", measure); /* prints your measure before the beat starts */
		for (beat = 1; beat <= 4; beat++)
		/* starts your beat! this is the 4/4 time signature */
		{
			printf("%d - ", beat); /* prints which beat you're on inside the measure */
			if ((beat % 2) != 0) /* if the beat is odd, call the play_tambourine function */
			{
				play_tambourine();
				sleep(1);
			}
			else /* i.e. if the beat is NOT odd (if it is even) */
			{
				if (beat == 4) /* check if the beat is beat #4, if it is, do this first! */
				{
					play_maracas(); /* calls play_maracas function */
				}
				clap_along(); /* after checking for beat #4, it will carry out clap_along */
				sleep(1);
			}
		}
		measure++; /* increment the mesure to restart the while loop, now on next measure! */
	}
	play_triangle(); /* end the song with a triangle ding! */
	return (0); /* return 0 to indicate successful loop */
}
