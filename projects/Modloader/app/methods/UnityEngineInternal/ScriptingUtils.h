#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Delegate.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/MethodInfo_1.h>

namespace app::classes::UnityEngineInternal::ScriptingUtils {
    IL2CPP_REGISTER_METHOD(0x013DCFD0, app::Delegate*, CreateDelegate, (app::Type * type, app::MethodInfo_1* method_info))
}
