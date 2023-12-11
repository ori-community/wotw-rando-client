#include <Core/api/game/player.h>

#include <Core/api/game/game.h>
#include <Core/api/game/ui.h>

#include <Modloader/app/methods/CapsuleCrushDetector.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/Moon/uberSerializationWisp/PlayerUberStateInventory.h>
#include <Modloader/app/methods/Moon/uberSerializationWisp/PlayerUberStateShards.h>
#include <Modloader/app/methods/Moon/uberSerializationWisp/PlayerUberStateStats.h>
#include <Modloader/app/methods/PlayerAbilities.h>
#include <Modloader/app/methods/PlayerSpiritShards.h>
#include <Modloader/app/methods/SeinCharacter.h>
#include <Modloader/app/methods/SeinEnergy.h>
#include <Modloader/app/methods/SeinHealthController.h>
#include <Modloader/app/methods/SpellInventory.h>
#include <Modloader/app/types/Characters.h>
#include <Modloader/app/types/PlayerUberStateGroup.h>
#include <Modloader/modloader.h>

#include <Core/api/scenes/scene_load.h>
#include <Modloader/app/methods/GameplayCamera.h>
#include <Modloader/app/methods/ScenesManager.h>
#include <Modloader/app/methods/SeinUI.h>
#include <Modloader/app/types/GameWorld.h>
#include <Modloader/app/types/UI_Cameras.h>
#include <magic_enum.hpp>

using namespace modloader;
using namespace app::classes;

namespace core::api::game::player {

    CORE_DLLEXPORT bool prevent_default_pickup_handlers;

    namespace {
        IL2CPP_INTERCEPT(SeinUI, void, ShakeSpiritLight_1, (app::SeinUI * this_ptr)) {
            if (!prevent_default_pickup_handlers || ui::is_manually_shaking_resource_ui()) {
                next::SeinUI::ShakeSpiritLight_1(this_ptr);
            }
        }

        IL2CPP_INTERCEPT(SeinUI, void, ShakeKeystones, (app::SeinUI * this_ptr)) {
            if (!prevent_default_pickup_handlers || ui::is_manually_shaking_resource_ui()) {
                next::SeinUI::ShakeKeystones(this_ptr);
            }
        }

        IL2CPP_INTERCEPT(SeinUI, void, ShakeSeeds_1, (app::SeinUI * this_ptr)) {
            if (!prevent_default_pickup_handlers || ui::is_manually_shaking_resource_ui()) {
                next::SeinUI::ShakeSeeds_1(this_ptr);
            }
        }

        std::unordered_map<app::AbilityType__Enum, app::EquipmentType__Enum> ability_to_equip_map{
            { app::AbilityType__Enum::Bash, app::EquipmentType__Enum::Ability_Bash },
            { app::AbilityType__Enum::DoubleJump, app::EquipmentType__Enum::Ability_DoubleJump },
            { app::AbilityType__Enum::Launch, app::EquipmentType__Enum::Spell_ChargeJump },
            { app::AbilityType__Enum::Glide, app::EquipmentType__Enum::AutoAbility_Glide },
            { app::AbilityType__Enum::WaterBreath, app::EquipmentType__Enum::AutoAbility_WaterBreath },
            { app::AbilityType__Enum::Grenade, app::EquipmentType__Enum::Spell_StickyMine },
            { app::AbilityType__Enum::SpiritLeash, app::EquipmentType__Enum::Ability_Leash },
            { app::AbilityType__Enum::GlowSpell, app::EquipmentType__Enum::Spell_Glow },
            { app::AbilityType__Enum::SpiritSpearSpell, app::EquipmentType__Enum::Spell_Spear },
            { app::AbilityType__Enum::Regenerate, app::EquipmentType__Enum::Spell_Meditate },
            { app::AbilityType__Enum::Bow, app::EquipmentType__Enum::Weapon_Bow },
            { app::AbilityType__Enum::Hammer, app::EquipmentType__Enum::Weapon_Hammer },
            { app::AbilityType__Enum::Sword, app::EquipmentType__Enum::Weapon_Sword },
            { app::AbilityType__Enum::Digging, app::EquipmentType__Enum::Ability_Digging },
            { app::AbilityType__Enum::Dash, app::EquipmentType__Enum::AutoAbility_Dash },
            { app::AbilityType__Enum::WaterDash, app::EquipmentType__Enum::AutoAbility_WaterDash },
            { app::AbilityType__Enum::ChakramSpell, app::EquipmentType__Enum::Spell_Chakram },
            { app::AbilityType__Enum::GoldenSein, app::EquipmentType__Enum::Spell_GoldenSein },
            { app::AbilityType__Enum::Blaze, app::EquipmentType__Enum::Spell_Blaze },
            { app::AbilityType__Enum::FeatherFlap, app::EquipmentType__Enum::Ability_FeatherFlap },
            { app::AbilityType__Enum::TurretSpell, app::EquipmentType__Enum::Spell_Turret },
            { app::AbilityType__Enum::DamageUpgradeA, app::EquipmentType__Enum::AutoAbility_DamageUpgradeA },
            { app::AbilityType__Enum::DamageUpgradeB, app::EquipmentType__Enum::AutoAbility_DamageUpgradeB },
        };

