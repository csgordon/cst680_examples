#include <string.h>
#include <assert.h>
#include <stdio.h>

// Based on Olve Maudal's insecure coding presentation: http://www.slideshare.net/olvemaudal/insecure-coding-in-c-and-c

void launch_missiles(int n) {
	assert (n > 0);
	printf("Launching %d missiles\n", n);
}
void authenticate_and_launch(int nmissiles) {
	int allowaccess = 0;
	char response[8];

	printf("Secret: ");
	gets(response);

	if (strcmp(response, "Joshua") == 0) {
		allowaccess = 1;
	}

	if (allowaccess) {
		puts("Access granted");
		launch_missiles(nmissiles);
	}

	if (!allowaccess)
		puts("Access denied");		
}


