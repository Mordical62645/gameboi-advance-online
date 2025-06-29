// Create a RAM simulator: read_byte(addr) and write_byte(addr, value)
// Write a basic command-line calculator using bitwise ops

# include <stdio.h>
# include <stdint.h>

# define RAM_SIZE 256 // 256 bytes of ram

// uint8_t      = 8 bits    = 1 byte unsigned integer   = values 0 - 255
// uint16_t     = 16 bits   = 2 byte unsigned integer.  = values 0 - 65535 (64KB RAM)


uint8_t ram[RAM_SIZE];  // RAM as byte array

// Read a byte from RAM
uint8_t read_byte(uint16_t addr) {
    if (addr >= RAM_SIZE) {
        printf("Error: Address out of bounds\n");
        return 0;
    }
    return ram[addr]; // returns a value at addr
}

// Write a byte to RAM
void write_byte(uint16_t addr, uint8_t value) {
    if (addr >= RAM_SIZE){
        printf("Error: Address out of bounds\n");
        return;
    }
    ram[addr] = value;
}

// Test
int main(){
    write_byte(0x10, 0xAB); // Write 0xAB to address 0x10
    printf("Read 0x%X from address 0x10", read_byte(0x10));

    return 0;   
}