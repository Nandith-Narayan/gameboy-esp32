#ifndef CPU_H
#define CPU_H

#define PC programCounter
#define SP stackPointer

#define REGISTER_L 5
#define REGISTER_H 4
#define REGISTER_E 3
#define REGISTER_D 2
#define REGISTER_C 1
#define REGISTER_B 0
#define REGISTER_F 6
#define REGISTER_A 7

#define regA reg[REGISTER_A]
#define regB reg[REGISTER_B]
#define regC reg[REGISTER_C]
#define regD reg[REGISTER_D]
#define regE reg[REGISTER_E]
#define regH reg[REGISTER_H]
#define regL reg[REGISTER_L]
#define regF reg[REGISTER_F]

#include <stdint.h>

#include "Memory.h"

class CPU{
    
    private:
        uint8_t reg[8];
        uint16_t stackPointer;
        uint16_t programCounter;
    
    public:
        void execute();
    
};


#endif