#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::UnityVersionInfo {
    IL2CPP_REGISTER_METHOD(0x0118CF90, void, logVersionInfo, ())
    IL2CPP_REGISTER_METHOD(0x0118D200, void, append, (app::StringBuilder * sb, bool symbol_value, app::String* symbol_name))
} // namespace app::classes::Moon::UnityVersionInfo
