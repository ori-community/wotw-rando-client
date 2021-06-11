#pragma once

void hide_below_hint();
extern bool area_map_open;
app::MessageBox* send_msg(const wchar_t* hint, float duration, app::Vector3 pos, bool mute);
std::string convert_csstring(app::String* str);
