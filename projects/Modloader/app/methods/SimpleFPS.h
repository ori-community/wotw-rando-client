#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Metric__Enum.h>
#include <Modloader/app/structs/SimpleFPS.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SimpleFPS {
    IL2CPP_REGISTER_METHOD(0x0073ECE0, app::Color, _getColorForLightCount, app::SimpleFPS* this_ptr, int32_t lights)
    IL2CPP_REGISTER_METHOD(0x0073ED40, app::Color, _getColorForReflectionCount, app::SimpleFPS* this_ptr, int32_t lights)
    IL2CPP_REGISTER_METHOD(0x0073ED40, app::Color, _getColorForGodrayCount, app::SimpleFPS* this_ptr, int32_t lights)
    IL2CPP_REGISTER_METHOD(0x0073EDA0, int32_t, get_WorstHistoryAverage, app::SimpleFPS* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0073EDB0, void, Awake, app::SimpleFPS* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0073F250, void, Reset, app::SimpleFPS* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0073F9F0, void, OnDestroy, app::SimpleFPS* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0073FB10, void, InitFromHistory, app::SimpleFPS* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0073FD50, void, OnEnable, app::SimpleFPS* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00740060, void, OnDisable, app::SimpleFPS* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007402D0, void, OnEndOfFrame, app::SimpleFPS* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007402E0, void, CreateLineMaterial, app::SimpleFPS* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00740480, float, ToXCoordinate, app::SimpleFPS* this_ptr, float x)
    IL2CPP_REGISTER_METHOD(0x00740490, float, ToYCoordinate, app::SimpleFPS* this_ptr, float y)
    IL2CPP_REGISTER_METHOD(
        0x007404A0,
        void,
        _updateProfilerMetricAverages,
        app::SimpleFPS* this_ptr,
        app::Metric__Enum metric,
        int32_t start_frame,
        int32_t end_frame
    )
    IL2CPP_REGISTER_METHOD(0x00740910, void, _initSize, app::SimpleFPS* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00740A60, void, Update, app::SimpleFPS* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestartSecond, app::SimpleFPS* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00741600, void, Draw, app::SimpleFPS* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007444E0, void, DrawMemoryStuff, app::SimpleFPS* this_ptr, bool really_really_simple, int32_t x, int32_t y)
    IL2CPP_REGISTER_METHOD(0x007456E0, app::Color, GetDRSColor, app::SimpleFPS* this_ptr, int32_t x, int32_t y)
    IL2CPP_REGISTER_METHOD(0x00745750, void, DrawDrsMagic, app::SimpleFPS* this_ptr, int32_t x, int32_t y)
    IL2CPP_REGISTER_METHOD(0x007458F0, void, DrawRect, app::SimpleFPS* this_ptr, float x1, float y1, float x2, float y2)
    IL2CPP_REGISTER_METHOD(0x00745980, void, DrawFloat, app::SimpleFPS* this_ptr, float value, int32_t x, int32_t y)
    IL2CPP_REGISTER_METHOD(0x00745BF0, void, DrawNumber, app::SimpleFPS* this_ptr, int32_t x, int32_t y, int32_t num, bool is_leading)
    IL2CPP_REGISTER_METHOD(0x00745E30, void, DrawDot, app::SimpleFPS* this_ptr, int32_t x, int32_t y)
    IL2CPP_REGISTER_METHOD(
        0x00745EB0,
        void,
        DrawTimeWithBackgroundPadded,
        app::SimpleFPS* this_ptr,
        int32_t value,
        app::Color background_color,
        app::Color text_color,
        int32_t x,
        int32_t y
    )
    IL2CPP_REGISTER_METHOD(
        0x00746240,
        void,
        DrawIntWithBackground,
        app::SimpleFPS* this_ptr,
        int32_t value,
        app::Color background_color,
        app::Color text_color,
        int32_t x,
        int32_t y
    )
    IL2CPP_REGISTER_METHOD(
        0x007467C0,
        void,
        DrawIntWithBackgroundPadded,
        app::SimpleFPS* this_ptr,
        int32_t value,
        app::Color background_color,
        app::Color text_color,
        int32_t x,
        int32_t y
    )
    IL2CPP_REGISTER_METHOD(0x00746C80, void, DrawString, app::SimpleFPS* this_ptr, app::String* str, int32_t x_offset, int32_t y_offset)
    IL2CPP_REGISTER_METHOD(0x00746DC0, void, DrawLetter_1, app::SimpleFPS* this_ptr, char16_t c, int32_t x_offset, int32_t y_offset)
    IL2CPP_REGISTER_METHOD(0x00746DF0, void, DrawLetter_2, app::SimpleFPS* this_ptr, int32_t letter, int32_t x_offset, int32_t y_offset)
    IL2CPP_REGISTER_METHOD(0x00747130, int32_t, LetterOffset, app::SimpleFPS* this_ptr, int32_t letter)
    IL2CPP_REGISTER_METHOD(0x007471E0, void, DrawDebugVideoString, app::SimpleFPS* this_ptr, app::String* text, float time)
    IL2CPP_REGISTER_METHOD(0x00747370, void, ctor, app::SimpleFPS* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00747EC0, void, cctor, )
} // namespace app::classes::SimpleFPS