        app::PlayerUberStateStats* get_stats() {
            app::PlayerUberStateGroup* player_group = types::PlayerUberStateGroup::get_class()->static_fields->Instance;
            return player_group->fields.PlayerUberState->fields.m_state->fields.Stats;
        }

        app::PlayerUberStateInventory* get_inventory() {
            app::PlayerUberStateGroup* player_group = types::PlayerUberStateGroup::get_class()->static_fields->Instance;
            return player_group->fields.PlayerUberState->fields.m_state->fields.Inventory;
        }

        app::PlayerSpiritShards* get_player_spirit_shards() {
            auto sein = core::api::game::player::sein();
            return sein ? sein->fields.PlayerSpiritShards : nullptr;
        }

        app::PlayerUberStateShards* get_shards() {
            app::PlayerUberStateGroup* player_group = types::PlayerUberStateGroup::get_class()->static_fields->Instance;
            return player_group->fields.PlayerUberState->fields.m_state->fields.Shards;
        }

        float get_health() {
            return get_stats()->fields.m_health;
        }

        float get_energy() {
            return get_stats()->fields.m_energy;
        }

        void add_health(const float value) {
            const auto sein = player::sein();
            if (sein == nullptr) {
                return;
            }

            ScopedSetter setter(prevent_default_pickup_handlers, false);
            if (value >= 0.0f) {
                SeinHealthController::GainHealth(sein->fields.Mortality->fields.Health, value, 4, false);
            } else if (get_health() + value < 0.0f) {
                CapsuleCrushDetector::KillOri(sein->fields.Mortality->fields.CrushDetector);
            } else {
                SeinHealthController::LoseHealth(sein->fields.Mortality->fields.Health, static_cast<int>(value), 4);
            }
        }

        void set_health(const float value) {
            const auto sein = player::sein();
            if (sein == nullptr) {
                return;
            }

            ScopedSetter setter(prevent_default_pickup_handlers, false);
            if (value < 0.0f) {
                CapsuleCrushDetector::KillOri(sein->fields.Mortality->fields.CrushDetector);
            }
            else {
                SeinHealthController::set_Amount(sein->fields.Mortality->fields.Health, value);
            }
        }

        void add_energy(const float value) {
            const auto sein = game::player::sein();
            if (sein == nullptr) {
                return;
            }

            ScopedSetter setter(prevent_default_pickup_handlers, false);
            if (value >= 0.0f) {
                SeinEnergy::Gain(sein->fields.Energy, value);
            } else {
                SeinEnergy::Spend_1(sein->fields.Energy, std::max(value, -get_energy()));
            }
        }

        void set_energy(float value) {
            const auto sein = game::player::sein();
            if (sein == nullptr) {
                return;
            }

            ScopedSetter setter(prevent_default_pickup_handlers, false);
            SeinEnergy::set_Current(sein->fields.Energy, value);
        }

        int get_max_health() {
            auto sein = core::api::game::player::sein();
            return sein ? app::classes::SeinHealthController::get_BaseMaxHealth(sein->fields.Mortality->fields.Health) : 0;
        }

        void set_max_health(int value) {
            const auto sein = game::player::sein();
            if (sein == nullptr) {
                return;
            }

            ScopedSetter setter(prevent_default_pickup_handlers, false);
            SeinHealthController::set_BaseMaxHealth(sein->fields.Mortality->fields.Health, value);
        }

