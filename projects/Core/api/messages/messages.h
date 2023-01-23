#pragma once

#include <Core/macros.h>
#include <nlohmann/json.hpp>

#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/AlignmentMode__Enum.h>
#include <Modloader/app/structs/HorizontalAnchorMode__Enum.h>
#include <Modloader/app/structs/VerticalAnchorMode__Enum.h>

namespace core {
    class TextBox {
    public:
    private:
    };
} // namespace core

enum class ScreenPosition {
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

NLOHMANN_JSON_SERIALIZE_ENUM(ScreenPosition, {
                                                     { ScreenPosition::TopLeft, "TopLeft" },
                                                     { ScreenPosition::TopCenter, "TopCenter" },
                                                     { ScreenPosition::TopRight, "TopRight" },
                                                     { ScreenPosition::MiddleLeft, "MiddleLeft" },
                                                     { ScreenPosition::MiddleCenter, "MiddleCenter" },
                                                     { ScreenPosition::MiddleRight, "MiddleRight" },
                                                     { ScreenPosition::BottomLeft, "BottomLeft" },
                                                     { ScreenPosition::BottomCenter, "BottomCenter" },
                                                     { ScreenPosition::BottomRight, "BottomRight" },
                                             });

using creation_callback = void (*)(int id);

CORE_DLLEXPORT void hide_below_hint();
CORE_DLLEXPORT app::MessageBox* send_msg(const wchar_t* hint, float duration, app::Vector3 pos, bool mute);
CORE_DLLEXPORT void update_color(app::GameObject* go, app::Color color);

CORE_DLLEXPORT app::GameObject* text_box_get_go(int id);
CORE_DLLEXPORT bool text_box_creation_callback(int id, creation_callback func);

CORE_C_DLLEXPORT int reserve_id();
CORE_C_DLLEXPORT void get_screen_position(ScreenPosition position, app::Vector3* output);
CORE_C_DLLEXPORT bool text_box_create(int id, float fadein, float fadeout, bool should_show_box, bool should_play_sound);
CORE_C_DLLEXPORT bool text_box_text(int id, const wchar_t* text);
CORE_C_DLLEXPORT bool text_box_position(int id, float x, float y, float z, bool use_in_game_coordinates);
CORE_C_DLLEXPORT bool text_box_color(int id, int r, int g, int b, int a);
CORE_C_DLLEXPORT bool text_box_alignment(int id, app::AlignmentMode__Enum alignment);
CORE_C_DLLEXPORT bool text_box_anchor(int id, app::HorizontalAnchorMode__Enum horizontal, app::VerticalAnchorMode__Enum vertical);
CORE_C_DLLEXPORT bool text_box_line_spacing(int id, float spacing);
CORE_C_DLLEXPORT bool text_box_visibility(int id, bool value);
CORE_C_DLLEXPORT bool text_box_is_delayed(int id);
CORE_C_DLLEXPORT bool text_box_destroy(int id);
