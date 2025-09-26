#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <time.h>


/*
int main() {}
int main(int argc, char *argv[]) {}  argument count agument vector
int main(int argc, char *argv[], char *envp[]) {} implementation-defined   an array of pointers to the execution environment variables.*/

int main(int argc, char *argv[], char *envp[])
{
    std::cout << "argc == " << argc << '\n';

    for (int ndx{}; ndx != argc; ++ndx)
        std::cout << "argv[" << ndx << "] == " << std::quoted(argv[ndx]) << '\n';
    std::cout << "argv[" << argc << "] == "
        << static_cast<void*>(argv[argc]) << '\n';

    /* ... */

    return argc == 3 ? EXIT_SUCCESS : EXIT_FAILURE; // optional return value
}
