#pragma once
#include <pch.h>

extern void (*PlayerAbilities__SetAbility) (PlayerAbilities_o* this_ptr, uint8_t ability, bool value);
extern bool (*PlayerAbilities__HasAbility) (PlayerAbilities_o* this_ptr, uint8_t ability);
