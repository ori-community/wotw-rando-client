#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Metric__Enum.h>
#include <Modloader/app/structs/MicroProfilerInspector.h>
#include <Modloader/app/structs/MicroProfilerInspector_MetricData.h>
#include <Modloader/app/structs/MicroProfilerInspector_MetricPreset.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::MicroProfilerInspector {
    IL2CPP_REGISTER_METHOD(0x015ACB80, void, InitializeMetricPresets, app::MicroProfilerInspector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015AE910, void, ApplyMetricPreset, app::MicroProfilerInspector* this_ptr, app::MicroProfilerInspector_MetricPreset* preset)
    IL2CPP_REGISTER_METHOD(0x003FF7D0, int32_t, get_FrameInspectorIndex, app::MicroProfilerInspector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015AEA40, void, set_FrameInspectorIndex, app::MicroProfilerInspector* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x015AEB30, void, RegisterImGUIClient, )
    IL2CPP_REGISTER_METHOD(0x015AEC20, void, UnregisterImGUIClient, )
    IL2CPP_REGISTER_METHOD(0x015AED10, void, Awake, app::MicroProfilerInspector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015AEE30, app::String*, _getStringForMSValue, app::MicroProfilerInspector* this_ptr, double ms)
    IL2CPP_REGISTER_METHOD(0x015AEFD0, app::String*, _getStatName, app::MicroProfilerInspector* this_ptr, app::Metric__Enum metric)
    IL2CPP_REGISTER_METHOD(0x015AF0A0, void, InitializeCaches, app::MicroProfilerInspector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015AFC40, void, OnEnable, app::MicroProfilerInspector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015B0040, void, InitStyles, app::MicroProfilerInspector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015B1C60, void, OnDisable, app::MicroProfilerInspector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015B2040, void, Update, app::MicroProfilerInspector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015B20A0, void, UpdateMetricData, app::MicroProfilerInspector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015B21C0, void, UpdateMetricPeaksAndAverages, app::MicroProfilerInspector* this_ptr, int32_t frame)
    IL2CPP_REGISTER_METHOD(
        0x015B2510,
        void,
        UpdateMetricCache,
        app::MicroProfilerInspector* this_ptr,
        int32_t frame,
        app::MicroProfilerInspector_MetricData* data
    )
    IL2CPP_REGISTER_METHOD(0x015B26E0, void, OnGUI, app::MicroProfilerInspector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015B4A60, void, ResetFrameNavigationTimers, app::MicroProfilerInspector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015B4A70, void, HandleFrameInspectorNavigation, app::MicroProfilerInspector* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x015B4FC0,
        void,
        SerializeFrameRangeToDisk,
        app::MicroProfilerInspector* this_ptr,
        int32_t start_frame,
        int32_t end_frame,
        app::String* file_name
    )
    IL2CPP_REGISTER_METHOD(0x015B5550, void, SuspendGameplay, )
    IL2CPP_REGISTER_METHOD(0x015B5690, void, ResumeGameplay, )
    IL2CPP_REGISTER_METHOD(0x015B57D0, void, ctor, app::MicroProfilerInspector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015B5ED0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x015B6840, app::String*, _OnGUI_b__64_5, app::MicroProfilerInspector* this_ptr, app::MicroProfilerInspector_MetricData x)
} // namespace app::classes::MicroProfilerInspector
