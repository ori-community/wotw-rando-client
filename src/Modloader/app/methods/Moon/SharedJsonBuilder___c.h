#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonBuilder.h>
#include <Modloader/app/structs/SharedJsonBuilder_c.h>

namespace app::classes::Moon::SharedJsonBuilder___c {
    IL2CPP_REGISTER_METHOD(0x030F1D00, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SharedJsonBuilder_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030F1E40, int32_t, __cctor_b__9_0, app::SharedJsonBuilder_c* this_ptr, app::JsonBuilder* a, app::JsonBuilder* b)
} // namespace app::classes::Moon::SharedJsonBuilder___c
