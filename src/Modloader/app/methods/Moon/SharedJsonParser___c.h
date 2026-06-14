#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonParser.h>
#include <Modloader/app/structs/SharedJsonParser_c.h>

namespace app::classes::Moon::SharedJsonParser___c {
    IL2CPP_REGISTER_METHOD(0x030F26A0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SharedJsonParser_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030F1E40, int32_t, __cctor_b__8_0, app::SharedJsonParser_c* this_ptr, app::JsonParser* a, app::JsonParser* b)
} // namespace app::classes::Moon::SharedJsonParser___c
