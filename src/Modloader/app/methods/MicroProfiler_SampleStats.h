#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Marker__Enum.h>
#include <Modloader/app/structs/Metric__Enum.h>
#include <Modloader/app/structs/MicroProfiler_MarkerInfo__Array.h>
#include <Modloader/app/structs/MicroProfiler_MetricStats.h>
#include <Modloader/app/structs/MicroProfiler_MetricStats__Array.h>
#include <Modloader/app/structs/MicroProfiler_SampleStats.h>
#include <Modloader/app/structs/MicroProfiler_StatInfo.h>
#include <Modloader/app/structs/MicroProfiler_StatInfo__Array.h>
#include <Modloader/app/structs/Stat__Enum.h>

namespace app::classes::MicroProfiler_SampleStats {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::MicroProfiler_MetricStats__Array*, GetMetricStats, app::MicroProfiler_SampleStats* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::MicroProfiler_StatInfo__Array*, GetStats, app::MicroProfiler_SampleStats* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::MicroProfiler_MarkerInfo__Array*, GetMarkers, app::MicroProfiler_SampleStats* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, GetFrameId, app::MicroProfiler_SampleStats* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB980, void, SetFrameId, app::MicroProfiler_SampleStats* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x01A92420, app::MicroProfiler_StatInfo, GetStat, app::MicroProfiler_SampleStats* this_ptr, app::Stat__Enum id)
    IL2CPP_REGISTER_METHOD(0x03157190, void, SetStat_1, app::MicroProfiler_SampleStats* this_ptr, app::Stat__Enum id, float value)
    IL2CPP_REGISTER_METHOD(0x031571D0, void, SetStat_2, app::MicroProfiler_SampleStats* this_ptr, app::Stat__Enum id, bool value)
    IL2CPP_REGISTER_METHOD(0x03157230, void, SetStat_3, app::MicroProfiler_SampleStats* this_ptr, app::Stat__Enum id, int32_t value)
    IL2CPP_REGISTER_METHOD(
        0x03157280,
        void,
        SetMetric,
        app::MicroProfiler_SampleStats* this_ptr,
        app::Metric__Enum id,
        int64_t ns_invoked,
        uint32_t invoked_count
    )
    IL2CPP_REGISTER_METHOD(
        0x031572E0,
        void,
        SetMetricValue,
        app::MicroProfiler_SampleStats* this_ptr,
        app::Metric__Enum id,
        int64_t ns_invoked,
        uint32_t invoked_count
    )
    IL2CPP_REGISTER_METHOD(0x03157340, void, ContinueMarker, app::MicroProfiler_SampleStats* this_ptr, app::Marker__Enum id)
    IL2CPP_REGISTER_METHOD(0x03157380, void, BeginMarker, app::MicroProfiler_SampleStats* this_ptr, app::Marker__Enum id)
    IL2CPP_REGISTER_METHOD(0x031573C0, void, EndMarker, app::MicroProfiler_SampleStats* this_ptr, app::Marker__Enum id)
    IL2CPP_REGISTER_METHOD(0x03157400, void, BeginMetric, app::MicroProfiler_SampleStats* this_ptr, app::Metric__Enum id)
    IL2CPP_REGISTER_METHOD(0x03157440, void, EndMetric, app::MicroProfiler_SampleStats* this_ptr, app::Metric__Enum id, int64_t ns)
    IL2CPP_REGISTER_METHOD(0x031574A0, app::MicroProfiler_MetricStats, GetMetric, app::MicroProfiler_SampleStats* this_ptr, app::Metric__Enum id)
    IL2CPP_REGISTER_METHOD(0x031574F0, void, Clear, app::MicroProfiler_SampleStats* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031575E0, void, CopyFrom, app::MicroProfiler_SampleStats* this_ptr, app::MicroProfiler_SampleStats* source)
    IL2CPP_REGISTER_METHOD(0x03157770, void, AppendData, app::MicroProfiler_SampleStats* this_ptr, app::MicroProfiler_SampleStats* source)
    IL2CPP_REGISTER_METHOD(0x03157820, void, Validate, app::MicroProfiler_SampleStats* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031578B0, void, ctor, app::MicroProfiler_SampleStats* this_ptr)
} // namespace app::classes::MicroProfiler_SampleStats
