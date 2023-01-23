#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TimesliceBudgetCaptureAgent.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/ITimeSlicedJob.h>
#include <Modloader/app/structs/SliceExecutionStats.h>

namespace app::classes::TimesliceBudgetCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (app::TimesliceBudgetCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F93D0, app::String__Array*, GetDataHeaderNames, (app::TimesliceBudgetCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F9450, void, OnInitialize, (app::TimesliceBudgetCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F9790, void, OnBudgetExceeded, (app::TimesliceBudgetCaptureAgent * this_ptr, app::ITimeSlicedJob* job, float budget, float elapsed_time))
    IL2CPP_REGISTER_METHODINFO(0x04782E28, TimesliceBudgetCaptureAgent_OnBudgetExceeded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010F9C20, void, OnSliceExecuted, (app::TimesliceBudgetCaptureAgent * this_ptr, app::SliceExecutionStats stats))
    IL2CPP_REGISTER_METHODINFO(0x0471F908, TimesliceBudgetCaptureAgent_OnSliceExecuted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010F9D00, app::String__Array*, GetFrameData, (app::TimesliceBudgetCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010FA090, void, OnTestEnd, (app::TimesliceBudgetCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010FA130, void, Reset, (app::TimesliceBudgetCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010FA140, void, ctor, (app::TimesliceBudgetCaptureAgent * this_ptr))
} // namespace app::classes::TimesliceBudgetCaptureAgent
