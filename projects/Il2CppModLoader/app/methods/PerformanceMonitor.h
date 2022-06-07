#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PerformanceMonitor {
    IL2CPP_REGISTER_METHOD(0x00496C40, void, Awake, (app::PerformanceMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00496E90, void, Update, (app::PerformanceMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00497100, void, OnSceneRootLoadEarlyStart, (app::PerformanceMonitor * this_ptr, app::SceneRoot * scene_root))
    IL2CPP_REGISTER_METHODINFO(0x04768CA8, PerformanceMonitor_OnSceneRootLoadEarlyStart__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00497200, app::FPSTestResult *, GetFPSTestResult, (app::PerformanceMonitor * this_ptr, app::SceneManagerScene * scene))
    IL2CPP_REGISTER_METHOD(0x00497770, void, SetSampleData, (app::PerformanceMonitor * this_ptr, app::FPSSampleData * * fps_sample_data))
    IL2CPP_REGISTER_METHOD(0x00497AB0, void, DebugLog, (app::PerformanceMonitor * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x00497B40, void, ctor, (app::PerformanceMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00497CC0, void, cctor, ())
}
