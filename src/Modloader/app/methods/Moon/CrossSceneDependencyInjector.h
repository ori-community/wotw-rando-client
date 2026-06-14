#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CrossSceneDependencyInjector.h>
#include <Modloader/app/structs/CrossSceneDependencyInjector_ObjectReference.h>

namespace app::classes::Moon::CrossSceneDependencyInjector {
    IL2CPP_REGISTER_METHOD(0x00CD0400, void, Awake, app::CrossSceneDependencyInjector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CD04B0, void, OnDestroy, app::CrossSceneDependencyInjector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CD06A0, void, InjectAll, app::CrossSceneDependencyInjector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CD0730, void, Inject, app::CrossSceneDependencyInjector* this_ptr, app::CrossSceneDependencyInjector_ObjectReference* reference)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::CrossSceneDependencyInjector* this_ptr)
} // namespace app::classes::Moon::CrossSceneDependencyInjector
