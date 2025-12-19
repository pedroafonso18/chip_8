#ifndef INCLUDE_CHIP8_H
#define INCLUDE_CHIP8_H

#include <cstdint>

class Chip8
{
  public:
    
    Chip8();
    ~Chip8();
    
    void LoadRom(
        char const* fileName
    );

    // These are the variables, my beloved;
    uint8_t registers[16]{};
    uint8_t memory[4096]{};
    uint16_t index{};
    uint16_t pc{};
    uint16_t stack[16]{};
    uint8_t sp{};
    uint8_t delayTimer{};
    uint8_t soundTimer{};
    uint8_t keyPad[16]{};
    uint32_t video[64 * 32]{};
    uint16_t opcode;
};

#endif
