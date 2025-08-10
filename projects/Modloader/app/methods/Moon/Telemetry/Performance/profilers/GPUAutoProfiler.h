#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GPUAutoProfiler.h>
#include <Modloader/app/structs/GPUAutoProfilerReport.h>
#include <Modloader/app/structs/GPUAutoProfiler_ProfilerState__Enum.h>

namespace app::classes::Moon::Telemetry::Performance::profilers::GPUAutoProfiler {
    IL2CPP_REGISTER_METHOD(0x00E41310, bool, get_Enabled, )
    IL2CPP_REGISTER_METHOD(0x00E413E0, void, set_Enabled, bool value)
    IL2CPP_REGISTER_METHOD(0x00E416C0, app::GPUAutoProfilerReport*, get_LastReport, )
    IL2CPP_REGISTER_METHOD(0x00E41760, void, set_LastReport, app::GPUAutoProfilerReport* value)
    IL2CPP_REGISTER_METHOD(0x00E41810, int32_t, get_SampleDuration, )
    IL2CPP_REGISTER_METHOD(0x00E41900, int32_t, get_SampleInterval, )
    IL2CPP_REGISTER_METHOD(0x00E419F0, int32_t, get_BaselineMeasurementTime, )
    IL2CPP_REGISTER_METHOD(0x00E41AE0, void, InitializeSamples, app::GPUAutoProfiler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E41E00, void, SetState, app::GPUAutoProfiler* this_ptr, app::GPUAutoProfiler_ProfilerState__Enum state)
    IL2CPP_REGISTER_METHOD(0x00E42220, void, OnEnable, app::GPUAutoProfiler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E42690, void, OnDisable, app::GPUAutoProfiler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E42A30, void, StartTest, )
    IL2CPP_REGISTER_METHOD(0x00E42C30, void, StopTest, )
    IL2CPP_REGISTER_METHOD(0x00E42D90, void, Update, app::GPUAutoProfiler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E43130, void, OnGUI, app::GPUAutoProfiler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E43460, void, SuspendGameplay, )
    IL2CPP_REGISTER_METHOD(0x00E434F0, void, ResumeGameplay, )
    IL2CPP_REGISTER_METHOD(0x00E43580, void, EnsureImguiRegistered, app::GPUAutoProfiler* this_ptr, bool registered)
    IL2CPP_REGISTER_METHOD(0x00E43680, void, ctor, app::GPUAutoProfiler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E437E0, void, cctor, )
} // namespace app::classes::Moon::Telemetry::Performance::profilers::GPUAutoProfiler
