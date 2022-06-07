#include <game/player.h>

#include <game/game.h>
#include <macros.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/app/methods/SeinCharacter.h>
#include <Il2CppModLoader/app/methods/PlayerAbilities.h>
#include <Il2CppModLoader/app/methods/SpellInventory.h>
#include <Il2CppModLoader/app/methods/GameController.h>

#include <magic_enum/include/magic_enum.hpp>

using namespace modloader;
using namespace app::methods;

namespace game {
    namespace player {
        app::SeinCharacter *sein() {
            return il2cpp::get_class<app::Characters__Class>("Game", "Characters")->static_fields->m_sein;
        }

        bool has_ability(app::AbilityType__Enum ability) {
            auto player = sein();
            if (player && player->fields.PlayerAbilities)
                return PlayerAbilities::HasAbility(player->fields.PlayerAbilities, ability);

            trace(MessageType::Error, 3, "abilities", "Failed to check ability: couldn't find reference to sein!");
            return false;
        }

        void set_ability(app::AbilityType__Enum ability, bool value) {
            auto player = sein();
            if (player && player->fields.PlayerAbilities)
                PlayerAbilities::SetAbility(player->fields.PlayerAbilities, ability, value);
            else
                trace(MessageType::Error, 3, "abilities", "Failed to set ability: couldn't find reference to sein!");
        }

        void set_equipment(app::EquipmentType__Enum equip, bool value) {
            auto player = sein();
            if (player && player->fields.PlayerSpells)
                SpellInventory::AddNewSpellToInventory(player->fields.PlayerSpells, equip, value);
            else
                trace(MessageType::Error, 3, "abilities", "Failed to set equipment: couldn't find reference to sein!");
        }

        void bind(app::SpellInventory_Binding__Enum slot, app::EquipmentType__Enum equip_type) {
            SpellInventory::UpdateBinding_2(sein()->fields.PlayerSpells, slot, equip_type);
        }

        void unbind(app::EquipmentType__Enum equip_type) {
            SpellInventory::UnbindItem(sein()->fields.PlayerSpells, equip_type);
        }

        void unbind_all() {
            for (auto entry: magic_enum::enum_entries<app::EquipmentType__Enum>())
                SpellInventory::UnbindItem(sein()->fields.PlayerSpells, entry.first);
        }

        bool can_move() {
            auto gcip = controller();
            return !(GameController::get_InputLocked(gcip) ||
                     GameController::get_LockInput(gcip) ||
                     GameController::get_IsSuspended(gcip)) &&
                   GameController::get_SecondaryMapAndInventoryCanBeOpened(gcip);
        }

        app::Vector3 position() {
            auto sein = game::player::sein();
            return sein != nullptr ? SeinCharacter::get_Position(sein) : app::Vector3{0, 0, 0};
        }

        void position(app::Vector3 value) {
            auto sein = game::player::sein();
            if (sein != nullptr)
                SeinCharacter::set_Position(sein, value);
        }
    } // namespace player
} // namespace game

INJECT_C_DLLEXPORT bool has_ability(app::AbilityType__Enum ability) {
    return game::player::has_ability(ability);
}

INJECT_C_DLLEXPORT void set_ability(app::AbilityType__Enum ability, bool value) {
    return game::player::set_ability(ability, value);
}

INJECT_C_DLLEXPORT void set_equipment(app::EquipmentType__Enum equip, bool value) {
    return game::player::set_equipment(equip, value);
}

INJECT_C_DLLEXPORT void bind(app::SpellInventory_Binding__Enum slot, app::EquipmentType__Enum equip_type) {
    return game::player::bind(slot, equip_type);
}

INJECT_C_DLLEXPORT void unbind(app::EquipmentType__Enum equip_type) {
    return game::player::unbind(equip_type);
}

INJECT_C_DLLEXPORT bool player_can_move() {
    return game::player::can_move();
}
