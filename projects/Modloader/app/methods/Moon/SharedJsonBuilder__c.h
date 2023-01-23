#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SharedJsonBuilder_c.h>
#include <Modloader/app/structs/JsonBuilder.h>

namespace app::classes::Moon::SharedJsonBuilder___c {
    IL2CPP_REGISTER_METHOD(0x030F1D00, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SharedJsonBuilder_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030F1E40, int32_t, __cctor_b__9_0, (app::SharedJsonBuilder_c * this_ptr, app::JsonBuilder* a, app::JsonBuilder* b))
    IL2CPP_REGISTER_METHODINFO(0x04752828, SharedJsonBuilder_c___cctor_b__9_0__MethodInfo)
} // namespace app::classes::Moon::SharedJsonBuilder___c
