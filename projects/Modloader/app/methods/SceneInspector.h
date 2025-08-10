#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SceneInspector.h>
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::SceneInspector {
    IL2CPP_REGISTER_METHOD(0x00BA1150, int32_t, get_QueryRange, )
    IL2CPP_REGISTER_METHOD(0x00BA1270, void, set_QueryRange, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00BA1400, bool, get_Show, )
    IL2CPP_REGISTER_METHOD(0x00BA1560, void, set_Show, bool value)
    IL2CPP_REGISTER_METHOD(0x00BA1690, void, CreateLineMaterial, app::SceneInspector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BA1830, void, Awake, app::SceneInspector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BA1920, void, OnEnable, app::SceneInspector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BA1B00, void, OnDisable, app::SceneInspector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BA1CD0, void, _updateResolution, app::SceneInspector* this_ptr, int32_t width, int32_t height)
    IL2CPP_REGISTER_METHOD(0x00BA1D40, void, _updateWorldBounds, app::SceneInspector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BA28E0, void, Update, app::SceneInspector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawScene, app::SceneInspector* this_ptr, app::SceneMetaData* scene)
    IL2CPP_REGISTER_METHOD(0x00BA28F0, app::Vector2, _toScreenSpace_1, app::SceneInspector* this_ptr, app::Vector2 world_space_pos)
    IL2CPP_REGISTER_METHOD(0x00BA2A30, app::Rect, _toScreenSpace_2, app::SceneInspector* this_ptr, app::Rect world_space_rect)
    IL2CPP_REGISTER_METHOD(0x00BA2B00, void, Draw, app::SceneInspector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BA4010, void, OnEndOfFrame, app::SceneInspector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BA4020, void, SuspendGameplay, )
    IL2CPP_REGISTER_METHOD(0x00BA4160, void, ResumeGameplay, )
    IL2CPP_REGISTER_METHOD(0x00BA42A0, void, DrawCross, app::SceneInspector* this_ptr, app::Vector2 center)
    IL2CPP_REGISTER_METHOD(
        0x00BA4360,
        void,
        DrawIntWithBackgroundPadded,
        app::SceneInspector* this_ptr,
        int32_t value,
        app::Color background_color,
        app::Color text_color,
        int32_t x,
        int32_t y
    )
    IL2CPP_REGISTER_METHOD(
        0x00BA4800,
        void,
        DrawIntWithBackground,
        app::SceneInspector* this_ptr,
        int32_t value,
        app::Color background_color,
        app::Color text_color,
        int32_t x,
        int32_t y,
        bool center
    )
    IL2CPP_REGISTER_METHOD(
        0x00BA4DA0,
        void,
        DrawFloatWithBackground,
        app::SceneInspector* this_ptr,
        float value,
        app::Color background_color,
        app::Color text_color,
        int32_t x,
        int32_t y
    )
    IL2CPP_REGISTER_METHOD(
        0x00BA5130,
        void,
        DrawRectWithOutline,
        app::SceneInspector* this_ptr,
        float x1,
        float y1,
        float x2,
        float y2,
        app::Color outline_color,
        app::Color fill_color
    )
    IL2CPP_REGISTER_METHOD(0x007458F0, void, DrawRect, app::SceneInspector* this_ptr, float x1, float y1, float x2, float y2)
    IL2CPP_REGISTER_METHOD(0x00BA5340, void, DrawNumber, app::SceneInspector* this_ptr, int32_t x, int32_t y, int32_t num, bool is_leading)
    IL2CPP_REGISTER_METHOD(0x00BA5550, void, DrawDot, app::SceneInspector* this_ptr, int32_t x, int32_t y)
    IL2CPP_REGISTER_METHOD(0x00BA55A0, void, ctor, app::SceneInspector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BA5810, void, cctor, )
} // namespace app::classes::SceneInspector
