#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CrossSceneDependencyInjector_ObjectReference.h>

namespace app::classes::Moon::CrossSceneDependencyInjector_ObjectReference {
    IL2CPP_REGISTER_METHOD(0x00CD0AE0, bool, get_IsValid, app::CrossSceneDependencyInjector_ObjectReference* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_Injected, app::CrossSceneDependencyInjector_ObjectReference* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_Injected, app::CrossSceneDependencyInjector_ObjectReference* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CrossSceneDependencyInjector_ObjectReference* this_ptr)
} // namespace app::classes::Moon::CrossSceneDependencyInjector_ObjectReference
