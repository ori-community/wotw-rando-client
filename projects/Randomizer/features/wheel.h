#pragma once

#include <Modloader/app/structs/SpellInventory_Binding__Enum.h>

#include <functional>
#include <string>

namespace randomizer::features::wheel {
    using wheel_callback = std::function<void(int wheel, int item, app::SpellInventory_Binding__Enum binding)>;

    // TODO: Rewrite this whole thing.

    bool set_wheel_item_name(int wheel, int item, std::string const& name);
    bool set_wheel_item_description(int wheel, int item, std::string const& description);
    bool set_wheel_item_texture(int wheel, int item, std::string const& texture);
    bool set_wheel_item_color(int wheel, int item, int r, int g, int b, int a);
    bool set_wheel_item_enabled(int wheel, int item, bool enabled);
    bool set_wheel_item_callback(int wheel, int item, app::SpellInventory_Binding__Enum binding, wheel_callback callback);
    bool clear_wheel_item(int wheel, int item);
    void refresh_wheel();
    bool set_active_wheel(int wheel);
    void set_wheel_sticky(int wheel, bool value);
    void set_wheel_behavior(int behavior);
    void clear_wheels();
    void initialize_default_wheel();
} // namespace randomizer::features::wheel
