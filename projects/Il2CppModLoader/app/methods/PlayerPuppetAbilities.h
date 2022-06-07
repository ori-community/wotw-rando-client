#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayerPuppetAbilities {
    IL2CPP_REGISTER_METHOD(0x01427E20, bool, HasAbility, (app::PlayerPuppetAbilities * this_ptr, app::AbilityType__Enum ability_type))
    IL2CPP_REGISTER_METHOD(0x01427EC0, void, SetAbility, (app::PlayerPuppetAbilities * this_ptr, app::AbilityType__Enum ability_type, bool value))
    IL2CPP_REGISTER_METHOD(0x01427FC0, void, RemoveAllAbilities, (app::PlayerPuppetAbilities * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01428090, void, ctor, (app::PlayerPuppetAbilities * this_ptr))
}
