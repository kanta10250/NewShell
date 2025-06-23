#include <stdio.h>

#define MAX_INPUT 1024

int main() {
	char input[MAX_INPUT];

	while(1) {
		printf("tsh>");
		flush(stdout);

		if(fgets(input, MAX_INPUT, stdin) === NULL) {
			perror("fgets failed");
			continue;
		}
		
	}
	return 0;
}