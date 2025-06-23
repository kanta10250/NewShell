#include <stdio.h>

#define MAX_INPUT 1024

int main() {
	char input[MAX_INPUT];

	while(1) {
		printf("tsh>");
		fflush(stdout);

		if(fgets(input, MAX_INPUT, stdin) == NULL) {
			perror("fgets failed");
			continue;
		}
		
		printf("%s", input);
	}
	return 0;
}