#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::NegativeScaleFixer___c {
    IL2CPP_REGISTER_METHOD(0x0088C720, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NegativeScaleFixer_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0088C860, app::Vector2, _Fix_b__4_0, (app::NegativeScaleFixer_c * this_ptr, app::Vector3 v))
    IL2CPP_REGISTER_METHODINFO(0x047541B0, NegativeScaleFixer_c__Fix_b__4_0__MethodInfo)
} // namespace app::classes::NegativeScaleFixer___c
