#include <game/player.h>

#include <macros.h>
#include <game/game.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

using namespace modloader;

namespace
{
    IL2CPP_BINDING(, PlayerAbilities, bool, HasAbility, (app::PlayerAbilities* this_ptr, app::AbilityType__Enum ability));
    IL2CPP_BINDING(, PlayerAbilities, void, SetAbility, (app::PlayerAbilities* this_ptr, app::AbilityType__Enum ability, bool value));
    IL2CPP_BINDING(, SpellInventory, app::InventoryItem*, AddNewSpellToInventory, (app::SpellInventory* this_ptr, app::EquipmentType__Enum type, bool adding));
    IL2CPP_BINDING_OVERLOAD(, SpellInventory, void, UpdateBinding, (app::SpellInventory* this_ptr, app::SpellInventory_Binding__Enum binding, app::EquipmentType__Enum typ), (SpellInventory.Binding, EquipmentType));
    IL2CPP_BINDING(, SpellInventory, void, UnbindItem, (app::SpellInventory* this_ptr, app::EquipmentType__Enum type));

    IL2CPP_BINDING(, GameController, bool, get_InputLocked, (app::GameController* this_ptr));
    IL2CPP_BINDING(, GameController, bool, get_LockInput, (app::GameController* this_ptr));
    IL2CPP_BINDING(, GameController, bool, get_IsSuspended, (app::GameController* this_ptr));
    IL2CPP_BINDING(, GameController, bool, get_SecondaryMapAndInventoryCanBeOpened, (app::GameController* this_ptr));
}

namespace game
{
    namespace player
    {
        app::SeinCharacter* sein()
        {
            return il2cpp::get_class<app::Characters__Class>("Game", "Characters")->static_fields->m_sein;
        }

        bool has_ability(app::AbilityType__Enum ability)
        {
            auto player = sein();
            if (player && player->fields.PlayerAbilities)
                return PlayerAbilities::HasAbility(player->fields.PlayerAbilities, ability);

            trace(MessageType::Error, 3, "abilities", "Failed to check ability: couldn't find reference to sein!");
            return false;
        }

        void set_ability(app::AbilityType__Enum ability, bool value)
        {
            auto player = sein();
            if (player && player->fields.PlayerAbilities)
                PlayerAbilities::SetAbility(player->fields.PlayerAbilities, ability, value);
            else
                trace(MessageType::Error, 3, "abilities", "Failed to set ability: couldn't find reference to sein!");
        }

        void set_equipment(app::EquipmentType__Enum equip, bool value)
        {
            auto player = sein();
            if (player && player->fields.PlayerSpells)
                SpellInventory::AddNewSpellToInventory(player->fields.PlayerSpells, equip, value);
            else
                trace(MessageType::Error, 3, "abilities", "Failed to set equipment: couldn't find reference to sein!");
        }

        void bind(app::SpellInventory_Binding__Enum slot, app::EquipmentType__Enum equip_type)
        {
            SpellInventory::UpdateBinding(sein()->fields.PlayerSpells, slot, equip_type);
        }

        void unbind(app::EquipmentType__Enum equip_type)
        {
            SpellInventory::UnbindItem(sein()->fields.PlayerSpells, equip_type);
        }

        bool can_move()
        {
            auto gcip = controller();
            return !(GameController::get_InputLocked(gcip) ||
                GameController::get_LockInput(gcip) ||
                GameController::get_IsSuspended(gcip)) &&
                GameController::get_SecondaryMapAndInventoryCanBeOpened(gcip);
        }
    }
}

INJECT_C_DLLEXPORT bool has_ability(app::AbilityType__Enum ability)
{
    return game::player::has_ability(ability);
}

INJECT_C_DLLEXPORT void set_ability(app::AbilityType__Enum ability, bool value)
{
    return game::player::set_ability(ability, value);
}

INJECT_C_DLLEXPORT void set_equipment(app::EquipmentType__Enum equip, bool value)
{
    return game::player::set_equipment(equip, value);
}

INJECT_C_DLLEXPORT void bind(app::SpellInventory_Binding__Enum slot, app::EquipmentType__Enum equip_type)
{
    return game::player::bind(slot, equip_type);
}

INJECT_C_DLLEXPORT void unbind(app::EquipmentType__Enum equip_type)
{
    return game::player::unbind(equip_type);
}

INJECT_C_DLLEXPORT bool player_can_move()
{
    return game::player::can_move();
}
