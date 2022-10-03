#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CurvedFloatRange {
    IL2CPP_REGISTER_METHOD(0x006D39E0, void, ctor, (app::CurvedFloatRange * this_ptr, float min, float max))
    IL2CPP_REGISTER_METHOD(0x00DBAE10, float, PickRandom, (app::CurvedFloatRange * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DBAED0, float, Lerp, (app::CurvedFloatRange * this_ptr, float t))
    IL2CPP_REGISTER_METHOD(0x00DBAFA0, float, Evaluate, (app::CurvedFloatRange * this_ptr, float t))
} // namespace app::classes::CurvedFloatRange
