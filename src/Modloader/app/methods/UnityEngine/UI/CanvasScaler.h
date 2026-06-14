#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CanvasScaler.h>
#include <Modloader/app/structs/CanvasScaler_ScaleMode__Enum.h>
#include <Modloader/app/structs/CanvasScaler_ScreenMatchMode__Enum.h>
#include <Modloader/app/structs/CanvasScaler_Unit__Enum.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::UnityEngine::UI::CanvasScaler {
    IL2CPP_REGISTER_METHOD(0x01F2C240, void, ctor, app::CanvasScaler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F2AB70, app::CanvasScaler_ScaleMode__Enum, get_uiScaleMode, app::CanvasScaler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00654960, void, set_uiScaleMode, app::CanvasScaler* this_ptr, app::CanvasScaler_ScaleMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x01F2AC20, float, get_referencePixelsPerUnit, app::CanvasScaler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00447350, void, set_referencePixelsPerUnit, app::CanvasScaler* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01F2C2A0, float, get_scaleFactor, app::CanvasScaler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F2C2B0, void, set_scaleFactor, app::CanvasScaler* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01F2C360, app::Vector2, get_referenceResolution, app::CanvasScaler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F2C380, void, set_referenceResolution, app::CanvasScaler* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x01F2C4F0, app::CanvasScaler_ScreenMatchMode__Enum, get_screenMatchMode, app::CanvasScaler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C08D30, void, set_screenMatchMode, app::CanvasScaler* this_ptr, app::CanvasScaler_ScreenMatchMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x01F2C500, float, get_matchWidthOrHeight, app::CanvasScaler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0098F5E0, void, set_matchWidthOrHeight, app::CanvasScaler* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01F1C1C0, app::CanvasScaler_Unit__Enum, get_physicalUnit, app::CanvasScaler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00843E80, void, set_physicalUnit, app::CanvasScaler* this_ptr, app::CanvasScaler_Unit__Enum value)
    IL2CPP_REGISTER_METHOD(0x01F2C510, float, get_fallbackScreenDPI, app::CanvasScaler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A34D0, void, set_fallbackScreenDPI, app::CanvasScaler* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x004FA790, float, get_defaultSpriteDPI, app::CanvasScaler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F2C520, void, set_defaultSpriteDPI, app::CanvasScaler* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01F2C5D0, float, get_dynamicPixelsPerUnit, app::CanvasScaler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043C100, void, set_dynamicPixelsPerUnit, app::CanvasScaler* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01F2C5E0, void, OnEnable, app::CanvasScaler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F2C680, void, OnDisable, app::CanvasScaler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E113B0, void, Update, app::CanvasScaler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F2C6C0, void, Handle, app::CanvasScaler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F2C8B0, void, HandleWorldCanvas, app::CanvasScaler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F2C8E0, void, HandleConstantPixelSize, app::CanvasScaler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F2C910, void, HandleScaleWithScreenSize, app::CanvasScaler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F2CCB0, void, HandleConstantPhysicalSize, app::CanvasScaler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F2CD90, void, SetScaleFactor, app::CanvasScaler* this_ptr, float scale_factor)
    IL2CPP_REGISTER_METHOD(0x01F2CE20, void, SetReferencePixelsPerUnit, app::CanvasScaler* this_ptr, float reference_pixels_per_unit)
} // namespace app::classes::UnityEngine::UI::CanvasScaler
