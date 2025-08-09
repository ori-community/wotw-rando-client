#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IScriptableRuntimeReflectionSystem.h>
#include <Modloader/app/structs/ScriptableRuntimeReflectionSystemWrapper.h>

namespace app::classes::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ScriptableRuntimeReflectionSystemWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F2AB40, app::IScriptableRuntimeReflectionSystem*, get_implementation, app::ScriptableRuntimeReflectionSystemWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FA490,
        void,
        set_implementation,
        app::ScriptableRuntimeReflectionSystemWrapper* this_ptr,
        app::IScriptableRuntimeReflectionSystem* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02525040,
        void,
        Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes,
        app::ScriptableRuntimeReflectionSystemWrapper* this_ptr,
        void* result
    )
} // namespace app::classes::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper
