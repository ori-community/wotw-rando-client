#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PerformanceMonitor.h>
#include <Modloader/app/structs/FPSSampleData.h>
#include <Modloader/app/structs/FPSTestResult.h>
#include <Modloader/app/structs/SceneManagerScene.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::PerformanceMonitor {
    IL2CPP_REGISTER_METHOD(0x00496C40, void, Awake, (app::PerformanceMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00496E90, void, Update, (app::PerformanceMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00497100, void, OnSceneRootLoadEarlyStart, (app::PerformanceMonitor * this_ptr, app::SceneRoot* scene_root))
    IL2CPP_REGISTER_METHOD(0x00497200, app::FPSTestResult*, GetFPSTestResult, (app::PerformanceMonitor * this_ptr, app::SceneManagerScene* scene))
    IL2CPP_REGISTER_METHOD(0x00497770, void, SetSampleData, (app::PerformanceMonitor * this_ptr, app::FPSSampleData** fps_sample_data))
    IL2CPP_REGISTER_METHOD(0x00497AB0, void, DebugLog, (app::PerformanceMonitor * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x00497B40, void, ctor, (app::PerformanceMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00497CC0, void, cctor, ())
} // namespace app::classes::PerformanceMonitor
