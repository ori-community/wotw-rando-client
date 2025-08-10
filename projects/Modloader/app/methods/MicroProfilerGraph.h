#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Metric__Enum.h>
#include <Modloader/app/structs/Metric__Enum__Array.h>
#include <Modloader/app/structs/MicroProfilerGraph.h>

namespace app::classes::MicroProfilerGraph {
    IL2CPP_REGISTER_METHOD(0x006142D0, bool, get_IsExpanded, app::MicroProfilerGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015A42A0, void, set_IsExpanded, app::MicroProfilerGraph* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FF8B0, int32_t, get_VisibleFrames, app::MicroProfilerGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FF2B0, int32_t, get_GraphHeight, app::MicroProfilerGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015A44D0, app::Color, GetColorForMetric, app::Metric__Enum m)
    IL2CPP_REGISTER_METHOD(0x015A47E0, void, _initDataProvider, app::MicroProfilerGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015A4920, void, Awake, app::MicroProfilerGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x015A5510,
        void,
        GetStartAndEndFrameForHighlightedTimeMarker,
        app::MicroProfilerGraph* this_ptr,
        int32_t* start_index,
        int32_t* end_index
    )
    IL2CPP_REGISTER_METHOD(0x015A56D0, void, InitializeMetrics, app::MicroProfilerGraph* this_ptr, app::Metric__Enum__Array* visible_metrics, int32_t max_m_s)
    IL2CPP_REGISTER_METHOD(0x00417FF0, float, _getResScale, )
    IL2CPP_REGISTER_METHOD(0x015A6290, void, OnEnable, app::MicroProfilerGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015A6460, void, OnDisable, app::MicroProfilerGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015A6630, void, OnEndOfFrame, app::MicroProfilerGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015A6640, void, CreateLineMaterial, app::MicroProfilerGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015A67E0, float, FrameTimeToGraphY, app::MicroProfilerGraph* this_ptr, float t)
    IL2CPP_REGISTER_METHOD(0x015A6800, float, ToXCoordinate, app::MicroProfilerGraph* this_ptr, float x)
    IL2CPP_REGISTER_METHOD(0x015A6810, float, ToYCoordinate, app::MicroProfilerGraph* this_ptr, float y)
    IL2CPP_REGISTER_METHOD(0x015A6820, void, UpdateMarkers, app::MicroProfilerGraph* this_ptr, int32_t up_to_frame_index)
    IL2CPP_REGISTER_METHOD(0x015A6F10, void, UpdateLines, app::MicroProfilerGraph* this_ptr, int32_t up_to_frame_index)
    IL2CPP_REGISTER_METHOD(0x015A7C80, void, UpdateGraph, app::MicroProfilerGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015A7DE0, void, Update, app::MicroProfilerGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015A8010, void, HandleInput, app::MicroProfilerGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015A8160, void, ChangePage, app::MicroProfilerGraph* this_ptr, int32_t page_count)
    IL2CPP_REGISTER_METHOD(0x015A83F0, void, Draw, app::MicroProfilerGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015A8AB0, void, GetVisibleRange, app::MicroProfilerGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015A8E50, void, DrawTimeMarkers, app::MicroProfilerGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015A9360, void, DrawFPSMarkers, app::MicroProfilerGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015A96A0, void, DrawMarkers, app::MicroProfilerGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015A9900, void, DrawFrames, app::MicroProfilerGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015AA200, void, DrawFrameData_1, app::MicroProfilerGraph* this_ptr, int32_t graph_x_index, int32_t min_y, int32_t max_y)
    IL2CPP_REGISTER_METHOD(0x015AA370, float, DrawFrameData_2, app::MicroProfilerGraph* this_ptr, int32_t graph_x_index, float t)
    IL2CPP_REGISTER_METHOD(0x015AA4F0, void, DrawGraphShadow, app::MicroProfilerGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x015AA5C0,
        void,
        DrawIntWithBackgroundPadded,
        app::MicroProfilerGraph* this_ptr,
        int32_t value,
        app::Color background_color,
        app::Color text_color,
        int32_t x,
        int32_t y
    )
    IL2CPP_REGISTER_METHOD(
        0x015AAA80,
        void,
        DrawIntWithBackground,
        app::MicroProfilerGraph* this_ptr,
        int32_t value,
        app::Color background_color,
        app::Color text_color,
        int32_t x,
        int32_t y
    )
    IL2CPP_REGISTER_METHOD(
        0x015AB000,
        void,
        DrawFloatWithBackground,
        app::MicroProfilerGraph* this_ptr,
        float value,
        app::Color background_color,
        app::Color text_color,
        int32_t x,
        int32_t y
    )
    IL2CPP_REGISTER_METHOD(0x015AB3B0, void, DrawStatSummary, app::MicroProfilerGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawMemoryStats, app::MicroProfilerGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x015ABA30,
        void,
        DrawMSMarker,
        app::MicroProfilerGraph* this_ptr,
        float ms_value,
        bool include_label,
        app::Color marker_color,
        app::Color line_color,
        bool align_right,
        bool include_line
    )
    IL2CPP_REGISTER_METHOD(0x015ABCB0, void, DrawMSMarkers, app::MicroProfilerGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015AC0C0, void, DrawFrameRangeRect, app::MicroProfilerGraph* this_ptr, int32_t start_frame, int32_t end_frame)
    IL2CPP_REGISTER_METHOD(0x007458F0, void, DrawRect, app::MicroProfilerGraph* this_ptr, float x1, float y1, float x2, float y2)
    IL2CPP_REGISTER_METHOD(0x015AC2A0, void, DrawNumber, app::MicroProfilerGraph* this_ptr, int32_t x, int32_t y, int32_t num, bool is_leading)
    IL2CPP_REGISTER_METHOD(0x015AC4F0, void, DrawDot, app::MicroProfilerGraph* this_ptr, int32_t x, int32_t y)
    IL2CPP_REGISTER_METHOD(0x015AC570, void, ctor, app::MicroProfilerGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015AC610, void, cctor, )
} // namespace app::classes::MicroProfilerGraph
