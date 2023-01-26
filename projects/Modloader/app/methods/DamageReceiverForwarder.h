#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageReceiverForwarder.h>
#include <Modloader/app/structs/Damage.h>

namespace app::classes::DamageReceiverForwarder {
    IL2CPP_REGISTER_METHOD(0x00DC8A50, void, OnRecieveDamage, (app::DamageReceiverForwarder * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00DC8AF0, void, ctor, (app::DamageReceiverForwarder * this_ptr))
} // namespace app::classes::DamageReceiverForwarder
