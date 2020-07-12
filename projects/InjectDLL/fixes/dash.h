#pragma once

namespace PlayerAbilities
{
    extern void (*SetAbility) (app::PlayerAbilities* this_ptr, uint8_t ability, bool value);
    extern bool (*HasAbility) (app::PlayerAbilities* this_ptr, uint8_t ability);
}
