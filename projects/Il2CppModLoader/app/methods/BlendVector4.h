#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::BlendVector4 {
    IL2CPP_REGISTER_METHOD(0x00D2B550, void, ctor, (app::BlendVector4 * this_ptr, app::Func_2_Single_Single_* ease))
    IL2CPP_REGISTER_METHOD(0x00D2B6C0, app::Vector4, Vector4Lerp, (app::Vector4 start, app::Vector4 end, float s))
    IL2CPP_REGISTER_METHODINFO(0x047600D0, BlendVector4_Vector4Lerp__MethodInfo)
} // namespace app::classes::BlendVector4
