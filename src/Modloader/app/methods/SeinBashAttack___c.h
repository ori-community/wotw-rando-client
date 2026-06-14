#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityTargetting.h>
#include <Modloader/app/structs/SeinBashAttack_c.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::SeinBashAttack___c {
    IL2CPP_REGISTER_METHOD(0x00D8F270, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SeinBashAttack_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor_b__155_0, app::SeinBashAttack_c* this_ptr, app::Vector2 _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor_b__155_1, app::SeinBashAttack_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor_b__155_2, app::SeinBashAttack_c* this_ptr, app::EntityTargetting* _p0_)
} // namespace app::classes::SeinBashAttack___c
