#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Flammable.h>
#include <Modloader/app/structs/Flammable_c.h>

namespace app::classes::Moon::Flammable___c {
    IL2CPP_REGISTER_METHOD(0x01225AE0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Flammable_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__59_0, app::Flammable_c* this_ptr, app::Flammable* _p0_)
} // namespace app::classes::Moon::Flammable___c
