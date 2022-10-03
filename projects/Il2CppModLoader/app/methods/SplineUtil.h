#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SplineUtil {
    IL2CPP_REGISTER_METHOD(0x009A30C0, int32_t, ClampIndex, (int32_t idx, int32_t len))
    IL2CPP_REGISTER_METHOD(0x009A30E0, int32_t, WrapIndex, (int32_t idx, int32_t len))
    IL2CPP_REGISTER_METHOD(0x009A3110, float, WrapPosition, (app::BaseSpline_SplineWrapMode__Enum wrapmode, float pos, float len))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SplineUtil * this_ptr))
} // namespace app::classes::SplineUtil
