#include <game/player.h>

#include <game/game.h>
#include <macros.h>

#include <Il2CppModLoader/app/methods/GameController.h>
#include <Il2CppModLoader/app/methods/PlayerAbilities.h>
#include <Il2CppModLoader/app/methods/SeinCharacter.h>
#include <Il2CppModLoader/app/methods/SeinEnergy.h>
#include <Il2CppModLoader/app/methods/SeinHealthController.h>
#include <Il2CppModLoader/app/methods/SpellInventory.h>
#include <Il2CppModLoader/app/types/Characters.h>
#include <Il2CppModLoader/common.h>

#include <Il2CppModLoader/app/methods/GameplayCamera.h>
#include <Il2CppModLoader/app/methods/ScenesManager.h>
#include <Il2CppModLoader/app/types/UI_Cameras.h>
#include <features/scenes/scene_load.h>
#include <magic_enum.hpp>

using namespace modloader;
using namespace app::classes;

namespace game {
    namespace player {
        app::SeinCharacter* sein() {
            return types::Characters::get_class()->static_fields->m_sein;
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

        app::Vector3 get_position() {
            auto sein = game::player::sein();
            return sein != nullptr ? SeinCharacter::get_Position(sein) : app::Vector3{ 0, 0, 0 };
        }

        app::Vector2 get_velocity() {
            auto sein = game::player::sein();
            if (sein != nullptr) {
                auto& speed = sein->fields.PlatformBehaviour->fields.PlatformMovement->fields._.m_localSpeed;
                return app::Vector2{ speed.x, speed.y };
            }

            return app::Vector2{ 0.f, 0.f };
        }

        void set_position(float x, float y, bool wait_for_load) {
            set_position(app::Vector3{ x, y, 0.f }, wait_for_load);
        }

        void set_position(app::Vector3 value, bool wait_for_load) {
            auto sein = game::player::sein();
            if (sein != nullptr) {
                if (wait_for_load) {
                    ScenesManager::LoadScenesAtPosition(scenes::get_scenes_manager(), value, false, true, false, true, true);
                }

                SeinCharacter::set_Position(sein, value);
            }
        }

        void set_velocity(float x, float y) {
            auto sein = game::player::sein();
            if (sein != nullptr) {
                auto& speed = sein->fields.PlatformBehaviour->fields.PlatformMovement->fields._.m_localSpeed;
                speed.x = x;
                speed.y = y;
            }
        }

        void set_velocity(const app::Vector2& velocity) {
            set_velocity(velocity.x, velocity.y);
        }

        void snap_camera() {
            auto* const cameras = types::UI_Cameras::get_class();
            if (cameras != nullptr && cameras->static_fields->Current != nullptr) {
                // We need to do this on the next frame to allow state to update without causing flickering.
                auto* const camera = cameras->static_fields->Current;
                GameplayCamera::MoveCameraToTargetInstantly(camera, true);
            }
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
