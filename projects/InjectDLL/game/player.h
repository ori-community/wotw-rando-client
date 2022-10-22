#pragma once

namespace game {
    namespace player {
        app::SeinCharacter* sein();

        bool has_ability(app::AbilityType__Enum ability);
        void set_ability(app::AbilityType__Enum ability, bool value);

        void bind(app::SpellInventory_Binding__Enum slot, app::EquipmentType__Enum equip_type);
        void unbind(app::EquipmentType__Enum equip_type);
        void unbind_all();

        bool can_move();

        app::Vector3 get_position();
        app::Vector2 get_velocity();
        void set_position(float x, float y, bool wait_for_load = false);
        void set_position(app::Vector3 value, bool wait_for_load = false);
        void set_velocity(float x, float y);
        void set_velocity(const app::Vector2& value);
        void snap_camera();

        void refill_energy(bool instantly = false);
        void refill_health(bool instantly = false);
    } // namespace player
} // namespace game
