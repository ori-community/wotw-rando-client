#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Marker__Enum.h>
#include <Modloader/app/structs/Stat__Enum.h>
#include <Modloader/app/structs/Metric__Enum.h>
#include <Modloader/app/structs/MicroProfiler_SampleStats.h>
#include <Modloader/app/structs/MicroProfiler_SampleStats__Array.h>
#include <Modloader/app/structs/MicroProfiler_MarkerInfo.h>
#include <Modloader/app/structs/MicroProfiler_StatInfo.h>
#include <Modloader/app/structs/MicroProfiler.h>

namespace app::classes::MicroProfiler {
    IL2CPP_REGISTER_METHOD(0x03154B90, bool, get_IsPaused, ())
    IL2CPP_REGISTER_METHOD(0x03154C30, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Reset, ())
    IL2CPP_REGISTER_METHOD(0x03154F50, void, BeginMarker, (app::Marker__Enum id))
    IL2CPP_REGISTER_METHOD(0x03155030, void, EndMarker, (app::Marker__Enum id))
    IL2CPP_REGISTER_METHOD(0x03155110, void, SetStat_1, (app::Stat__Enum id, float value))
    IL2CPP_REGISTER_METHOD(0x03155200, void, SetStat_2, (app::Stat__Enum id, bool value))
    IL2CPP_REGISTER_METHOD(0x03155300, void, SetStat_3, (app::Stat__Enum id, int32_t value))
    IL2CPP_REGISTER_METHOD(0x03155400, void, BeginMetric, (app::Metric__Enum id))
    IL2CPP_REGISTER_METHOD(0x03155560, void, SetMetric, (app::Metric__Enum id, int64_t ns_invoked, uint32_t invoke_count))
    IL2CPP_REGISTER_METHOD(0x03155670, void, SetMetricValue, (app::Metric__Enum id, int64_t ns_invoked, uint32_t invoke_count))
    IL2CPP_REGISTER_METHOD(0x03155780, void, EndMetric_1, (app::Metric__Enum id))
    IL2CPP_REGISTER_METHOD(0x031558E0, void, EndMetric_2, (app::Metric__Enum id, int64_t* spent_ns))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginFrame, ())
    IL2CPP_REGISTER_METHOD(0x03155A50, float, PresentationFormOfNativeStat, (app::Stat__Enum stat, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndFrame, ())
    IL2CPP_REGISTER_METHOD(0x03155A80, void, ContinueMarkers, (app::MicroProfiler_SampleStats * last_frame, app::MicroProfiler_SampleStats* current_frame))
    IL2CPP_REGISTER_METHOD(0x03155B50, void, BeginSample, ())
    IL2CPP_REGISTER_METHOD(0x03155D60, void, EndSample, ())
    IL2CPP_REGISTER_METHOD(0x03155E20, app::MicroProfiler_SampleStats*, GetCurrentFrameStats, ())
    IL2CPP_REGISTER_METHOD(0x03155EC0, app::MicroProfiler_SampleStats*, GetLastCompletedFrameStats, ())
    IL2CPP_REGISTER_METHOD(0x03155F60, int32_t, GetCurrentFrameIndex, ())
    IL2CPP_REGISTER_METHOD(0x03156000, int32_t, GetCurrentUniqueFrameIndex, ())
    IL2CPP_REGISTER_METHOD(0x031560A0, app::MicroProfiler_SampleStats*, GetFrameStats, (int32_t frame_number))
    IL2CPP_REGISTER_METHOD(0x031561F0, app::MicroProfiler_SampleStats*, GetSampleStats, ())
    IL2CPP_REGISTER_METHOD(0x03156290, app::MicroProfiler_SampleStats__Array**, GetFrames, ())
    IL2CPP_REGISTER_METHOD(0x03156330, void, ToggleMarker, (app::Marker__Enum id))
    IL2CPP_REGISTER_METHOD(0x03156490, app::MicroProfiler_MarkerInfo, GetMarkerAtFrame, (app::Marker__Enum id, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x03156570, app::MicroProfiler_MarkerInfo, GetLastCompletedMarker, (app::Marker__Enum id))
    IL2CPP_REGISTER_METHOD(0x03156640, app::MicroProfiler_StatInfo, GetStatAtFrame, (app::Stat__Enum id, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x03156720, app::MicroProfiler_StatInfo, GetLastCompletedStat, (app::Stat__Enum id))
    IL2CPP_REGISTER_METHOD(0x031567F0, double, GetLastCompletedMetricTimeInMS, (app::Metric__Enum m))
    IL2CPP_REGISTER_METHOD(0x031568E0, double, GetMetricTimeInMS, (app::Metric__Enum m, int32_t frame_index))
    IL2CPP_REGISTER_METHOD(0x031569E0, uint32_t, GetMetricInvokationCount, (app::Metric__Enum m, int32_t frame_index))
    IL2CPP_REGISTER_METHOD(0x03156AD0, void, SetPauseHistory, (bool paused))
    IL2CPP_REGISTER_METHOD(0x03156B80, double, GetAverageMetricTimeInMSInFrameRange, (app::Metric__Enum m, int32_t start_frame, int32_t end_frame))
    IL2CPP_REGISTER_METHOD(0x03156CD0, float, GetMaximumMetricTimeInMSInFrameRange, (app::Metric__Enum m, int32_t start_frame, int32_t end_frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MicroProfiler * this_ptr))
} // namespace app::classes::MicroProfiler
