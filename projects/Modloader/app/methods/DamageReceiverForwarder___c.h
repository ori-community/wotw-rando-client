#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageReceiverForwarder_c.h>
#include <Modloader/app/structs/Damage.h>

namespace app::classes::DamageReceiverForwarder___c {
    IL2CPP_REGISTER_METHOD(0x00DC8CF0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DamageReceiverForwarder_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__2_0, (app::DamageReceiverForwarder_c * this_ptr, app::Damage* _p0_))
} // namespace app::classes::DamageReceiverForwarder___c
