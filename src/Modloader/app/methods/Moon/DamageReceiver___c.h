#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageReceiver_c.h>
#include <Modloader/app/structs/DamageResult.h>

namespace app::classes::Moon::DamageReceiver___c {
    IL2CPP_REGISTER_METHOD(0x01200B50, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DamageReceiver_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__133_0, app::DamageReceiver_c* this_ptr, app::DamageResult _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__133_1, app::DamageReceiver_c* this_ptr, app::Damage* _p0_)
} // namespace app::classes::Moon::DamageReceiver___c
