#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PerformanceMonitor_c.h>
#include <Modloader/app/structs/SceneManagerScene.h>

namespace app::classes::PerformanceMonitor___c {
    IL2CPP_REGISTER_METHOD(0x00497F70, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PerformanceMonitor_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004980B0, bool, _GetFPSTestResult_b__14_0, app::PerformanceMonitor_c* this_ptr, app::SceneManagerScene* scene_manager_scene)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor_b__18_0, app::PerformanceMonitor_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor_b__18_1, app::PerformanceMonitor_c* this_ptr)
} // namespace app::classes::PerformanceMonitor___c
