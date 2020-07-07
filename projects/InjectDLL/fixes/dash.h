#pragma once

extern void (*PlayerAbilities_SetAbility) (app::PlayerAbilities* this_ptr, uint8_t ability, bool value);
extern bool (*PlayerAbilities_HasAbility) (app::PlayerAbilities* this_ptr, uint8_t ability);
