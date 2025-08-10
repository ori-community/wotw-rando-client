#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Font.h>
#include <Modloader/app/structs/FontStyle__Enum.h>
#include <Modloader/app/structs/GUIContent.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/GUIStyleState.h>
#include <Modloader/app/structs/ImagePosition__Enum.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/RectOffset.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextAnchor__Enum.h>
#include <Modloader/app/structs/TextClipping__Enum.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::UnityEngine::GUIStyle {
    IL2CPP_REGISTER_METHOD(0x029F2F40, void, ctor_1, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F3020, void, ctor_2, app::GUIStyle* this_ptr, app::GUIStyle* other)
    IL2CPP_REGISTER_METHOD(0x029F3140, app::String*, get_name, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F3190, void, set_name, app::GUIStyle* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x029F31F0, app::Font*, get_font, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F3240, void, set_font, app::GUIStyle* this_ptr, app::Font* value)
    IL2CPP_REGISTER_METHOD(0x029F32A0, app::ImagePosition__Enum, get_imagePosition, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F32F0, void, set_imagePosition, app::GUIStyle* this_ptr, app::ImagePosition__Enum value)
    IL2CPP_REGISTER_METHOD(0x029F3350, app::TextAnchor__Enum, get_alignment, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F33A0, void, set_alignment, app::GUIStyle* this_ptr, app::TextAnchor__Enum value)
    IL2CPP_REGISTER_METHOD(0x029F3400, bool, get_wordWrap, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F3450, void, set_wordWrap, app::GUIStyle* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x029F34B0, app::TextClipping__Enum, get_clipping, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F3500, void, set_clipping, app::GUIStyle* this_ptr, app::TextClipping__Enum value)
    IL2CPP_REGISTER_METHOD(0x029F3560, app::Vector2, get_contentOffset, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F35D0, void, set_contentOffset, app::GUIStyle* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x029F3630, float, get_fixedWidth, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F3680, void, set_fixedWidth, app::GUIStyle* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x029F36E0, float, get_fixedHeight, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F3730, void, set_fixedHeight, app::GUIStyle* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x029F3790, bool, get_stretchWidth, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F37E0, void, set_stretchWidth, app::GUIStyle* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x029F3840, bool, get_stretchHeight, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F3890, void, set_stretchHeight, app::GUIStyle* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x029F38F0, int32_t, get_fontSize, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F3940, void, set_fontSize, app::GUIStyle* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x029F39A0, app::FontStyle__Enum, get_fontStyle, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F39F0, void, set_fontStyle, app::GUIStyle* this_ptr, app::FontStyle__Enum value)
    IL2CPP_REGISTER_METHOD(0x029F3A50, bool, get_richText, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F3AA0, void, set_richText, app::GUIStyle* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x029F3B00, void, set_Internal_clipOffset, app::GUIStyle* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x029F3B60, void*, Internal_Create, app::GUIStyle* self)
    IL2CPP_REGISTER_METHOD(0x029F3BB0, void*, Internal_Copy, app::GUIStyle* self, app::GUIStyle* other)
    IL2CPP_REGISTER_METHOD(0x029F3C10, void, Internal_Destroy, void* self)
    IL2CPP_REGISTER_METHOD(0x029F3C60, void*, GetStyleStatePtr, app::GUIStyle* this_ptr, int32_t idx)
    IL2CPP_REGISTER_METHOD(0x029F3CC0, void, AssignStyleState, app::GUIStyle* this_ptr, int32_t idx, void* src_style_state)
    IL2CPP_REGISTER_METHOD(0x029F3D30, void*, GetRectOffsetPtr, app::GUIStyle* this_ptr, int32_t idx)
    IL2CPP_REGISTER_METHOD(0x029F3D90, void, AssignRectOffset, app::GUIStyle* this_ptr, int32_t idx, void* src_rect_offset)
    IL2CPP_REGISTER_METHOD(0x029F3E00, float, Internal_GetLineHeight, void* target)
    IL2CPP_REGISTER_METHOD(
        0x029F3E50,
        void,
        Internal_Draw,
        app::GUIStyle* this_ptr,
        app::Rect screen_rect,
        app::GUIContent* content,
        bool is_hover,
        bool is_active,
        bool on,
        bool has_keyboard_focus
    )
    IL2CPP_REGISTER_METHOD(
        0x029F3F00,
        void,
        Internal_Draw2,
        app::GUIStyle* this_ptr,
        app::Rect position,
        app::GUIContent* content,
        int32_t control_i_d,
        bool on
    )
    IL2CPP_REGISTER_METHOD(
        0x029F3F90,
        void,
        Internal_DrawCursor,
        app::GUIStyle* this_ptr,
        app::Rect position,
        app::GUIContent* content,
        int32_t pos,
        app::Color cursor_color
    )
    IL2CPP_REGISTER_METHOD(
        0x029F4020,
        void,
        Internal_DrawWithTextSelection,
        app::GUIStyle* this_ptr,
        app::Rect screen_rect,
        app::GUIContent* content,
        bool is_hover,
        bool is_active,
        bool on,
        bool has_keyboard_focus,
        bool draw_selection_as_composition,
        int32_t cursor_first,
        int32_t cursor_last,
        app::Color cursor_color,
        app::Color selection_color
    )
    IL2CPP_REGISTER_METHOD(
        0x029F4110,
        app::Vector2,
        Internal_GetCursorPixelPosition,
        app::GUIStyle* this_ptr,
        app::Rect position,
        app::GUIContent* content,
        int32_t cursor_string_index
    )
    IL2CPP_REGISTER_METHOD(
        0x029F41B0,
        int32_t,
        Internal_GetCursorStringIndex,
        app::GUIStyle* this_ptr,
        app::Rect position,
        app::GUIContent* content,
        app::Vector2 cursor_pixel_position
    )
    IL2CPP_REGISTER_METHOD(0x029F4230, app::Vector2, Internal_CalcSize, app::GUIStyle* this_ptr, app::GUIContent* content)
    IL2CPP_REGISTER_METHOD(0x029F42B0, app::Vector2, Internal_CalcSizeWithConstraints, app::GUIStyle* this_ptr, app::GUIContent* content, app::Vector2 max_size)
    IL2CPP_REGISTER_METHOD(0x029F4330, float, Internal_CalcHeight, app::GUIStyle* this_ptr, app::GUIContent* content, float width)
    IL2CPP_REGISTER_METHOD(0x029F43A0, app::Vector2, Internal_CalcMinMaxWidth, app::GUIStyle* this_ptr, app::GUIContent* content)
    IL2CPP_REGISTER_METHOD(0x029F4420, void, SetMouseTooltip, app::String* tooltip, app::Rect screen_rect)
    IL2CPP_REGISTER_METHOD(0x029F4510, float, Internal_GetCursorFlashOffset, )
    IL2CPP_REGISTER_METHOD(0x029F4560, void, SetDefaultFont, app::Font* font)
    IL2CPP_REGISTER_METHOD(0x029F45B0, void, Finalize, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F46F0, app::GUIStyleState*, get_normal, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F4760, void, set_normal, app::GUIStyle* this_ptr, app::GUIStyleState* value)
    IL2CPP_REGISTER_METHOD(0x029F47D0, app::GUIStyleState*, get_hover, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F4840, void, set_hover, app::GUIStyle* this_ptr, app::GUIStyleState* value)
    IL2CPP_REGISTER_METHOD(0x029F48C0, app::GUIStyleState*, get_active, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F4930, void, set_active, app::GUIStyle* this_ptr, app::GUIStyleState* value)
    IL2CPP_REGISTER_METHOD(0x029F49B0, app::GUIStyleState*, get_onNormal, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F4A20, void, set_onNormal, app::GUIStyle* this_ptr, app::GUIStyleState* value)
    IL2CPP_REGISTER_METHOD(0x029F4AA0, app::GUIStyleState*, get_onHover, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F4B10, void, set_onHover, app::GUIStyle* this_ptr, app::GUIStyleState* value)
    IL2CPP_REGISTER_METHOD(0x029F4B90, app::GUIStyleState*, get_onActive, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F4C00, void, set_onActive, app::GUIStyle* this_ptr, app::GUIStyleState* value)
    IL2CPP_REGISTER_METHOD(0x029F4C80, app::GUIStyleState*, get_focused, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F4CF0, void, set_focused, app::GUIStyle* this_ptr, app::GUIStyleState* value)
    IL2CPP_REGISTER_METHOD(0x029F4D70, app::GUIStyleState*, get_onFocused, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F4DE0, void, set_onFocused, app::GUIStyle* this_ptr, app::GUIStyleState* value)
    IL2CPP_REGISTER_METHOD(0x029F4E60, app::RectOffset*, get_border, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F5000, void, set_border, app::GUIStyle* this_ptr, app::RectOffset* value)
    IL2CPP_REGISTER_METHOD(0x029F5070, app::RectOffset*, get_margin, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F5220, void, set_margin, app::GUIStyle* this_ptr, app::RectOffset* value)
    IL2CPP_REGISTER_METHOD(0x029F52A0, app::RectOffset*, get_padding, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F5450, void, set_padding, app::GUIStyle* this_ptr, app::RectOffset* value)
    IL2CPP_REGISTER_METHOD(0x029F54D0, app::RectOffset*, get_overflow, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F5680, void, set_overflow, app::GUIStyle* this_ptr, app::RectOffset* value)
    IL2CPP_REGISTER_METHOD(0x029F5700, float, get_lineHeight, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x029F5810,
        void,
        Draw_1,
        app::GUIStyle* this_ptr,
        app::Rect position,
        bool is_hover,
        bool is_active,
        bool on,
        bool has_keyboard_focus
    )
    IL2CPP_REGISTER_METHOD(
        0x029F5960,
        void,
        Draw_2,
        app::GUIStyle* this_ptr,
        app::Rect position,
        app::GUIContent* content,
        bool is_hover,
        bool is_active,
        bool on,
        bool has_keyboard_focus
    )
    IL2CPP_REGISTER_METHOD(0x029F5A10, void, Draw_3, app::GUIStyle* this_ptr, app::Rect position, app::GUIContent* content, int32_t control_i_d)
    IL2CPP_REGISTER_METHOD(0x029F5A50, void, Draw_4, app::GUIStyle* this_ptr, app::Rect position, app::GUIContent* content, int32_t control_i_d, bool on)
    IL2CPP_REGISTER_METHOD(
        0x029F5A90,
        void,
        Draw_5,
        app::GUIStyle* this_ptr,
        app::Rect position,
        app::GUIContent* content,
        int32_t control_id,
        bool is_hover,
        bool is_active,
        bool on,
        bool has_keyboard_focus
    )
    IL2CPP_REGISTER_METHOD(
        0x029F5BB0,
        void,
        DrawCursor,
        app::GUIStyle* this_ptr,
        app::Rect position,
        app::GUIContent* content,
        int32_t control_i_d,
        int32_t character
    )
    IL2CPP_REGISTER_METHOD(
        0x029F5F40,
        void,
        DrawWithTextSelection_1,
        app::GUIStyle* this_ptr,
        app::Rect position,
        app::GUIContent* content,
        bool is_active,
        bool has_keyboard_focus,
        int32_t first_selected_character,
        int32_t last_selected_character,
        bool draw_selection_as_composition,
        app::Color selection_color
    )
    IL2CPP_REGISTER_METHOD(
        0x029F63A0,
        void,
        DrawWithTextSelection_2,
        app::GUIStyle* this_ptr,
        app::Rect position,
        app::GUIContent* content,
        bool is_active,
        bool has_keyboard_focus,
        int32_t first_selected_character,
        int32_t last_selected_character,
        bool draw_selection_as_composition
    )
    IL2CPP_REGISTER_METHOD(
        0x029F6500,
        void,
        DrawWithTextSelection_3,
        app::GUIStyle* this_ptr,
        app::Rect position,
        app::GUIContent* content,
        int32_t control_i_d,
        int32_t first_selected_character,
        int32_t last_selected_character,
        bool draw_selection_as_composition
    )
    IL2CPP_REGISTER_METHOD(
        0x029F6790,
        void,
        DrawWithTextSelection_4,
        app::GUIStyle* this_ptr,
        app::Rect position,
        app::GUIContent* content,
        int32_t control_i_d,
        int32_t first_selected_character,
        int32_t last_selected_character
    )
    IL2CPP_REGISTER_METHOD(0x029F67D0, app::GUIStyle*, op_Implicit, app::String* str)
    IL2CPP_REGISTER_METHOD(0x029F6900, app::GUIStyle*, get_none, )
    IL2CPP_REGISTER_METHOD(
        0x029F6AB0,
        app::Vector2,
        GetCursorPixelPosition,
        app::GUIStyle* this_ptr,
        app::Rect position,
        app::GUIContent* content,
        int32_t cursor_string_index
    )
    IL2CPP_REGISTER_METHOD(
        0x029F6B50,
        int32_t,
        GetCursorStringIndex,
        app::GUIStyle* this_ptr,
        app::Rect position,
        app::GUIContent* content,
        app::Vector2 cursor_pixel_position
    )
    IL2CPP_REGISTER_METHOD(0x029F4230, app::Vector2, CalcSize, app::GUIStyle* this_ptr, app::GUIContent* content)
    IL2CPP_REGISTER_METHOD(0x029F42B0, app::Vector2, CalcSizeWithConstraints, app::GUIStyle* this_ptr, app::GUIContent* content, app::Vector2 constraints)
    IL2CPP_REGISTER_METHOD(0x029F4330, float, CalcHeight, app::GUIStyle* this_ptr, app::GUIContent* content, float width)
    IL2CPP_REGISTER_METHOD(0x029F6BD0, bool, get_isHeightDependantOnWidth, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F6CD0, void, CalcMinMaxWidth, app::GUIStyle* this_ptr, app::GUIContent* content, float* min_width, float* max_width)
    IL2CPP_REGISTER_METHOD(0x029F6D70, app::String*, ToString, app::GUIStyle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029F6EB0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x029F6F30, void, get_contentOffset_Injected, app::GUIStyle* this_ptr, app::Vector2* ret)
    IL2CPP_REGISTER_METHOD(0x029F6F90, void, set_contentOffset_Injected, app::GUIStyle* this_ptr, app::Vector2* value)
    IL2CPP_REGISTER_METHOD(0x029F6FF0, void, set_Internal_clipOffset_Injected, app::GUIStyle* this_ptr, app::Vector2* value)
    IL2CPP_REGISTER_METHOD(
        0x029F7050,
        void,
        Internal_Draw_Injected,
        app::GUIStyle* this_ptr,
        app::Rect* screen_rect,
        app::GUIContent* content,
        bool is_hover,
        bool is_active,
        bool on,
        bool has_keyboard_focus
    )
    IL2CPP_REGISTER_METHOD(
        0x029F7100,
        void,
        Internal_Draw2_Injected,
        app::GUIStyle* this_ptr,
        app::Rect* position,
        app::GUIContent* content,
        int32_t control_i_d,
        bool on
    )
    IL2CPP_REGISTER_METHOD(
        0x029F7190,
        void,
        Internal_DrawCursor_Injected,
        app::GUIStyle* this_ptr,
        app::Rect* position,
        app::GUIContent* content,
        int32_t pos,
        app::Color* cursor_color
    )
    IL2CPP_REGISTER_METHOD(
        0x029F7220,
        void,
        Internal_DrawWithTextSelection_Injected,
        app::GUIStyle* this_ptr,
        app::Rect* screen_rect,
        app::GUIContent* content,
        bool is_hover,
        bool is_active,
        bool on,
        bool has_keyboard_focus,
        bool draw_selection_as_composition,
        int32_t cursor_first,
        int32_t cursor_last,
        app::Color* cursor_color,
        app::Color* selection_color
    )
    IL2CPP_REGISTER_METHOD(
        0x029F72F0,
        void,
        Internal_GetCursorPixelPosition_Injected,
        app::GUIStyle* this_ptr,
        app::Rect* position,
        app::GUIContent* content,
        int32_t cursor_string_index,
        app::Vector2* ret
    )
    IL2CPP_REGISTER_METHOD(
        0x029F7380,
        int32_t,
        Internal_GetCursorStringIndex_Injected,
        app::GUIStyle* this_ptr,
        app::Rect* position,
        app::GUIContent* content,
        app::Vector2* cursor_pixel_position
    )
    IL2CPP_REGISTER_METHOD(0x029F7400, void, Internal_CalcSize_Injected, app::GUIStyle* this_ptr, app::GUIContent* content, app::Vector2* ret)
    IL2CPP_REGISTER_METHOD(
        0x029F7470,
        void,
        Internal_CalcSizeWithConstraints_Injected,
        app::GUIStyle* this_ptr,
        app::GUIContent* content,
        app::Vector2* max_size,
        app::Vector2* ret
    )
    IL2CPP_REGISTER_METHOD(0x029F74F0, void, Internal_CalcMinMaxWidth_Injected, app::GUIStyle* this_ptr, app::GUIContent* content, app::Vector2* ret)
    IL2CPP_REGISTER_METHOD(0x029F7560, void, SetMouseTooltip_Injected, app::String* tooltip, app::Rect* screen_rect)
} // namespace app::classes::UnityEngine::GUIStyle
