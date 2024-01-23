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
		printf("%d\n", countdown);
		sleep(1);
	}
	measure++;
	while (measure <= 4)
	{
		printf("Measure: %d\n", measure);
		for (beat = 1; beat <= 4; beat++)
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
	return (0);
}
