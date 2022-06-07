#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Vector2Int {
    IL2CPP_REGISTER_METHOD(0x00115520, void, ctor, (app::Vector2Int__Boxed * this_ptr, int32_t x, int32_t y))
    IL2CPP_REGISTER_METHOD(0x001EBC90, int32_t, get_x, (app::Vector2Int__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00218130, int32_t, get_y, (app::Vector2Int__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00229450, bool, Equals_1, (app::Vector2Int__Boxed * this_ptr, app::Object * other))
    IL2CPP_REGISTER_METHOD(0x00229530, bool, Equals_2, (app::Vector2Int__Boxed * this_ptr, app::Vector2Int other))
    IL2CPP_REGISTER_METHOD(0x00229550, int32_t, GetHashCode, (app::Vector2Int__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00229560, app::String *, ToString, (app::Vector2Int__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C74720, void, cctor, ())
}
