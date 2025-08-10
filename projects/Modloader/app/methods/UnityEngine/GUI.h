#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/FocusType__Enum.h>
#include <Modloader/app/structs/GUIContent.h>
#include <Modloader/app/structs/GUISkin.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/GUI_WindowFunction.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/ScaleMode__Enum.h>
#include <Modloader/app/structs/ScrollViewState.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextEditor.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::UnityEngine::GUI {
    IL2CPP_REGISTER_METHOD(0x029D8A00, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x029D8D50, bool, get_enableGUISystem, )
    IL2CPP_REGISTER_METHOD(0x029D8DA0, void, set_enableGUISystem, bool value)
    IL2CPP_REGISTER_METHOD(0x029D8DF0, app::Color, get_color, )
    IL2CPP_REGISTER_METHOD(0x029D8EE0, void, set_color, app::Color value)
    IL2CPP_REGISTER_METHOD(0x029D8FB0, app::Color, get_backgroundColor, )
    IL2CPP_REGISTER_METHOD(0x029D90A0, void, set_backgroundColor, app::Color value)
    IL2CPP_REGISTER_METHOD(0x029D9170, app::Color, get_contentColor, )
    IL2CPP_REGISTER_METHOD(0x029D9260, void, set_contentColor, app::Color value)
    IL2CPP_REGISTER_METHOD(0x029D9330, bool, get_changed, )
    IL2CPP_REGISTER_METHOD(0x029D9380, void, set_changed, bool value)
    IL2CPP_REGISTER_METHOD(0x029D93D0, bool, get_enabled, )
    IL2CPP_REGISTER_METHOD(0x029D9420, void, set_enabled, bool value)
    IL2CPP_REGISTER_METHOD(0x029D9470, int32_t, get_depth, )
    IL2CPP_REGISTER_METHOD(0x029D94C0, void, set_depth, int32_t value)
    IL2CPP_REGISTER_METHOD(0x029D9510, bool, get_usePageScrollbars, )
    IL2CPP_REGISTER_METHOD(0x029D9560, app::Material*, get_blendMaterial, )
    IL2CPP_REGISTER_METHOD(0x029D95B0, app::Material*, get_blitMaterial, )
    IL2CPP_REGISTER_METHOD(0x029D9600, app::Material*, get_roundedRectMaterial, )
    IL2CPP_REGISTER_METHOD(0x029D9650, void, GrabMouseControl, int32_t id)
    IL2CPP_REGISTER_METHOD(0x029D96A0, bool, HasMouseControl, int32_t id)
    IL2CPP_REGISTER_METHOD(0x029D96F0, void, ReleaseMouseControl, )
    IL2CPP_REGISTER_METHOD(0x029D9740, void, SetNextControlName, app::String* name)
    IL2CPP_REGISTER_METHOD(0x029D9790, void, FocusControl, app::String* name)
    IL2CPP_REGISTER_METHOD(0x029D97E0, void, InternalRepaintEditorWindow, )
    IL2CPP_REGISTER_METHOD(0x029D9830, app::String*, Internal_GetTooltip, )
    IL2CPP_REGISTER_METHOD(0x029D9880, void, Internal_SetTooltip, app::String* value)
    IL2CPP_REGISTER_METHOD(0x029D98D0, int32_t, get_scrollTroughSide, )
    IL2CPP_REGISTER_METHOD(0x029D9970, void, set_scrollTroughSide, int32_t value)
    IL2CPP_REGISTER_METHOD(0x029D9A20, app::DateTime, get_nextScrollStepTime, )
    IL2CPP_REGISTER_METHOD(0x029D9AC0, void, set_nextScrollStepTime, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x029D9B70, void, set_skin, app::GUISkin* value)
    IL2CPP_REGISTER_METHOD(0x029D9C10, app::GUISkin*, get_skin, )
    IL2CPP_REGISTER_METHOD(0x029D9CC0, void, DoSetSkin, app::GUISkin* new_skin)
    IL2CPP_REGISTER_METHOD(0x029D9F60, app::Matrix4x4, get_matrix, )
    IL2CPP_REGISTER_METHOD(0x029DA000, void, set_matrix, app::Matrix4x4 value)
    IL2CPP_REGISTER_METHOD(0x029DA070, app::String*, get_tooltip, )
    IL2CPP_REGISTER_METHOD(0x029DA150, void, set_tooltip, app::String* value)
    IL2CPP_REGISTER_METHOD(0x029DA220, void, Label_1, app::Rect position, app::String* text)
    IL2CPP_REGISTER_METHOD(0x029DA330, void, Label_2, app::Rect position, app::Texture* image)
    IL2CPP_REGISTER_METHOD(0x029DA440, void, Label_3, app::Rect position, app::GUIContent* content)
    IL2CPP_REGISTER_METHOD(0x029DA520, void, Label_4, app::Rect position, app::String* text, app::GUIStyle* style)
    IL2CPP_REGISTER_METHOD(0x029DA610, void, Label_5, app::Rect position, app::GUIContent* content, app::GUIStyle* style)
    IL2CPP_REGISTER_METHOD(0x029DA6E0, void, DrawTexture_1, app::Rect position, app::Texture* image)
    IL2CPP_REGISTER_METHOD(0x029DA820, void, DrawTexture_2, app::Rect position, app::Texture* image, app::ScaleMode__Enum scale_mode)
    IL2CPP_REGISTER_METHOD(0x029DA900, void, DrawTexture_3, app::Rect position, app::Texture* image, app::ScaleMode__Enum scale_mode, bool alpha_blend)
    IL2CPP_REGISTER_METHOD(
        0x029DAAA0,
        void,
        DrawTexture_4,
        app::Rect position,
        app::Texture* image,
        app::ScaleMode__Enum scale_mode,
        bool alpha_blend,
        float image_aspect
    )
    IL2CPP_REGISTER_METHOD(
        0x029DABD0,
        void,
        DrawTexture_5,
        app::Rect position,
        app::Texture* image,
        app::ScaleMode__Enum scale_mode,
        bool alpha_blend,
        float image_aspect,
        app::Color color,
        float border_width,
        float border_radius
    )
    IL2CPP_REGISTER_METHOD(
        0x029DAE40,
        void,
        DrawTexture_6,
        app::Rect position,
        app::Texture* image,
        app::ScaleMode__Enum scale_mode,
        bool alpha_blend,
        float image_aspect,
        app::Color color,
        app::Vector4 border_widths,
        float border_radius
    )
    IL2CPP_REGISTER_METHOD(
        0x029DB000,
        void,
        DrawTexture_7,
        app::Rect position,
        app::Texture* image,
        app::ScaleMode__Enum scale_mode,
        bool alpha_blend,
        float image_aspect,
        app::Color color,
        app::Vector4 border_widths,
        app::Vector4 border_radiuses
    )
    IL2CPP_REGISTER_METHOD(
        0x029DB570,
        bool,
        CalculateScaledTextureRects,
        app::Rect position,
        app::ScaleMode__Enum scale_mode,
        float image_aspect,
        app::Rect* out_screen_rect,
        app::Rect* out_source_rect
    )
    IL2CPP_REGISTER_METHOD(0x029DB6E0, void, Box_1, app::Rect position, app::String* text)
    IL2CPP_REGISTER_METHOD(0x029DB7F0, void, Box_2, app::Rect position, app::Texture* image)
    IL2CPP_REGISTER_METHOD(0x029DB900, void, Box_3, app::Rect position, app::String* text, app::GUIStyle* style)
    IL2CPP_REGISTER_METHOD(0x029DB9F0, void, Box_4, app::Rect position, app::GUIContent* content, app::GUIStyle* style)
    IL2CPP_REGISTER_METHOD(0x029DBBE0, bool, Button_1, app::Rect position, app::String* text)
    IL2CPP_REGISTER_METHOD(0x029DBCF0, bool, Button_2, app::Rect position, app::String* text, app::GUIStyle* style)
    IL2CPP_REGISTER_METHOD(0x029DBDE0, bool, Button_3, app::Rect position, app::GUIContent* content, app::GUIStyle* style)
    IL2CPP_REGISTER_METHOD(0x029DC030, bool, Button_4, app::Rect position, int32_t id, app::GUIContent* content, app::GUIStyle* style)
    IL2CPP_REGISTER_METHOD(0x029DC1A0, bool, RepeatButton, app::Rect position, app::String* text)
    IL2CPP_REGISTER_METHOD(
        0x029DC2B0,
        bool,
        DoRepeatButton,
        app::Rect position,
        app::GUIContent* content,
        app::GUIStyle* style,
        app::FocusType__Enum focus_type
    )
    IL2CPP_REGISTER_METHOD(0x029DC630, app::String*, PasswordFieldGetStrToShow, app::String* password, char16_t mask_char)
    IL2CPP_REGISTER_METHOD(0x029DC7C0, app::String*, TextArea_1, app::Rect position, app::String* text)
    IL2CPP_REGISTER_METHOD(0x029DC940, app::String*, TextArea_2, app::Rect position, app::String* text, app::GUIStyle* style)
    IL2CPP_REGISTER_METHOD(
        0x029DCAC0,
        void,
        DoTextField_1,
        app::Rect position,
        int32_t id,
        app::GUIContent* content,
        bool multiline,
        int32_t max_length,
        app::GUIStyle* style
    )
    IL2CPP_REGISTER_METHOD(
        0x029DCC50,
        void,
        DoTextField_2,
        app::Rect position,
        int32_t id,
        app::GUIContent* content,
        bool multiline,
        int32_t max_length,
        app::GUIStyle* style,
        app::String* secure_text
    )
    IL2CPP_REGISTER_METHOD(
        0x029DCD60,
        void,
        DoTextField_3,
        app::Rect position,
        int32_t id,
        app::GUIContent* content,
        bool multiline,
        int32_t max_length,
        app::GUIStyle* style,
        app::String* secure_text,
        char16_t mask_char
    )
    IL2CPP_REGISTER_METHOD(
        0x029DD170,
        void,
        HandleTextFieldEventForTouchscreen,
        app::Rect position,
        int32_t id,
        app::GUIContent* content,
        bool multiline,
        int32_t max_length,
        app::GUIStyle* style,
        app::String* secure_text,
        char16_t mask_char,
        app::TextEditor* editor
    )
    IL2CPP_REGISTER_METHOD(
        0x029DD620,
        void,
        HandleTextFieldEventForDesktop,
        app::Rect position,
        int32_t id,
        app::GUIContent* content,
        bool multiline,
        int32_t max_length,
        app::GUIStyle* style,
        app::TextEditor* editor
    )
    IL2CPP_REGISTER_METHOD(0x029DDEF0, bool, Toggle, app::Rect position, bool value, app::GUIContent* content, app::GUIStyle* style)
    IL2CPP_REGISTER_METHOD(0x029DE0C0, bool, DoControl, app::Rect position, int32_t id, bool on, app::GUIContent* content, app::GUIStyle* style)
    IL2CPP_REGISTER_METHOD(0x029DE420, void, DoLabel, app::Rect position, app::GUIContent* content, app::GUIStyle* style)
    IL2CPP_REGISTER_METHOD(0x029DE7B0, bool, DoToggle, app::Rect position, int32_t id, bool value, app::GUIContent* content, app::GUIStyle* style)
    IL2CPP_REGISTER_METHOD(0x029DE8A0, bool, DoButton, app::Rect position, int32_t id, app::GUIContent* content, app::GUIStyle* style)
    IL2CPP_REGISTER_METHOD(
        0x029DE990,
        float,
        HorizontalSlider,
        app::Rect position,
        float value,
        float left_value,
        float right_value,
        app::GUIStyle* slider,
        app::GUIStyle* thumb
    )
    IL2CPP_REGISTER_METHOD(
        0x029DEAA0,
        float,
        Slider,
        app::Rect position,
        float value,
        float size,
        float start,
        float end,
        app::GUIStyle* slider,
        app::GUIStyle* thumb,
        bool horiz,
        int32_t id
    )
    IL2CPP_REGISTER_METHOD(
        0x029DED20,
        float,
        HorizontalScrollbar,
        app::Rect position,
        float value,
        float size,
        float left_value,
        float right_value,
        app::GUIStyle* style
    )
    IL2CPP_REGISTER_METHOD(0x029DEFE0, bool, ScrollerRepeatButton, int32_t scroller_i_d, app::Rect rect, app::GUIStyle* style)
    IL2CPP_REGISTER_METHOD(0x029DF300, float, VerticalScrollbar_1, app::Rect position, float value, float size, float top_value, float bottom_value)
    IL2CPP_REGISTER_METHOD(
        0x029DF4A0,
        float,
        VerticalScrollbar_2,
        app::Rect position,
        float value,
        float size,
        float top_value,
        float bottom_value,
        app::GUIStyle* style
    )
    IL2CPP_REGISTER_METHOD(
        0x029DF760,
        float,
        Scroller,
        app::Rect position,
        float value,
        float size,
        float left_value,
        float right_value,
        app::GUIStyle* slider,
        app::GUIStyle* thumb,
        app::GUIStyle* left_button,
        app::GUIStyle* right_button,
        bool horiz
    )
    IL2CPP_REGISTER_METHOD(0x029E0080, void, BeginClip_1, app::Rect position, app::Vector2 scroll_offset, app::Vector2 render_offset, bool reset_offset)
    IL2CPP_REGISTER_METHOD(0x029E0130, void, BeginGroup_1, app::Rect position)
    IL2CPP_REGISTER_METHOD(0x029E0250, void, BeginGroup_2, app::Rect position, app::GUIContent* content, app::GUIStyle* style)
    IL2CPP_REGISTER_METHOD(0x029E0360, void, BeginGroup_3, app::Rect position, app::GUIContent* content, app::GUIStyle* style, app::Vector2 scroll_offset)
    IL2CPP_REGISTER_METHOD(0x029E06F0, void, EndGroup, )
    IL2CPP_REGISTER_METHOD(0x029E0740, void, BeginClip_2, app::Rect position)
    IL2CPP_REGISTER_METHOD(0x029E06F0, void, EndClip, )
    IL2CPP_REGISTER_METHOD(
        0x029E0860,
        app::Vector2,
        BeginScrollView,
        app::Rect position,
        app::Vector2 scroll_position,
        app::Rect view_rect,
        bool always_show_horizontal,
        bool always_show_vertical,
        app::GUIStyle* horizontal_scrollbar,
        app::GUIStyle* vertical_scrollbar,
        app::GUIStyle* background
    )
    IL2CPP_REGISTER_METHOD(0x029E1660, void, EndScrollView, bool handle_scroll_wheel)
    IL2CPP_REGISTER_METHOD(0x029E1A40, app::ScrollViewState*, GetTopScrollView, )
    IL2CPP_REGISTER_METHOD(0x029E1BB0, void, ScrollTo, app::Rect position)
    IL2CPP_REGISTER_METHOD(
        0x029E1DC0,
        void,
        CallWindowDelegate,
        app::GUI_WindowFunction* func,
        int32_t id,
        int32_t instance_i_d,
        app::GUISkin* _skin,
        int32_t force_rect,
        float width,
        float height,
        app::GUIStyle* style
    )
    IL2CPP_REGISTER_METHOD(0x029E21A0, void, get_color_Injected, app::Color* ret)
    IL2CPP_REGISTER_METHOD(0x029E21F0, void, set_color_Injected, app::Color* value)
    IL2CPP_REGISTER_METHOD(0x029E2240, void, get_backgroundColor_Injected, app::Color* ret)
    IL2CPP_REGISTER_METHOD(0x029E2290, void, set_backgroundColor_Injected, app::Color* value)
    IL2CPP_REGISTER_METHOD(0x029E22E0, void, get_contentColor_Injected, app::Color* ret)
    IL2CPP_REGISTER_METHOD(0x029E2330, void, set_contentColor_Injected, app::Color* value)
} // namespace app::classes::UnityEngine::GUI
