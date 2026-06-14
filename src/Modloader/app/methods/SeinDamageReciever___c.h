#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/SeinDamageReciever_c.h>

namespace app::classes::SeinDamageReciever___c {
    IL2CPP_REGISTER_METHOD(0x006ED630, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SeinDamageReciever_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__161_0, app::SeinDamageReciever_c* this_ptr, app::Damage* _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__161_1, app::SeinDamageReciever_c* this_ptr, app::Damage* _p0_)
} // namespace app::classes::SeinDamageReciever___c
