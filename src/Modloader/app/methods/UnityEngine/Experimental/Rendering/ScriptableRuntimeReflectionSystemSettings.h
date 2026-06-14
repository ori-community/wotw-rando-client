#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IScriptableRuntimeReflectionSystem.h>
#include <Modloader/app/structs/ScriptableRuntimeReflectionSystemWrapper.h>

namespace app::classes::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings {
    IL2CPP_REGISTER_METHOD(0x02524C80, void, set_Internal_ScriptableRuntimeReflectionSystemSettings_system, app::IScriptableRuntimeReflectionSystem* value)
    IL2CPP_REGISTER_METHOD(0x02524E10, app::ScriptableRuntimeReflectionSystemWrapper*, get_Internal_ScriptableRuntimeReflectionSystemSettings_instance, )
    IL2CPP_REGISTER_METHOD(0x02524EB0, void, ScriptingDirtyReflectionSystemInstance, )
    IL2CPP_REGISTER_METHOD(0x02524F00, void, cctor, )
} // namespace app::classes::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings
