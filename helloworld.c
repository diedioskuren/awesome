#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	pid_t pid = fork();
	printf("Hello World: %d\n", pid);
}
