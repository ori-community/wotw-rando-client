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

        app::Vector3 position();
        void position(app::Vector3 value);
    } // namespace player
} // namespace game