        float get_max_energy() {
            auto sein = core::api::game::player::sein();
            return sein ? app::classes::SeinEnergy::get_BaseMaxEnergy(sein->fields.Energy) : 0;
        }

        void set_max_energy(float value) {
            const auto sein = game::player::sein();
            if (sein == nullptr) {
                return;
            }

            ScopedSetter setter(prevent_default_pickup_handlers, false);
            SeinEnergy::set_BaseMaxEnergy(sein->fields.Energy, value);
        }

        int get_spirit_light() {
            return get_inventory()->fields.m_experience;
        }

        void set_spirit_light(int value) {
            auto inventory = get_inventory();
            const auto should_shake = inventory->fields.m_experience != value;
            inventory->fields.m_experience = value;
            Moon::uberSerializationWisp::PlayerUberStateInventory::RunSetDirtyCallback(inventory);
            if (should_shake) {
                ui::shake_spirit_light();
            }
        }

        int get_keystones() {
            return get_inventory()->fields.m_keystones;
        }

        void set_keystones(int value) {
            auto inventory = get_inventory();
            const auto should_shake = inventory->fields.m_keystones != value;
            inventory->fields.m_keystones = value;
            Moon::uberSerializationWisp::PlayerUberStateInventory::RunSetDirtyCallback(inventory);
            if (should_shake) {
                ui::shake_keystone();
            }
        }

        int get_ore() {
            return get_inventory()->fields.m_ore;
        }

        void set_ore(int value) {
            auto inventory = get_inventory();
            const auto should_shake = inventory->fields.m_ore != value;
            inventory->fields.m_ore = value;
            Moon::uberSerializationWisp::PlayerUberStateInventory::RunSetDirtyCallback(inventory);
            if (should_shake) {
                ui::shake_ore();
            }
        }

        int get_shard_slots() {
            return get_shards()->fields.m_shardSlotCount;
        }

        void set_shard_slots(int value) {
            auto shards = get_player_spirit_shards();
            if (shards != nullptr) {
                PlayerSpiritShards::SetGlobalShardSlotCount(shards, value);
            }
        }

        bool has_shard(app::SpiritShardType__Enum type) {
            auto shards = get_player_spirit_shards();
            return shards != nullptr && PlayerSpiritShards::HasShard(shards, static_cast<app::SpiritShardType__Enum>(type));
        }

        void set_shard(app::SpiritShardType__Enum type, bool value) {
            auto player_shards = get_player_spirit_shards();
            if (player_shards != nullptr) {
                auto shard = Moon::uberSerializationWisp::PlayerUberStateShards::SetAbility(get_shards(), static_cast<app::SpiritShardType__Enum>(type), value);
                il2cpp::invoke(player_shards->fields.OnInventoryUpdated, "Invoke", shard);
                PlayerSpiritShards::RefreshHasShard(player_shards);
            }
        }
    } // namespace

    app::SeinCharacter* sein() {
        return types::Characters::get_class()->static_fields->m_sein;
    }

    bool has_ability(app::AbilityType__Enum ability) {
        auto player = sein();
        if (player && player->fields.PlayerAbilities) {
            return PlayerAbilities::HasAbility(player->fields.PlayerAbilities, ability);
        }

        error("abilities", "Failed to check ability: couldn't find reference to sein!");
        return false;
    }

    void set_ability(app::AbilityType__Enum ability, bool value) {
        auto player = sein();
        if (player && player->fields.PlayerAbilities) {
            PlayerAbilities::SetAbility(player->fields.PlayerAbilities, ability, value);
        } else {
            error("abilities", "Failed to set ability: couldn't find reference to sein!");
        }
    }

    void set_equipment(app::EquipmentType__Enum equip, bool value) {
        auto player = sein();
        if (player && player->fields.PlayerSpells) {
            SpellInventory::AddNewSpellToInventory(player->fields.PlayerSpells, equip, value);
        } else {
            error("abilities", "Failed to set equipment: couldn't find reference to sein!");
        }
    }

    std::optional<app::EquipmentType__Enum> ability_to_equip_type(app::AbilityType__Enum ability) {
        auto it = ability_to_equip_map.find(ability);
        return it != ability_to_equip_map.end() ? std::optional<app::EquipmentType__Enum>(it->second) : std::nullopt;
    }

