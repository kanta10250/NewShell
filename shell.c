#include <stdio.h>
#include <string.h>
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

		if(strcmp(input, "exit\n") == 0) {
			printf("bay!\n");
			break;
		}
		
		printf("%s", input);
	}
	return 0;
}