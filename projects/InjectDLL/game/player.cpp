#include <game/player.h>

#include <game/game.h>
#include <macros.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <magic_enum/include/magic_enum.hpp>

using namespace modloader;

namespace {
    IL2CPP_BINDING(, SeinCharacter, app::Vector3, get_Position, (app::SeinCharacter * this_ptr));
    IL2CPP_BINDING(, SeinCharacter, void, set_Position, (app::SeinCharacter * this_ptr, app::Vector3 value));

    IL2CPP_BINDING(, PlayerAbilities, bool, HasAbility, (app::PlayerAbilities * this_ptr, app::AbilityType__Enum ability));
    IL2CPP_BINDING(, PlayerAbilities, void, SetAbility, (app::PlayerAbilities * this_ptr, app::AbilityType__Enum ability, bool value));
    IL2CPP_BINDING(, SpellInventory, app::InventoryItem*, AddNewSpellToInventory, (app::SpellInventory * this_ptr, app::EquipmentType__Enum type, bool adding));
    IL2CPP_BINDING_OVERLOAD(, SpellInventory, void, UpdateBinding, (app::SpellInventory * this_ptr, app::SpellInventory_Binding__Enum binding, app::EquipmentType__Enum typ), (SpellInventory.Binding, EquipmentType));
    IL2CPP_BINDING(, SpellInventory, void, UnbindItem, (app::SpellInventory * this_ptr, app::EquipmentType__Enum type));

    IL2CPP_BINDING(, GameController, bool, get_InputLocked, (app::GameController * this_ptr));
    IL2CPP_BINDING(, GameController, bool, get_LockInput, (app::GameController * this_ptr));
    IL2CPP_BINDING(, GameController, bool, get_IsSuspended, (app::GameController * this_ptr));
    IL2CPP_BINDING(, GameController, bool, get_SecondaryMapAndInventoryCanBeOpened, (app::GameController * this_ptr));
} // namespace

namespace game {
    namespace player {
        app::SeinCharacter* sein() {
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
            SpellInventory::UpdateBinding(sein()->fields.PlayerSpells, slot, equip_type);
        }

        void unbind(app::EquipmentType__Enum equip_type) {
            SpellInventory::UnbindItem(sein()->fields.PlayerSpells, equip_type);
        }

        void unbind_all() {
            for (auto entry : magic_enum::enum_entries<app::EquipmentType__Enum>())
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
            return sein != nullptr ? SeinCharacter::get_Position(sein) : app::Vector3{ 0, 0, 0 };
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
