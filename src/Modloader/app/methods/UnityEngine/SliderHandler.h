#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Event.h>
#include <Modloader/app/structs/EventType__Enum.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SliderHandler__Boxed.h>
#include <Modloader/app/structs/SliderState.h>

namespace app::classes::UnityEngine::SliderHandler {
    IL2CPP_REGISTER_METHOD(
        0x00218FB0,
        void,
        ctor,
        app::SliderHandler__Boxed* this_ptr,
        app::Rect position,
        float current_value,
        float size,
        float start,
        float end,
        app::GUIStyle* slider,
        app::GUIStyle* thumb,
        bool horiz,
        int32_t id
    )
    IL2CPP_REGISTER_METHOD(0x00219000, float, Handle, app::SliderHandler__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00219010, float, OnMouseDown, app::SliderHandler__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00219020, float, OnMouseDrag, app::SliderHandler__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00219030, float, OnMouseUp, app::SliderHandler__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00219040, float, OnRepaint, app::SliderHandler__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00219050, app::EventType__Enum, CurrentEventType, app::SliderHandler__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00219060, int32_t, CurrentScrollTroughSide, app::SliderHandler__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00219070, bool, IsEmptySlider, app::SliderHandler__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00219090, bool, SupportsPageMovements, app::SliderHandler__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002190A0, float, PageMovementValue, app::SliderHandler__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002190B0, float, PageUpMovementBound, app::SliderHandler__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00219110, app::Event*, CurrentEvent, app::SliderHandler__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00219120, float, ValueForCurrentMousePosition, app::SliderHandler__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00219130, float, Clamp, app::SliderHandler__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00219140, app::Rect, ThumbSelectionRect, app::SliderHandler__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00219190, void, StartDraggingWithValue, app::SliderHandler__Boxed* this_ptr, float drag_start_value)
    IL2CPP_REGISTER_METHOD(0x002191F0, app::SliderState*, SliderState, app::SliderHandler__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00219140, app::Rect, ThumbRect, app::SliderHandler__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00219200, app::Rect, VerticalThumbRect, app::SliderHandler__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00219230, app::Rect, HorizontalThumbRect, app::SliderHandler__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00219260, float, ClampedCurrentValue, app::SliderHandler__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00219270, float, MousePosition, app::SliderHandler__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00219280, float, ValuesPerPixel, app::SliderHandler__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00219290, float, ThumbSize, app::SliderHandler__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002192A0, float, MaxValue, app::SliderHandler__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002192B0, float, MinValue, app::SliderHandler__Boxed* this_ptr)
} // namespace app::classes::UnityEngine::SliderHandler
