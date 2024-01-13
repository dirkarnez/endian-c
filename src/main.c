unsigned int swap_unsigned_int(unsigned int in_32) {
  return ((in_32 & 0xFF) << 24) | (((in_32 >> 8) & 0xFF) << 16) | (((in_32 >> 16) & 0xFF) << 8) | (((in_32 >> 24) & 0xFF));
}

// Your First C++ Program

#include <iostream>

int main() {
    std::cout << swap_unsigned_int(0x12345678); //0x7856 3412
    return 0;
}
