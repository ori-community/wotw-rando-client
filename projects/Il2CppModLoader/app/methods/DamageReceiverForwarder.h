#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DamageReceiverForwarder {
    IL2CPP_REGISTER_METHOD(0x00DC8A50, void, OnRecieveDamage, (app::DamageReceiverForwarder * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHOD(0x00DC8AF0, void, ctor, (app::DamageReceiverForwarder * this_ptr))
}
