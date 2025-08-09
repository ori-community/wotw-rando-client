#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinController3D_EventId__Enum.h>
#include <Modloader/app/structs/SeinController3D_c.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SeinController3D___c {
    IL2CPP_REGISTER_METHOD(0x006E22A0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SeinController3D_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__89_0, app::SeinController3D_c* this_ptr, app::SeinController3D_EventId__Enum _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__89_1, app::SeinController3D_c* this_ptr, app::String* _p0_)
} // namespace app::classes::SeinController3D___c
