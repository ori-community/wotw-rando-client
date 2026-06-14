#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AppliedTextStyle.h>
#include <Modloader/app/structs/BitmapFontChar.h>
#include <Modloader/app/structs/CharMetaData__Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::CatlikeCoding::TextBox::CharMetaData {
    IL2CPP_REGISTER_METHOD(0x00123DF0, app::String*, ToString, app::CharMetaData__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0011E1B0, void, EraseIfVisible, app::CharMetaData__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00123E00, void, RenderIfVisible, app::CharMetaData__Boxed* this_ptr, app::Vector2 offset, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0011E290, void, AdjustPositionInBox_1, app::CharMetaData__Boxed* this_ptr, app::Vector2 delta)
    IL2CPP_REGISTER_METHOD(0x0011E2C0, void, AdjustPositionInBox_2, app::CharMetaData__Boxed* this_ptr, float x_delta, float y_delta)
    IL2CPP_REGISTER_METHOD(0x0011E2E0, char16_t, MarkAsStyleStatement, app::CharMetaData__Boxed* this_ptr, int32_t unstyled_index, app::Vector2 position)
    IL2CPP_REGISTER_METHOD(
        0x0011E310,
        void,
        MarkAsWhitespace,
        app::CharMetaData__Boxed* this_ptr,
        int32_t unstyled_index,
        app::Vector2 position,
        app::AppliedTextStyle* style
    )
    IL2CPP_REGISTER_METHOD(
        0x00123E10,
        app::BitmapFontChar*,
        MarkAsVisible,
        app::CharMetaData__Boxed* this_ptr,
        int32_t unstyled_index,
        app::Vector2 position,
        app::AppliedTextStyle* style
    )
    IL2CPP_REGISTER_METHOD(0x00123E20, float, get_After, app::CharMetaData__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00123E30, float, get_HorizontalMiddle, app::CharMetaData__Boxed* this_ptr)
} // namespace app::classes::CatlikeCoding::TextBox::CharMetaData
