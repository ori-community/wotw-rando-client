#pragma once

namespace game
{
    namespace ui
    {
        app::UI__Class* get();

        bool area_map_open();
        bool world_map_open();
        bool menu_open();
        bool shop_open();

        void shake_spiritlight();
        void shake_keystone();
        void shake_ore();
    }
}
