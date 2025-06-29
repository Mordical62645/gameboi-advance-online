// Create a RAM simulator: read_byte(addr) and write_byte(addr, value)
// Write a basic command-line calculator using bitwise ops

# include <stdio.h>
# include <stdint.h>

# define RAM_SIZE 256 // 256 bytes of ram

uint8_t ram[RAM_SIZE]; // RAM as byte array

// Read a byte from RAM
uint8_t read_byte(uint8_t addr) {
    if (addr >= RAM_SIZE) {
        printf("Error: Address out of bounds\n");
        return 0;
    }
    return ram[addr];
}

int main(){
    printf("test\n");
    return 0;   
}