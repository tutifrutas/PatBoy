#include "InstructionSet.h"

/* ALU INSTRUCTIONS */

void InstructionSet::increment16BitRegister(Register *reg) {
    reg->value++;
}


/* COMMON INSTRUCTIONS */
void InstructionSet::raiseFlag(Flag flag, byte *reg) {
    switch ( flag ) {
        case ZERO_FLAG:
            setBit(reg, ZERO_FLAG);
            break;
        case ADD_SUB_FLAG:
            setBit(reg, ADD_SUB_FLAG);
            break;
        case HALF_CARRY_FLAG:
            setBit(reg, HALF_CARRY_FLAG);
            break;
        case CARRY_FLAG:
            setBit(reg, CARRY_FLAG);
            break;
            break;
    }
}

void InstructionSet::toggleFlag(Flag flag, byte *reg) {
    switch ( flag ) {
        case ZERO_FLAG:
            toggleBit(reg, ZERO_FLAG);
            break;
        case ADD_SUB_FLAG:
            toggleBit(reg, ADD_SUB_FLAG);
            break;
        case HALF_CARRY_FLAG:
            toggleBit(reg, HALF_CARRY_FLAG);
            break;
        case CARRY_FLAG:
            toggleBit(reg, CARRY_FLAG);
            break;
    }
}

void InstructionSet::clearFlag(Flag flag, byte *reg) {
    switch ( flag ) {
        case ZERO_FLAG:
            clearBit(reg, ZERO_FLAG);
            break;
        case ADD_SUB_FLAG:
            clearBit(reg, ADD_SUB_FLAG);
            break;
        case HALF_CARRY_FLAG:
            clearBit(reg, HALF_CARRY_FLAG);
            break;
        case CARRY_FLAG:
            clearBit(reg, CARRY_FLAG);
            break;
    }
}

bool InstructionSet::checkFlag(Flag flag, const byte reg) {
    bool result = false;
    switch ( flag ) {
        case ZERO_FLAG:
            result = isBitSet(reg, ZERO_FLAG);
            break;
        case ADD_SUB_FLAG:
            result = isBitSet(reg, ADD_SUB_FLAG);
            break;
        case HALF_CARRY_FLAG:
            result = isBitSet(reg, HALF_CARRY_FLAG);
            break;
        case CARRY_FLAG:
            result = isBitSet(reg, CARRY_FLAG);
            break;
    }
    return result;
}

void InstructionSet::clearFlags(byte *reg) {
    reg = 0;
}