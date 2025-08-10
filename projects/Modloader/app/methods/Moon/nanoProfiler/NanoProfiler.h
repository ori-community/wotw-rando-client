#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Metric__Enum.h>
#include <Modloader/app/structs/NanoProfiler.h>
#include <Modloader/app/structs/PlayerLoopSystem.h>

namespace app::classes::Moon::nanoProfiler::NanoProfiler {
    IL2CPP_REGISTER_METHOD(0x00F2DAC0, app::NanoProfiler*, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x00F2DB60, void, set_Instance, app::NanoProfiler* value)
    IL2CPP_REGISTER_METHOD(0x006410F0, int32_t, get_CurrentFrameIndex, app::NanoProfiler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FD3F0, int32_t, get_CurrentFrameId, app::NanoProfiler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F2DC10, void, Awake, app::NanoProfiler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F2DE20, void, Update, app::NanoProfiler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F2DE80, void, FixedUpdate, app::NanoProfiler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F2DEF0, int32_t, GetMetricIndex, app::NanoProfiler* this_ptr, app::Metric__Enum metric)
    IL2CPP_REGISTER_METHOD(0x00F2DFA0, float, GetMetricValueInMS, app::NanoProfiler* this_ptr, app::Metric__Enum metric, int32_t frame)
    IL2CPP_REGISTER_METHOD(0x00F2E000, float, GetLastCompletedMetricValueInMS, app::NanoProfiler* this_ptr, app::Metric__Enum metric)
    IL2CPP_REGISTER_METHOD(0x00F2E060, void, ToggleShowGraph, app::NanoProfiler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F2E570, void, BeginSimulation, app::NanoProfiler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F2E590, void, EndSimulation, app::NanoProfiler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginFrame, app::NanoProfiler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F2E680, void, EndFrame, app::NanoProfiler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F2F270, void, SuspendGameplay, )
    IL2CPP_REGISTER_METHOD(0x00F2F3B0, void, ResumeGameplay, )
    IL2CPP_REGISTER_METHOD(
        0x00F2F4F0,
        double,
        GetAverageMetricTimeInMSInFrameRange,
        app::NanoProfiler* this_ptr,
        app::Metric__Enum m,
        int32_t start_frame,
        int32_t end_frame
    )
    IL2CPP_REGISTER_METHOD(
        0x00F2F670,
        double,
        GetPeakMetricTimeInMSInFrameRange,
        app::NanoProfiler* this_ptr,
        app::Metric__Enum m,
        int32_t start_frame,
        int32_t end_frame
    )
    IL2CPP_REGISTER_METHOD(0x00F2F830, void, BeginSimulationCallback, )
    IL2CPP_REGISTER_METHOD(0x00F2F940, void, EndSimulationCallback, )
    IL2CPP_REGISTER_METHOD(0x00F2FB10, void, BeginPlayerLoopCallback, )
    IL2CPP_REGISTER_METHOD(0x00F2FC70, void, EndPlayerLoopCallback, )
    IL2CPP_REGISTER_METHOD(0x00F2FE00, void, InjectToPlayerLoop, app::PlayerLoopSystem* player_loop)
    IL2CPP_REGISTER_METHOD(0x00F30100, void, ctor, app::NanoProfiler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F304F0, void, cctor, )
} // namespace app::classes::Moon::nanoProfiler::NanoProfiler
