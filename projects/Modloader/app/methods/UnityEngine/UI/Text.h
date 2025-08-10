#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Font.h>
#include <Modloader/app/structs/FontStyle__Enum.h>
#include <Modloader/app/structs/HorizontalWrapMode__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Text.h>
#include <Modloader/app/structs/TextAnchor__Enum.h>
#include <Modloader/app/structs/TextGenerationSettings.h>
#include <Modloader/app/structs/TextGenerator.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/VertexHelper.h>
#include <Modloader/app/structs/VerticalWrapMode__Enum.h>

namespace app::classes::UnityEngine::UI::Text {
    IL2CPP_REGISTER_METHOD(0x026793B0, void, ctor, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02679480, app::TextGenerator*, get_cachedTextGenerator, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026796E0, app::TextGenerator*, get_cachedTextGeneratorForLayout, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02679850, app::Texture*, get_mainTexture, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02679BC0, void, FontTextureChanged, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02679DC0, app::Font*, get_font, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02679DE0, void, set_font, app::Text* this_ptr, app::Font* value)
    IL2CPP_REGISTER_METHOD(0x02679F10, app::String*, get_text, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02679F20, void, set_text, app::Text* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0267A040, bool, get_supportRichText, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267A060, void, set_supportRichText, app::Text* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0267A0C0, bool, get_resizeTextForBestFit, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267A0E0, void, set_resizeTextForBestFit, app::Text* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0267A140, int32_t, get_resizeTextMinSize, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267A160, void, set_resizeTextMinSize, app::Text* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0267A1C0, int32_t, get_resizeTextMaxSize, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267A1E0, void, set_resizeTextMaxSize, app::Text* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0267A240, app::TextAnchor__Enum, get_alignment, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267A260, void, set_alignment, app::Text* this_ptr, app::TextAnchor__Enum value)
    IL2CPP_REGISTER_METHOD(0x0267A2C0, bool, get_alignByGeometry, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267A2E0, void, set_alignByGeometry, app::Text* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0267A330, int32_t, get_fontSize, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267A350, void, set_fontSize, app::Text* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0267A3B0, app::HorizontalWrapMode__Enum, get_horizontalOverflow, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267A3D0, void, set_horizontalOverflow, app::Text* this_ptr, app::HorizontalWrapMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x0267A430, app::VerticalWrapMode__Enum, get_verticalOverflow, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267A450, void, set_verticalOverflow, app::Text* this_ptr, app::VerticalWrapMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x0267A4B0, float, get_lineSpacing, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267A4D0, void, set_lineSpacing, app::Text* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0267A540, app::FontStyle__Enum, get_fontStyle, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267A560, void, set_fontStyle, app::Text* this_ptr, app::FontStyle__Enum value)
    IL2CPP_REGISTER_METHOD(0x0267A5C0, float, get_pixelsPerUnit, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267A870, void, OnEnable, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267A930, void, OnDisable, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267A9E0, void, UpdateGeometry, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267AAD0, void, AssignDefaultFont, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267AD90, app::TextGenerationSettings, GetGenerationSettings, app::Text* this_ptr, app::Vector2 extents)
    IL2CPP_REGISTER_METHOD(0x0267B090, app::Vector2, GetTextAnchorPivot, app::TextAnchor__Enum anchor)
    IL2CPP_REGISTER_METHOD(0x0267B2B0, void, OnPopulateMesh, app::Text* this_ptr, app::VertexHelper* to_fill)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CalculateLayoutInputHorizontal, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CalculateLayoutInputVertical, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024BF590, float, get_minWidth, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267BA50, float, get_preferredWidth, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024BF740, float, get_flexibleWidth, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024BF590, float, get_minHeight, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267BBD0, float, get_preferredHeight, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024BF740, float, get_flexibleHeight, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F1B660, int32_t, get_layoutPriority, app::Text* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267BCE0, void, cctor, )
} // namespace app::classes::UnityEngine::UI::Text
