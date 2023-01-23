#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Trigger_c.h>
#include <Modloader/app/structs/Trigger_1.h>

namespace app::classes::Trigger___c {
    IL2CPP_REGISTER_METHOD(0x00B121E0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Trigger_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__41_0, (app::Trigger_c * this_ptr, app::Trigger_1* _p0_))
    IL2CPP_REGISTER_METHODINFO(0x0478DE78, Trigger_c___ctor_b__41_0__MethodInfo)
} // namespace app::classes::Trigger___c
