#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Resolution {
    IL2CPP_REGISTER_METHOD(0x001EBC90, int32_t, get_width, (app::Resolution__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_width, (app::Resolution__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00218130, int32_t, get_height, (app::Resolution__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00113CF0, void, set_height, (app::Resolution__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x001DF780, int32_t, get_refreshRate, (app::Resolution__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00127510, void, set_refreshRate, (app::Resolution__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00218560, app::String *, ToString, (app::Resolution__Boxed * this_ptr))
}
