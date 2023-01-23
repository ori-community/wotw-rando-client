#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinDashNew_c.h>
#include <Modloader/app/structs/MonoBehaviour.h>
#include <Modloader/app/structs/DigZone.h>

namespace app::classes::SeinDashNew___c {
    IL2CPP_REGISTER_METHOD(0x006FCE30, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SeinDashNew_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00502220, app::MonoBehaviour*, _FindClosestDiggableBody_b__93_0, (app::SeinDashNew_c * this_ptr, app::DigZone* x))
    IL2CPP_REGISTER_METHODINFO(0x04760240, SeinDashNew_c__FindClosestDiggableBody_b__93_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__174_0, (app::SeinDashNew_c * this_ptr, bool* _p0_))
    IL2CPP_REGISTER_METHODINFO(0x04734150, SeinDashNew_c___ctor_b__174_0__MethodInfo)
} // namespace app::classes::SeinDashNew___c
