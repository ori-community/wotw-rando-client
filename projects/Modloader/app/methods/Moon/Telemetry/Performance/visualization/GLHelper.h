#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::visualization::GLHelper {
    IL2CPP_REGISTER_METHOD(0x010A3D60, void, DrawRect, (float x1, float y1, float x2, float y2))
    IL2CPP_REGISTER_METHOD(0x010A3DF0, void, DrawNumber, (int32_t x, int32_t y, int32_t num, bool is_leading))
    IL2CPP_REGISTER_METHOD(0x010A4010, void, DrawDot, (int32_t x, int32_t y))
    IL2CPP_REGISTER_METHOD(0x010A40E0, void, DrawTimeWithBackgroundPadded, (int32_t value, app::Color background_color, app::Color text_color, int32_t x, int32_t y, float scale))
    IL2CPP_REGISTER_METHOD(0x010A4520, void, DrawIntWithBackground, (int32_t value, app::Color background_color, app::Color text_color, int32_t x, int32_t y, float scale))
    IL2CPP_REGISTER_METHOD(0x010A4B40, void, DrawIntWithBackgroundPadded, (int32_t value, app::Color background_color, app::Color text_color, int32_t x, int32_t y, float scale))
    IL2CPP_REGISTER_METHOD(0x010A4FD0, void, DrawFloatWithBackground, (float value, app::Color background_color, app::Color text_color, int32_t x, int32_t y))
    IL2CPP_REGISTER_METHOD(0x010A5300, void, DrawStringWithBackground, (app::String * str, int32_t x_offset, int32_t y_offset, app::Color background_color, app::Color string_color))
    IL2CPP_REGISTER_METHOD(0x010A5550, void, DrawString, (app::String * str, int32_t x_offset, int32_t y_offset))
    IL2CPP_REGISTER_METHOD(0x010A5660, void, DrawLetter_1, (uint16_t c, int32_t x_offset, int32_t y_offset))
    IL2CPP_REGISTER_METHOD(0x010A5730, void, DrawLetter_2, (int32_t letter, int32_t x_offset, int32_t y_offset))
    IL2CPP_REGISTER_METHOD(0x010A5A10, int32_t, LetterOffset, (int32_t letter))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GLHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A5AC0, void, cctor, ())
} // namespace app::classes::Moon::Telemetry::Performance::visualization::GLHelper
