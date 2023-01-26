#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaselineMeasureTask.h>
#include <Modloader/app/structs/Action_1_String_.h>
#include <Modloader/app/structs/BaselineMeasureTask_BaselineMeasureState__Enum.h>
#include <Modloader/app/structs/HPerfTestResult.h>
#include <Modloader/app/structs/List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_.h>
#include <Modloader/app/structs/SceneSample.h>

namespace app::classes::Moon::HierarchyPerformanceTest::BaselineMeasureTask {
    IL2CPP_REGISTER_METHOD(0x0149A2C0, void, add_OnFailed, (app::BaselineMeasureTask * this_ptr, app::Action_1_String_* value))
    IL2CPP_REGISTER_METHOD(0x0149A3B0, void, remove_OnFailed, (app::BaselineMeasureTask * this_ptr, app::Action_1_String_* value))
    IL2CPP_REGISTER_METHOD(0x0149A4A0, void, ctor, (app::BaselineMeasureTask * this_ptr, app::SceneSample* model))
    IL2CPP_REGISTER_METHOD(0x0149A6C0, void, Update, (app::BaselineMeasureTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0149A710, void, UpdateState, (app::BaselineMeasureTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0149A8E0, void, ChangeState, (app::BaselineMeasureTask * this_ptr, app::BaselineMeasureTask_BaselineMeasureState__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x0149ABB0, void, FinishMeasure, (app::BaselineMeasureTask * this_ptr, double cpu_time, double gpu_time, double srp_time))
    IL2CPP_REGISTER_METHOD(0x0149B050, void, CacheStartIndex, (app::BaselineMeasureTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0149B0F0, void, CacheEndIndex, (app::BaselineMeasureTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0149B190, double, GetCurrentCapturedCPUTime, (app::BaselineMeasureTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0149B240, double, GetCurrentCapturedGPUTime, (app::BaselineMeasureTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0149B2F0, double, GetCurrentCapturedSRPGameViewTime, (app::BaselineMeasureTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0149B3A0, app::HPerfTestResult*, GetAverageResult, (app::BaselineMeasureTask * this_ptr, app::List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_* results))
} // namespace app::classes::Moon::HierarchyPerformanceTest::BaselineMeasureTask
