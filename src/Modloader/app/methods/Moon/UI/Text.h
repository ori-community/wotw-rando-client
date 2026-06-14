#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharMetaData.h>
#include <Modloader/app/structs/CharMetaData__Array.h>
#include <Modloader/app/structs/LineDescent.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextBoxLine_1.h>
#include <Modloader/app/structs/TextStyleCollection.h>
#include <Modloader/app/structs/Text_1.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector2__Array.h>

namespace app::classes::Moon::UI::Text {
    IL2CPP_REGISTER_METHOD(0x01184DB0, int32_t, get_LineCount, app::Text_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::String*, get_DefaultText, app::Text_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008663D0, float, get_TabSize, app::Text_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01184E40, void, set_TabSize, app::Text_1* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01184E70, void, SetStyleCollection, app::Text_1* this_ptr, app::TextStyleCollection* text_style_collection)
    IL2CPP_REGISTER_METHOD(0x01184FE0, int32_t, get_TextRendererCount, app::Text_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011850F0, void, RefreshSprite, app::Text_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01185490, app::CharMetaData, GetCharacterMetaData, app::Text_1* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01185500, void, RenderText, app::Text_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011855F0, float, GetLeftContour, app::Text_1* this_ptr, float height)
    IL2CPP_REGISTER_METHOD(0x01185630, float, GetRightContour, app::Text_1* this_ptr, float height)
    IL2CPP_REGISTER_METHOD(0x01185680, void, CreateRendersIfThereAreNone, app::Text_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01033B50, float, GetContourOffset, app::Vector2__Array* contour_data, float height)
    IL2CPP_REGISTER_METHOD(0x011856D0, void, AlignTextCenterOrRight, app::Text_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01185930, app::Vector2, ComputeAnchorAndBounds, app::Text_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011859C0, void, RefreshText, app::Text_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01186030, void, ApplyStyleStatement, app::Text_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01186350, int32_t, ParseStyleStatementAt, app::Text_1* this_ptr, int32_t index, int32_t unstyled_char_index, app::Vector2 caret)
    IL2CPP_REGISTER_METHOD(0x011864B0, void, OverFlow, app::Text_1* this_ptr, int32_t overflow_index)
    IL2CPP_REGISTER_METHOD(
        0x01186600,
        void,
        AdjustBaseline,
        app::Text_1* this_ptr,
        int32_t current_char_index,
        float baseline_adjustment,
        app::Vector2* caret,
        app::TextBoxLine_1* line
    )
    IL2CPP_REGISTER_METHOD(0x01186750, app::LineDescent, FindLineDataForLastWord, app::Text_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01186850, void, GenerateMetaData, app::Text_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01187700, void, EraseVisibleCharacters, app::Text_1* this_ptr, int32_t start_index, int32_t end_index)
    IL2CPP_REGISTER_METHOD(0x01187770, int32_t, FindWrapStart, app::Text_1* this_ptr, int32_t text_index, int32_t first_char_index)
    IL2CPP_REGISTER_METHOD(0x01187C90, app::TextBoxLine_1, GetLineInfo, app::Text_1* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01187D60, void, SetText_1, app::Text_1* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01187E80, void, SetText_2, app::Text_1* this_ptr, app::CharMetaData__Array* text, int32_t start_index, int32_t length)
    IL2CPP_REGISTER_METHOD(0x01187F30, void, SetTextLength, app::Text_1* this_ptr, int32_t length)
    IL2CPP_REGISTER_METHOD(0x01188120, void, JustifyText, app::Text_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011882A0, void, JustifyLine, app::Text_1* this_ptr, int32_t first, int32_t last, float width)
    IL2CPP_REGISTER_METHOD(0x01188560, void, ctor, app::Text_1* this_ptr)
} // namespace app::classes::Moon::UI::Text
