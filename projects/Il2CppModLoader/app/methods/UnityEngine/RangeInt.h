#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::RangeInt {
    IL2CPP_REGISTER_METHOD(0x00115520, void, ctor, (app::RangeInt__Boxed * this_ptr, int32_t start, int32_t length))
    IL2CPP_REGISTER_METHOD(0x00217900, int32_t, get_end, (app::RangeInt__Boxed * this_ptr))
}
