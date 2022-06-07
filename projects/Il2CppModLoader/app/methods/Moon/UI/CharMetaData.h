#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::UI::CharMetaData {
    IL2CPP_REGISTER_METHOD(0x0011E1B0, void, EraseIfVisible, (app::CharMetaData_1__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0011E1E0, void, RenderIfVisible, (app::CharMetaData_1__Boxed * this_ptr, app::Vector2 offset))
    IL2CPP_REGISTER_METHOD(0x0011E290, void, AdjustPositionInBox_1, (app::CharMetaData_1__Boxed * this_ptr, app::Vector2 delta))
    IL2CPP_REGISTER_METHOD(0x0011E2C0, void, AdjustPositionInBox_2, (app::CharMetaData_1__Boxed * this_ptr, float x_delta, float y_delta))
    IL2CPP_REGISTER_METHOD(0x0011E2E0, uint16_t, MarkAsStyleStatement, (app::CharMetaData_1__Boxed * this_ptr, int32_t unstyled_index, app::Vector2 position))
    IL2CPP_REGISTER_METHOD(0x0011E310, void, MarkAsWhitespace, (app::CharMetaData_1__Boxed * this_ptr, int32_t unstyled_index, app::Vector2 position, app::AppliedTextStyle_1 * style))
    IL2CPP_REGISTER_METHOD(0x0011E350, app::BitmapFontChar_1 *, MarkAsVisible, (app::CharMetaData_1__Boxed * this_ptr, int32_t unstyled_index, app::Vector2 position, app::AppliedTextStyle_1 * style))
    IL2CPP_REGISTER_METHOD(0x0011E3D0, float, get_After, (app::CharMetaData_1__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0011E3E0, float, get_HorizontalMiddle, (app::CharMetaData_1__Boxed * this_ptr))
}
