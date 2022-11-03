#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::CrossSceneDependencyDatabase {
    IL2CPP_REGISTER_METHOD(0x00CCF4F0, void, AddObject, (app::CrossSceneDependency * cross_scene_dependency))
    IL2CPP_REGISTER_METHOD(0x00CCF640, void, RemoveObject, (app::CrossSceneDependency * cross_scene_dependency))
    IL2CPP_REGISTER_METHOD(0x00CCF710, app::CrossSceneDependency*, GetByID, (int32_t object_i_d))
    IL2CPP_REGISTER_METHOD(0x00CCF830, void, AddInjector, (app::CrossSceneDependencyInjector * injector))
    IL2CPP_REGISTER_METHOD(0x00CCFB90, void, RemoveInjector, (app::CrossSceneDependencyInjector * injector))
    IL2CPP_REGISTER_METHOD(0x00CCFD00, app::List_1_Moon_CrossSceneDependencyInjector_*, GetInjectors, (int32_t object_i_d))
    IL2CPP_REGISTER_METHOD(0x00CCFE20, void, OnEnable, (app::CrossSceneDependencyDatabase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CCFF40, void, ctor, (app::CrossSceneDependencyDatabase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CD0190, void, cctor, ())
} // namespace app::classes::Moon::CrossSceneDependencyDatabase
