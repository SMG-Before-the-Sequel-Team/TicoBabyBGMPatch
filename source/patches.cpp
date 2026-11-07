#include "kamek/hooks.h"
#include "revolution/types.h"

// Disable TicoBaby from muting stage BGM
kmWrite32(0x803678E8, PPC_NOP);
