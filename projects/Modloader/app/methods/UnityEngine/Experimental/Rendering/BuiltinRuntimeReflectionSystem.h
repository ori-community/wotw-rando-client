#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BuiltinRuntimeReflectionSystem.h>

namespace app::classes::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::BuiltinRuntimeReflectionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02432C90, bool, TickRealtimeProbes, app::BuiltinRuntimeReflectionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose_1, app::BuiltinRuntimeReflectionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose_2, app::BuiltinRuntimeReflectionSystem* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x02432C90, bool, BuiltinUpdate, )
    IL2CPP_REGISTER_METHOD(0x02432CE0, app::BuiltinRuntimeReflectionSystem*, Internal_BuiltinRuntimeReflectionSystem_New, )
} // namespace app::classes::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem
