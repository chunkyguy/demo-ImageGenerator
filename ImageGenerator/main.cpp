//
//  main.cpp
//  ImageGenerator
//
//  Created by Sidharth on 1/6/18.
//  Copyright © 2018 whackylabs. All rights reserved.
//
#include <cmath>
#include <iostream>

void generateImage(const int nx, const int ny)
{
    std::cout << "P3" << std::endl;
    std::cout << nx << " " << ny << std::endl;
    std::cout << "255" << std::endl;
    
    for (int j = 0; j < ny; ++j) {
        for (int i = 0; i < nx; ++i) {
            float r = float(i)/float(nx);
            float g = float(j)/float(ny);
            float b = 0.5f;
            int rr = int(ceil(255.0f * r));
            int gg = int(ceil(255.0f * g));
            int bb = int(ceil(255.0f * b));
            std::cout << rr << " " << gg << " " << bb << std::endl;
        }
    }
}

int main(int argc, const char * argv[]) {
    int nx = 200, ny = 100;
    generateImage(nx, ny);
    return 0;
}
