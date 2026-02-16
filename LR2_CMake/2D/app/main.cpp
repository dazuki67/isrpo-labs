#include <iostream>

#ifdef USE_LIBA
#include "libA.h"
#endif

#ifdef USE_LIBB
#include "libB.h"
#endif

#ifdef USE_LIBC
#include "libC.h"
#endif

int main()
{
#ifdef USE_LIBA
    std::cout << libA_hello() << "\n";
#else
    std::cout << "libA disabled\n";
#endif

#ifdef USE_LIBB
    std::cout << libB_hello() << "\n";
#else
    std::cout << "libB disabled\n";
#endif

#ifdef USE_LIBC
    std::cout << libC_hello() << "\n";
#else
    std::cout << "libC disabled\n";
#endif

    return 0;
}
