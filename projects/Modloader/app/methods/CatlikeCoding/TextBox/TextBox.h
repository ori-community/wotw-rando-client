#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharMetaData.h>
#include <Modloader/app/structs/CharMetaData__Array.h>
#include <Modloader/app/structs/LineDescent.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/TextBox.h>
#include <Modloader/app/structs/TextBoxLine.h>
#include <Modloader/app/structs/TextRenderer.h>
#include <Modloader/app/structs/TextStyleCollection.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector2__Array.h>

namespace app::classes::CatlikeCoding::TextBox::TextBox {
    IL2CPP_REGISTER_METHOD(0x01032580, int32_t, get_LineCount, app::TextBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_DefaultText, app::TextBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B5650, float, get_TabSize, app::TextBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01032610, void, set_TabSize, app::TextBox* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x003FC5D0, float, get_TextFadeTime, app::TextBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008D27B0, void, set_TextFadeTime, app::TextBox* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01032640, void, SetStyleCollection, app::TextBox* this_ptr, app::TextStyleCollection* text_style_collection)
    IL2CPP_REGISTER_METHOD(0x010327C0, void, CacheRenderers, app::TextBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010329A0, int32_t, get_TextRendererCount, app::TextBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01032AC0, app::CharMetaData, GetCharacterMetaData, app::TextBox* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01032B30, void, ResetTextRenderers, app::TextBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01032B40, app::TextBoxLine, GetLineInfo, app::TextBox* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01032C10, float, GetLeftContour, app::TextBox* this_ptr, float height)
    IL2CPP_REGISTER_METHOD(0x01032C40, float, GetRightContour, app::TextBox* this_ptr, float height)
    IL2CPP_REGISTER_METHOD(0x01032C80, void, RenderText, app::TextBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01032D70, void, SetText_1, app::TextBox* this_ptr, app::StringBuilder* text)
    IL2CPP_REGISTER_METHOD(0x01032E90, void, SetText_2, app::TextBox* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01032FB0, void, SetDigit, app::TextBox* this_ptr, int32_t digit)
    IL2CPP_REGISTER_METHOD(0x010330B0, app::TextRenderer*, GetTextRenderer, app::TextBox* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x010331F0, void, OnEnable, app::TextBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01033200, void, Update, app::TextBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010332D0, void, CreateRendersIfThereAreNone, app::TextBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01033450, void, RefreshText, app::TextBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01033B50, float, GetContourOffset, app::Vector2__Array* contour_data, float height)
    IL2CPP_REGISTER_METHOD(0x01033C60, app::Vector2, ComputeAnchorAndBounds, app::TextBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01033CE0, void, SetText_3, app::TextBox* this_ptr, app::CharMetaData__Array* text, int32_t start_index, int32_t length)
    IL2CPP_REGISTER_METHOD(0x01033D90, void, SetTextLength, app::TextBox* this_ptr, int32_t length)
    IL2CPP_REGISTER_METHOD(0x01033F80, void, ApplyStyleStatement, app::TextBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010342A0, int32_t, ParseStyleStatementAt, app::TextBox* this_ptr, int32_t index, int32_t unstyled_char_index, app::Vector2 caret)
    IL2CPP_REGISTER_METHOD(0x01034400, void, GenerateMetaData, app::TextBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01035290, app::LineDescent, FindLineDataForLastWord, app::TextBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01035390, void, EraseVisibleCharacters, app::TextBox* this_ptr, int32_t start_index, int32_t end_index)
    IL2CPP_REGISTER_METHOD(0x01035400, void, OverFlow, app::TextBox* this_ptr, int32_t overflow_index)
    IL2CPP_REGISTER_METHOD(
        0x01035550,
        void,
        AdjustBaseline,
        app::TextBox* this_ptr,
        int32_t current_char_index,
        float baseline_adjustment,
        app::Vector2* caret,
        app::TextBoxLine* line
    )
    IL2CPP_REGISTER_METHOD(0x010356A0, int32_t, FindWrapStart, app::TextBox* this_ptr, int32_t text_index, int32_t first_char_index)
    IL2CPP_REGISTER_METHOD(0x01035C00, void, AlignTextCenterOrRight, app::TextBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01035E60, void, JustifyText, app::TextBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01035FE0, void, JustifyLine, app::TextBox* this_ptr, int32_t first, int32_t last, float width)
    IL2CPP_REGISTER_METHOD(0x010362A0, app::Rect, GetRealTextBoxLocalRect, app::TextBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01036490, void, ctor, app::TextBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01036A20, bool, _CreateRendersIfThereAreNone_g__NeedsCreation_61_0, app::TextBox* this_ptr)
} // namespace app::classes::CatlikeCoding::TextBox::TextBox
