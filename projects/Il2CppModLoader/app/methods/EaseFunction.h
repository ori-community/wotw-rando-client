#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::EaseFunction {
    IL2CPP_REGISTER_METHOD(0x00BF6FC0, float, easeInOutSine, (float value))
    IL2CPP_REGISTER_METHODINFO(0x0473F9F8, EaseFunction_easeInOutSine__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, float, easeLinear, (float value))
} // namespace app::classes::EaseFunction
