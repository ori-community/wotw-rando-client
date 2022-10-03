#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::HierarchyPerformanceTest::MeasureTask {
    IL2CPP_REGISTER_METHOD(0x014A89A0, void, ctor, (app::MeasureTask * this_ptr, app::HierarchyDebugMenu_GameObjectItem* item, app::SceneSample* model, app::IProfilingDataProvider* data_provider, app::Action* on_complete))
    IL2CPP_REGISTER_METHOD(0x014A89C0, void, Update, (app::MeasureTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014A8ED0, void, StartMeasure, (app::MeasureTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014A9090, void, FinishMeasure, (app::MeasureTask * this_ptr, double cpu_time, double gpu_time, double srp_game_view_time, bool set_moon_hidden_to_hierarchy))
    IL2CPP_REGISTER_METHOD(0x014A93C0, void, CacheStartIndex, (app::MeasureTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014A9460, void, CacheEndIndex, (app::MeasureTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014A9500, double, GetCurrentCapturedCPUTime, (app::MeasureTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014A95A0, double, GetCurrentCapturedGPUTime, (app::MeasureTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014A9640, double, GetCurrentCapturedSRPGameViewTime, (app::MeasureTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014A96E0, app::String*, GetFullPath, (app::MeasureTask * this_ptr, app::GameObject* game_object))
} // namespace app::classes::Moon::HierarchyPerformanceTest::MeasureTask
