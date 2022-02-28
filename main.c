#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	bool setTurbo = false;
	bool enableTurbo = false;

	char *tmp;
	int c;

	while((c = getopt(argc, argv, "t?")) != -1)
	{
		switch(c)
		{
			case 't':
				setTurbo = true;
				tmp = optarg;
				if(tmp[0] == '0')
					enableTurbo = false;
				else
					enableTurbo = true;
				break;
		}
	}

	if(setTurbo)
		if(enableTurbo)
			printf("Enabling turbo\n");
		else
			printf("Disabling turbo\n");

	return 0;
}
