#include <iostream>

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
}