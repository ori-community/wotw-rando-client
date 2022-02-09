#pragma once

#include <macros.h>

void hide_below_hint();
extern bool area_map_open;
app::MessageBox* send_msg(const wchar_t* hint, float duration, app::Vector3 pos, bool mute);
std::string convert_csstring(app::String* str);
void update_color(app::GameObject* go, app::Color color);

INJECT_C_DLLEXPORT int get_free_id();
INJECT_C_DLLEXPORT bool text_box_create(int id, float fadein, float fadeout, bool should_show_box, bool should_play_sound);
INJECT_C_DLLEXPORT bool text_box_text(int id, const wchar_t* text);
INJECT_C_DLLEXPORT bool text_box_position(int id, float x, float y, float z);
INJECT_C_DLLEXPORT bool text_box_color(int id, int r, int g, int b, int a);
INJECT_C_DLLEXPORT bool text_box_alignment(int id, app::AlignmentMode__Enum alignment);
INJECT_C_DLLEXPORT bool text_box_anchor(int id, app::HorizontalAnchorMode__Enum horizontal, app::VerticalAnchorMode__Enum vertical);
INJECT_C_DLLEXPORT bool text_box_line_spacing(int id, float spacing);
INJECT_C_DLLEXPORT bool text_box_destroy(int id);