    void bind(app::SpellInventory_Binding__Enum slot, app::EquipmentType__Enum equip_type) {
        SpellInventory::UpdateBinding_2(sein()->fields.PlayerSpells, slot, equip_type);
    }

    void unbind(app::EquipmentType__Enum equip_type) {
        SpellInventory::UnbindItem(sein()->fields.PlayerSpells, equip_type);
    }

    void unbind_all() {
        for (auto entry : magic_enum::enum_entries<app::EquipmentType__Enum>()) {
            SpellInventory::UnbindItem(sein()->fields.PlayerSpells, entry.first);
        }
    }

    bool can_move() {
        auto game_controller = game::game_controller();
        return !(GameController::get_InputLocked(game_controller) ||
                 GameController::get_LockInput(game_controller) ||
                 GameController::get_IsSuspended(game_controller)) &&
            GameController::get_SecondaryMapAndInventoryCanBeOpened(game_controller);
    }

    app::Vector3 get_position() {
        auto sein = player::sein();
        return sein != nullptr ? SeinCharacter::get_Position(sein) : app::Vector3{ 0, 0, 0 };
    }

    app::Vector2 get_velocity() {
        auto sein = player::sein();
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
        auto sein = player::sein();
        if (sein != nullptr) {
            if (wait_for_load) {
                ScenesManager::LoadScenesAtPosition(scenes::get_scenes_manager(), value, false, true, false, true, true);
            }

            SeinCharacter::set_Position(sein, value);
        }
    }

    void set_velocity(float x, float y) {
        auto sein = player::sein();
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

    GameArea get_current_area() {
        app::GameWorld* game_world = types::GameWorld::get_class()->static_fields->Instance;
        if (game_world == nullptr || game_world->fields.CurrentArea == nullptr || game_world->fields.CurrentArea->fields.Area == nullptr) {
            return convert_to_game_area(app::GameWorldAreaID__Enum::None);
        }

        return convert_to_game_area(game_world->fields.CurrentArea->fields.Area->fields.WorldMapAreaUniqueID);
    }

    void refill_health() {
        const auto sein = player::sein();
        if (sein != nullptr) {
            ScopedSetter setter(prevent_default_pickup_handlers, false);
            SeinHealthController::RestoreAllHealth(sein->fields.Mortality->fields.Health, 4);
        }
    }

    void refill_energy() {
        auto sein = player::sein();
        if (sein != nullptr) {
            ScopedSetter setter(prevent_default_pickup_handlers, false);
            SeinEnergy::RestoreAllEnergy(sein->fields.Energy);
        }
    }

    Property<float> health() {
        return Property<float>(set_health, get_health);
    }

    Property<int> max_health() {
        return Property<int>(set_max_health, get_max_health);
    }

    Property<float> energy() {
        return Property<float>(set_energy, get_energy);
    }

    Property<float> max_energy() {
        return Property<float>(set_max_energy, get_max_energy);
    }

    Property<int> spirit_light() {
        return Property<int>(set_spirit_light, get_spirit_light);
    }

    Property<int> keystones() {
        return Property<int>(set_keystones, get_keystones);
    }

    Property<int> ore() {
        return Property<int>(set_ore, get_ore);
    }

    Property<int> shard_slots() {
        return Property<int>(set_shard_slots, get_shard_slots);
    }

    Property<bool> shard(app::SpiritShardType__Enum type) {
        return Property<bool>(
            [type](const bool value) { set_shard(type, value); },
            [type]() { return has_shard(type); }
        );
    }

    bool is_shard_equipped(app::SpiritShardType__Enum type) {
        const auto shards = get_player_spirit_shards();
        return shards != nullptr && PlayerSpiritShards::IsGlobalShardEquipped_1(shards, type);
    }

    app::PlayerUberStateAreaMapInformation* get_area_map_information() {
        const auto player_group = types::PlayerUberStateGroup::get_class()->static_fields->Instance;

        if (player_group == nullptr) {
            return nullptr;
        }

        return player_group->fields.PlayerUberState->fields.m_state->fields.AreaMapInfo;
    }
} // namespace core::api::game::player
