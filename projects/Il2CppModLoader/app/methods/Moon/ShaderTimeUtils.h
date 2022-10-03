#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::ShaderTimeUtils {
    IL2CPP_REGISTER_METHOD(0x025665D0, void, SetGameTime, (float time))
    IL2CPP_REGISTER_METHOD(0x025666C0, void, SetTurbulenceTime, (float time))
    IL2CPP_REGISTER_METHOD(0x025667B0, void, cctor, ())
} // namespace app::classes::Moon::ShaderTimeUtils
