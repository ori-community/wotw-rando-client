#pragma once

#include <functional>
#include <nlohmann/json.hpp>
#include <string>

namespace randomizer::features::wheel {
    enum class WheelItemPosition {
        Top = 0,
        TopRight = 1,
        RightTop = 2,
        Right = 3,
        RightBottom = 4,
        BottomRight = 5,
        Bottom = 6,
        BottomLeft = 7,
        LeftBottom = 8,
        Left = 9,
        LeftTop = 10,
        TopLeft = 11,
    };

    NLOHMANN_JSON_SERIALIZE_ENUM(
        WheelItemPosition,
        {
            {WheelItemPosition::Top,         "Top"        },
            {WheelItemPosition::TopRight,    "TopRight"   },
            {WheelItemPosition::RightTop,    "RightTop"   },
            {WheelItemPosition::Right,       "Right"      },
            {WheelItemPosition::RightBottom, "RightBottom"},
            {WheelItemPosition::BottomRight, "BottomRight"},
            {WheelItemPosition::Bottom,      "Bottom"     },
            {WheelItemPosition::BottomLeft,  "BottomLeft" },
            {WheelItemPosition::LeftBottom,  "LeftBottom" },
            {WheelItemPosition::Left,        "Left"       },
            {WheelItemPosition::LeftTop,     "LeftTop"    },
            {WheelItemPosition::TopLeft,     "TopLeft"    },
    }
    );

    using wheel_callback = std::function<void(int wheel, WheelItemPosition item, app::SpellInventory_Binding__Enum binding)>;
    // TODO: Rewrite this whole thing.

    bool set_wheel_item_name(int wheel, WheelItemPosition item, std::string const& name);
    bool set_wheel_item_description(int wheel, WheelItemPosition item, std::string const& description);
    bool set_wheel_item_texture(int wheel, WheelItemPosition item, std::string const& texture);
    bool set_wheel_item_color(int wheel, WheelItemPosition item, int r, int g, int b, int a);
    bool set_wheel_item_enabled(int wheel, WheelItemPosition item, bool enabled);
    bool set_wheel_item_callback(int wheel, WheelItemPosition item, app::SpellInventory_Binding__Enum binding, const wheel_callback& callback);
    bool clear_wheel_item(int wheel, WheelItemPosition item);
    void refresh_wheel();
    bool set_active_wheel(int wheel);
    void set_wheel_sticky(int wheel, bool value);
    void set_wheel_behavior(int behavior);
    void clear_wheels();
    void initialize_default_wheel();
} // namespace randomizer::features::wheel
