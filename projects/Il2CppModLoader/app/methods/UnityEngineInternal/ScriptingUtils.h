#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngineInternal::ScriptingUtils {
    IL2CPP_REGISTER_METHOD(0x013DCFD0, app::Delegate*, CreateDelegate, (app::Type * type, app::MethodInfo_1* method_info))
}
