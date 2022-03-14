#pragma once

#include <macros.h>

enum class ScreenPosition
{
    TopLeft = 0,
    TopCenter = 1,
    TopRight = 2,
    MiddleLeft = 3,
    MiddleCenter = 4,
    MiddleRight = 5,
    BottomLeft = 6,
    BottomCenter = 7,
    BottomRight = 8
};

using creation_callback = void(*)(int id);

void hide_below_hint();
extern bool area_map_open;
app::MessageBox* send_msg(const wchar_t* hint, float duration, app::Vector3 pos, bool mute);
void update_color(app::GameObject* go, app::Color color);

app::GameObject* text_box_get_go(int id);
bool text_box_creation_callback(int id, creation_callback func);

INJECT_C_DLLEXPORT int reserve_id();
INJECT_C_DLLEXPORT void get_screen_position(ScreenPosition position, app::Vector3* output);
INJECT_C_DLLEXPORT bool text_box_create(int id, float fadein, float fadeout, bool should_show_box, bool should_play_sound);
INJECT_C_DLLEXPORT bool text_box_text(int id, const wchar_t* text);
INJECT_C_DLLEXPORT bool text_box_position(int id, float x, float y, float z, bool use_in_game_coordinates);
INJECT_C_DLLEXPORT bool text_box_color(int id, int r, int g, int b, int a);
INJECT_C_DLLEXPORT bool text_box_alignment(int id, app::AlignmentMode__Enum alignment);
INJECT_C_DLLEXPORT bool text_box_anchor(int id, app::HorizontalAnchorMode__Enum horizontal, app::VerticalAnchorMode__Enum vertical);
INJECT_C_DLLEXPORT bool text_box_line_spacing(int id, float spacing);
INJECT_C_DLLEXPORT bool text_box_visibility(int id, bool value);
INJECT_C_DLLEXPORT bool text_box_is_delayed(int id);
INJECT_C_DLLEXPORT bool text_box_destroy(int id);
