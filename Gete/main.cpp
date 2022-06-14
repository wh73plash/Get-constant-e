//
//  main.cpp
//  Gete
//
//  Created by 김제인 on 2022/06/14.
//

#include <iostream>
#include <unistd.h>

int32_t main(const int32_t argc, const char** argv, const char** env) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    // insert code here...
    double e = 1;
    for(int i = 1; ; ++i){
        double buffer;
        double factorial = 1;
        for(int j = 1; j <= i; ++j){
            factorial *= j;
        }
        buffer = 1 / factorial;
        e += buffer;
        std::printf("%0.60lf\n", e);
        usleep(100000);
    }
    
    return EXIT_SUCCESS;
}
