#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/GUIContent.h>
#include <Modloader/app/structs/GUILayoutOption.h>
#include <Modloader/app/structs/GUILayoutOption__Array.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::UnityEngine::GUILayout {
    IL2CPP_REGISTER_METHOD(0x029E3370, void, Label_1, (app::String * text, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E3460, void, Label_2, (app::String * text, app::GUIStyle* style, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E3520, void, DoLabel, (app::GUIContent * content, app::GUIStyle* style, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E3630, void, Box, (app::GUIContent * content, app::GUIStyle* style, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E3630, void, DoBox, (app::GUIContent * content, app::GUIStyle* style, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E3740, bool, Button_1, (app::String * text, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E3830, bool, Button_2, (app::String * text, app::GUIStyle* style, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E38F0, bool, DoButton, (app::GUIContent * content, app::GUIStyle* style, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E3A00, app::String*, TextField, (app::String * text, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E3AE0, app::String*, TextArea, (app::String * text, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E3BC0, app::String*, DoTextField, (app::String * text, int32_t max_length, bool multiline, app::GUIStyle* style, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E3F00, bool, Toggle_1, (bool value, app::String* text, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E4010, bool, Toggle_2, (bool value, app::String* text, app::GUIStyle* style, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E40F0, bool, DoToggle, (bool value, app::GUIContent* content, app::GUIStyle* style, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E4210, float, HorizontalSlider, (float value, float left_value, float right_value, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E4330, float, DoHorizontalSlider, (float value, float left_value, float right_value, app::GUIStyle* slider, app::GUIStyle* thumb, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E4540, void, Space, (float pixels))
    IL2CPP_REGISTER_METHOD(0x029E48C0, void, FlexibleSpace, ())
    IL2CPP_REGISTER_METHOD(0x029E4CE0, void, BeginHorizontal_1, (app::GUILayoutOption__Array * options))
    IL2CPP_REGISTER_METHOD(0x029E4DD0, void, BeginHorizontal_2, (app::GUIStyle * style, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E4E90, void, BeginHorizontal_3, (app::GUIContent * content, app::GUIStyle* style, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E5040, void, EndHorizontal, ())
    IL2CPP_REGISTER_METHOD(0x029E50D0, void, BeginVertical_1, (app::GUILayoutOption__Array * options))
    IL2CPP_REGISTER_METHOD(0x029E51C0, void, BeginVertical_2, (app::GUIStyle * style, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E5280, void, BeginVertical_3, (app::GUIContent * content, app::GUIStyle* style, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E5430, void, EndVertical, ())
    IL2CPP_REGISTER_METHOD(0x029E54C0, void, BeginArea_1, (app::Rect screen_rect))
    IL2CPP_REGISTER_METHOD(0x029E55B0, void, BeginArea_2, (app::Rect screen_rect, app::String* text))
    IL2CPP_REGISTER_METHOD(0x029E56A0, void, BeginArea_3, (app::Rect screen_rect, app::GUIContent* content))
    IL2CPP_REGISTER_METHOD(0x029E5760, void, BeginArea_4, (app::Rect screen_rect, app::GUIStyle* style))
    IL2CPP_REGISTER_METHOD(0x029E5830, void, BeginArea_5, (app::Rect screen_rect, app::String* text, app::GUIStyle* style))
    IL2CPP_REGISTER_METHOD(0x029E5900, void, BeginArea_6, (app::Rect screen_rect, app::GUIContent* content, app::GUIStyle* style))
    IL2CPP_REGISTER_METHOD(0x029E5B40, void, EndArea, ())
    IL2CPP_REGISTER_METHOD(0x029E5DA0, app::Vector2, BeginScrollView_1, (app::Vector2 scroll_position, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E5ED0, app::Vector2, BeginScrollView_2, (app::Vector2 scroll_position, bool always_show_horizontal, bool always_show_vertical, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E6010, app::Vector2, BeginScrollView_3, (app::Vector2 scroll_position, app::GUIStyle* horizontal_scrollbar, app::GUIStyle* vertical_scrollbar, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E6110, app::Vector2, BeginScrollView_4, (app::Vector2 scroll_position, app::GUIStyle* style))
    IL2CPP_REGISTER_METHOD(0x029E6130, app::Vector2, BeginScrollView_5, (app::Vector2 scroll_position, app::GUIStyle* style, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E6380, app::Vector2, BeginScrollView_6, (app::Vector2 scroll_position, bool always_show_horizontal, bool always_show_vertical, app::GUIStyle* horizontal_scrollbar, app::GUIStyle* vertical_scrollbar, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E6490, app::Vector2, BeginScrollView_7, (app::Vector2 scroll_position, bool always_show_horizontal, bool always_show_vertical, app::GUIStyle* horizontal_scrollbar, app::GUIStyle* vertical_scrollbar, app::GUIStyle* background, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x01989400, void, EndScrollView_1, ())
    IL2CPP_REGISTER_METHOD(0x029E6760, void, EndScrollView_2, (bool handle_scroll_wheel))
    IL2CPP_REGISTER_METHOD(0x029E6820, app::GUILayoutOption*, Width, (float width))
    IL2CPP_REGISTER_METHOD(0x029E6990, app::GUILayoutOption*, Height, (float height))
    IL2CPP_REGISTER_METHOD(0x029E6B00, app::GUILayoutOption*, MinHeight, (float min_height))
    IL2CPP_REGISTER_METHOD(0x029E6C70, app::GUILayoutOption*, ExpandWidth, (bool expand))
    IL2CPP_REGISTER_METHOD(0x029E6DD0, app::GUILayoutOption*, ExpandHeight, (bool expand))
} // namespace app::classes::UnityEngine::GUILayout
