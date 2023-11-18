#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Brain_c.h>
#include <Modloader/app/structs/BrainBehaviour.h>

namespace app::classes::Moon::Brain___c {
    IL2CPP_REGISTER_METHOD(0x00CC0370, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Brain_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__26_0, (app::Brain_c * this_ptr, app::BrainBehaviour* _p0_))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__26_1, (app::Brain_c * this_ptr, app::BrainBehaviour* _p0_))
} // namespace app::classes::Moon::Brain___c
