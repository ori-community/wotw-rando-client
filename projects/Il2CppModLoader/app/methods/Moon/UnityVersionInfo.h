#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::UnityVersionInfo {
    IL2CPP_REGISTER_METHOD(0x0118CF90, void, logVersionInfo, ())
    IL2CPP_REGISTER_METHOD(0x0118D200, void, append, (app::StringBuilder * sb, bool symbol_value, app::String * symbol_name))
}
