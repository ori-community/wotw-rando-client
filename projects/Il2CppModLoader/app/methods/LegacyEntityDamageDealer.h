#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LegacyEntityDamageDealer {
    IL2CPP_REGISTER_METHOD(0x00A20D70, void, OnValidate, (app::LegacyEntityDamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A20E60, void, Awake, (app::LegacyEntityDamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A21010, void, ctor, (app::LegacyEntityDamageDealer * this_ptr))
}
