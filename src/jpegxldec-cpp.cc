#include <iostream>

#include "jpegxl_box.h"
#include "jpegxl_file.h"
#include <fstream>

int main(int argc, char* argv[]) {
    if(argc == 0) {
        exit(0);
    }
    if(argc == 1) {
        printf("Usage: %s input.jxl", argv[0]);
        exit(0);
    }

    const char* jpegxl_source_image = argv[1];
    printf("Input file: %s\n",jpegxl_source_image); 
    
    std::ifstream input_file(argv[1],std::ios::binary);
    if(!input_file.is_open()) {
        printf("Error: File couldn't be opened. Make sure it exists!\n");
        exit(1);
    }
}