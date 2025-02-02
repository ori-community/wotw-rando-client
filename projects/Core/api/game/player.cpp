#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/game/ui.h>
#include <Core/api/scenes/scene_load.h>
#include <Modloader/app/methods/CapsuleCrushDetector.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/GameplayCamera.h>
#include <Modloader/app/methods/Moon/uberSerializationWisp/PlayerUberStateInventory.h>
#include <Modloader/app/methods/Moon/uberSerializationWisp/PlayerUberStateShards.h>
#include <Modloader/app/methods/PlayerAbilities.h>
#include <Modloader/app/methods/PlayerSpiritShards.h>
#include <Modloader/app/methods/ScenesManager.h>
#include <Modloader/app/methods/SeinCharacter.h>
#include <Modloader/app/methods/SeinEnergy.h>
#include <Modloader/app/methods/SeinHealthController.h>
#include <Modloader/app/methods/SeinUI.h>
#include <Modloader/app/methods/SpellInventory.h>
#include <Modloader/app/types/Characters.h>
#include <Modloader/app/types/GameWorld.h>
#include <Modloader/app/types/PlayerUberStateGroup.h>
#include <Modloader/app/types/UI_Cameras.h>
#include <Modloader/modloader.h>
#include <magic_enum/magic_enum.hpp>

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

        const std::unordered_set<app::EquipmentType__Enum> equpment_types {
            app::EquipmentType__Enum::Ability_Bash,
            app::EquipmentType__Enum::Ability_DoubleJump,
            app::EquipmentType__Enum::Spell_ChargeJump,
            app::EquipmentType__Enum::AutoAbility_Glide,
            app::EquipmentType__Enum::AutoAbility_WaterBreath,
            app::EquipmentType__Enum::Spell_StickyMine,
            app::EquipmentType__Enum::Ability_Leash,
            app::EquipmentType__Enum::Spell_Glow,
            app::EquipmentType__Enum::Spell_Spear,
            app::EquipmentType__Enum::Spell_Meditate,
            app::EquipmentType__Enum::Weapon_Bow,
            app::EquipmentType__Enum::Weapon_Hammer,
            app::EquipmentType__Enum::Weapon_Sword,
            app::EquipmentType__Enum::Ability_Digging,
            app::EquipmentType__Enum::AutoAbility_Dash,
            app::EquipmentType__Enum::AutoAbility_WaterDash,
            app::EquipmentType__Enum::Spell_Chakram,
            app::EquipmentType__Enum::Spell_GoldenSein,
            app::EquipmentType__Enum::Spell_Blaze,
            app::EquipmentType__Enum::Ability_FeatherFlap,
            app::EquipmentType__Enum::Spell_Turret,
            app::EquipmentType__Enum::AutoAbility_DamageUpgradeA,
            app::EquipmentType__Enum::AutoAbility_DamageUpgradeB,
        };

        const std::unordered_map<app::AbilityType__Enum, app::EquipmentType__Enum> ability_to_equip_map{
            {app::AbilityType__Enum::Bash,             app::EquipmentType__Enum::Ability_Bash              },
            {app::AbilityType__Enum::DoubleJump,       app::EquipmentType__Enum::Ability_DoubleJump        },
            {app::AbilityType__Enum::ChargeJump,       app::EquipmentType__Enum::Spell_ChargeJump          },
            {app::AbilityType__Enum::Glide,            app::EquipmentType__Enum::AutoAbility_Glide         },
            {app::AbilityType__Enum::WaterBreath,      app::EquipmentType__Enum::AutoAbility_WaterBreath   },
            {app::AbilityType__Enum::Grenade,          app::EquipmentType__Enum::Spell_StickyMine          },
            {app::AbilityType__Enum::SpiritLeash,      app::EquipmentType__Enum::Ability_Leash             },
            {app::AbilityType__Enum::GlowSpell,        app::EquipmentType__Enum::Spell_Glow                },
            {app::AbilityType__Enum::SpiritSpearSpell, app::EquipmentType__Enum::Spell_Spear               },
            {app::AbilityType__Enum::MeditateSpell,    app::EquipmentType__Enum::Spell_Meditate            },
            {app::AbilityType__Enum::Bow,              app::EquipmentType__Enum::Weapon_Bow                },
            {app::AbilityType__Enum::Hammer,           app::EquipmentType__Enum::Weapon_Hammer             },
            {app::AbilityType__Enum::Sword,            app::EquipmentType__Enum::Weapon_Sword              },
            {app::AbilityType__Enum::Digging,          app::EquipmentType__Enum::Ability_Digging           },
            {app::AbilityType__Enum::DashNew,          app::EquipmentType__Enum::AutoAbility_Dash          },
            {app::AbilityType__Enum::WaterDash,        app::EquipmentType__Enum::AutoAbility_WaterDash     },
            {app::AbilityType__Enum::ChakramSpell,     app::EquipmentType__Enum::Spell_Chakram             },
            {app::AbilityType__Enum::GoldenSein,       app::EquipmentType__Enum::Spell_GoldenSein          },
            {app::AbilityType__Enum::Blaze,            app::EquipmentType__Enum::Spell_Blaze               },
            {app::AbilityType__Enum::FeatherFlap,      app::EquipmentType__Enum::Ability_FeatherFlap       },
            {app::AbilityType__Enum::TurretSpell,      app::EquipmentType__Enum::Spell_Turret              },
            {app::AbilityType__Enum::DamageUpgradeA,   app::EquipmentType__Enum::AutoAbility_DamageUpgradeA},
            {app::AbilityType__Enum::DamageUpgradeB,   app::EquipmentType__Enum::AutoAbility_DamageUpgradeB},
        };

        app::PlayerUberStateStats* get_stats() {
            const auto player_group = types::PlayerUberStateGroup::get_class()->static_fields->Instance;
            return player_group->fields.PlayerUberState->fields.m_state->fields.Stats;
        }

        app::PlayerUberStateInventory* get_inventory() {
            const auto player_group = types::PlayerUberStateGroup::get_class()->static_fields->Instance;
            return player_group->fields.PlayerUberState->fields.m_state->fields.Inventory;
        }

        app::PlayerSpiritShards* get_player_spirit_shards() {
            const auto sein = player::sein();
            return sein ? sein->fields.PlayerSpiritShards : nullptr;
        }

        app::PlayerUberStateShards* get_shards() {
            const auto player_group = types::PlayerUberStateGroup::get_class()->static_fields->Instance;
            return player_group->fields.PlayerUberState->fields.m_state->fields.Shards;
        }

        float get_health() { return get_stats()->fields.m_health; }

        float get_energy() { return get_stats()->fields.m_energy; }

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
            } else {
                SeinHealthController::set_Amount(sein->fields.Mortality->fields.Health, value);
            }
        }

        void add_energy(const float value) {
            const auto sein = player::sein();
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

        void set_energy(const float value) {
            const auto sein = player::sein();
            if (sein == nullptr) {
                return;
            }

            ScopedSetter setter(prevent_default_pickup_handlers, false);
            SeinEnergy::set_Current(sein->fields.Energy, value);
        }

        int get_max_health() {
            const auto sein = player::sein();
            return sein ? SeinHealthController::get_BaseMaxHealth(sein->fields.Mortality->fields.Health) : 0;
        }

        void set_max_health(const int value) {
            const auto sein = player::sein();
            if (sein == nullptr) {
                return;
            }

            ScopedSetter setter(prevent_default_pickup_handlers, false);
            SeinHealthController::set_BaseMaxHealth(sein->fields.Mortality->fields.Health, value);
        }

        float get_max_energy() {
            const auto sein = player::sein();
            return sein ? SeinEnergy::get_BaseMaxEnergy(sein->fields.Energy) : 0;
        }

        void set_max_energy(const float value) {
            const auto sein = player::sein();
            if (sein == nullptr) {
                return;
            }

            ScopedSetter setter(prevent_default_pickup_handlers, false);
            SeinEnergy::set_BaseMaxEnergy(sein->fields.Energy, value);
        }

        int get_spirit_light() { return get_inventory()->fields.m_experience; }

        void set_spirit_light(const int value) {
            const auto inventory = get_inventory();
            const auto should_shake = inventory->fields.m_experience != value;
            inventory->fields.m_experience = value;
            Moon::uberSerializationWisp::PlayerUberStateInventory::RunSetDirtyCallback(inventory);
            if (should_shake) {
                ui::shake_spirit_light();
            }
        }

        int get_keystones() { return get_inventory()->fields.m_keystones; }

        void set_keystones(const int value) {
            const auto inventory = get_inventory();
            const auto should_shake = inventory->fields.m_keystones != value;
            inventory->fields.m_keystones = value;
            Moon::uberSerializationWisp::PlayerUberStateInventory::RunSetDirtyCallback(inventory);
            if (should_shake) {
                ui::shake_keystone();
            }
        }

        int get_ore() { return get_inventory()->fields.m_ore; }

        void set_ore(const int value) {
            const auto inventory = get_inventory();
            const auto should_shake = inventory->fields.m_ore != value;
            inventory->fields.m_ore = value;
            Moon::uberSerializationWisp::PlayerUberStateInventory::RunSetDirtyCallback(inventory);
            if (should_shake) {
                ui::shake_ore();
            }
        }

        int get_shard_slots() { return get_shards()->fields.m_shardSlotCount; }

        void set_shard_slots(const int value) {
            const auto shards = get_player_spirit_shards();
            if (shards != nullptr) {
                PlayerSpiritShards::SetGlobalShardSlotCount(shards, value);
            }
        }

        bool has_shard(const app::SpiritShardType__Enum type) {
            const auto shards = get_player_spirit_shards();
            return shards != nullptr && PlayerSpiritShards::HasShard(shards, static_cast<app::SpiritShardType__Enum>(type));
        }

        void set_shard(const app::SpiritShardType__Enum type, const bool value) {
            const auto player_shards = get_player_spirit_shards();
            if (player_shards != nullptr) {
                const auto shard = Moon::uberSerializationWisp::PlayerUberStateShards::SetAbility(
                    get_shards(), static_cast<app::SpiritShardType__Enum>(type), value
                );
                il2cpp::invoke(player_shards->fields.OnInventoryUpdated, "Invoke", shard);
                PlayerSpiritShards::RefreshHasShard(player_shards);
            }
        }

        void set_equipment(const app::EquipmentType__Enum equip, const bool value) {
            const auto player = sein();
            if (player && player->fields.PlayerSpells) {
                SpellInventory::AddNewSpellToInventory(player->fields.PlayerSpells, equip, value);
            } else {
                error("abilities", "Failed to set equipment: couldn't find reference to sein!");
            }
        }

        bool has_ability(const app::AbilityType__Enum ability) {
            const auto player = sein();
            if (player && player->fields.PlayerAbilities) {
                return PlayerAbilities::HasAbility(player->fields.PlayerAbilities, ability);
            }

            error("abilities", "Failed to check ability: couldn't find reference to sein!");
            return false;
        }

        void set_ability(app::AbilityType__Enum ability, const bool value) {
            const auto player = sein();
            if (player && player->fields.PlayerAbilities) {
                const auto equip = ability_to_equip_type(ability);
                if (!value && equip.has_value()) {
                    unbind(equip.value());
                }

                PlayerAbilities::SetAbility(player->fields.PlayerAbilities, ability, value);
                if (equip.has_value()) {
                    set_equipment(equip.value(), value);
                }
            } else {
                error("abilities", "Failed to set ability: couldn't find reference to sein!");
            }
        }

        std::pair<app::AbilityType__Enum, Property<bool>> create_ability_property(app::AbilityType__Enum type) {
            return std::make_pair(type, Property<bool>([type](const bool value) { set_ability(type, value); }, [type]() { return has_ability(type); }));
        }

        std::unordered_map ability_properties{
            create_ability_property(app::AbilityType__Enum::Bash),
            create_ability_property(app::AbilityType__Enum::DoubleJump),
            create_ability_property(app::AbilityType__Enum::ChargeJump),
            create_ability_property(app::AbilityType__Enum::Glide),
            create_ability_property(app::AbilityType__Enum::WaterBreath),
            create_ability_property(app::AbilityType__Enum::Grenade),
            create_ability_property(app::AbilityType__Enum::SpiritLeash),
            create_ability_property(app::AbilityType__Enum::GlowSpell),
            create_ability_property(app::AbilityType__Enum::SpiritSpearSpell),
            create_ability_property(app::AbilityType__Enum::MeditateSpell),
            create_ability_property(app::AbilityType__Enum::Bow),
            create_ability_property(app::AbilityType__Enum::Hammer),
            create_ability_property(app::AbilityType__Enum::Sword),
            create_ability_property(app::AbilityType__Enum::Digging),
            create_ability_property(app::AbilityType__Enum::DashNew),
            create_ability_property(app::AbilityType__Enum::WaterDash),
            create_ability_property(app::AbilityType__Enum::ChakramSpell),
            create_ability_property(app::AbilityType__Enum::GoldenSein),
            create_ability_property(app::AbilityType__Enum::Blaze),
            create_ability_property(app::AbilityType__Enum::FeatherFlap),
            create_ability_property(app::AbilityType__Enum::TurretSpell),
            create_ability_property(app::AbilityType__Enum::DamageUpgradeA),
            create_ability_property(app::AbilityType__Enum::DamageUpgradeB),
            create_ability_property(app::AbilityType__Enum::SpiritMagnet),
            create_ability_property(app::AbilityType__Enum::WallJump),
            create_ability_property(app::AbilityType__Enum::Torch),
            create_ability_property(app::AbilityType__Enum::SpiritFlame),
            create_ability_property(app::AbilityType__Enum::UltraDefense),
            create_ability_property(app::AbilityType__Enum::HealthEfficiency),
            create_ability_property(app::AbilityType__Enum::EnergyEfficiency),
            create_ability_property(app::AbilityType__Enum::BowCharge),
            create_ability_property(app::AbilityType__Enum::WeaponCharge),
        };

        std::pair<app::SpiritShardType__Enum, Property<bool>> create_shard_property(app::SpiritShardType__Enum type) {
            return std::make_pair(type, Property<bool>([type](const bool value) { set_shard(type, value); }, [type]() { return has_shard(type); }));
        }

        std::unordered_map shard_properties{
            create_shard_property(app::SpiritShardType__Enum::GlassCannon),
            create_shard_property(app::SpiritShardType__Enum::TripleJump),
            create_shard_property(app::SpiritShardType__Enum::AntiAir),
            create_shard_property(app::SpiritShardType__Enum::Focus),
            create_shard_property(app::SpiritShardType__Enum::Swap),
            create_shard_property(app::SpiritShardType__Enum::CrescentShot_Deprecated),
            create_shard_property(app::SpiritShardType__Enum::Pierce),
            create_shard_property(app::SpiritShardType__Enum::SpiritMagnet),
            create_shard_property(app::SpiritShardType__Enum::Splinter),
            create_shard_property(app::SpiritShardType__Enum::Blaze_Deprecated),
            create_shard_property(app::SpiritShardType__Enum::Frost_Deprecated),
            create_shard_property(app::SpiritShardType__Enum::LifeLeech_Deprecated),
            create_shard_property(app::SpiritShardType__Enum::Reckless),
            create_shard_property(app::SpiritShardType__Enum::Frenzy),
            create_shard_property(app::SpiritShardType__Enum::Explosive_Deprecated),
            create_shard_property(app::SpiritShardType__Enum::Ricochet),
            create_shard_property(app::SpiritShardType__Enum::Climb_Deprecated),
            create_shard_property(app::SpiritShardType__Enum::Barrier),
            create_shard_property(app::SpiritShardType__Enum::SpiritLightLuck),
            create_shard_property(app::SpiritShardType__Enum::Compass_Deprecated),
            create_shard_property(app::SpiritShardType__Enum::Waterbreathing_Deprecated),
            create_shard_property(app::SpiritShardType__Enum::Vitality),
            create_shard_property(app::SpiritShardType__Enum::VitalityLuck),
            create_shard_property(app::SpiritShardType__Enum::SpiritWellShield_Deprecated),
            create_shard_property(app::SpiritShardType__Enum::EnergyLuck),
            create_shard_property(app::SpiritShardType__Enum::Energy),
            create_shard_property(app::SpiritShardType__Enum::BloodPact),
            create_shard_property(app::SpiritShardType__Enum::LastResort),
            create_shard_property(app::SpiritShardType__Enum::HarvestOfLight_Deprecated),
            create_shard_property(app::SpiritShardType__Enum::Sense),
            create_shard_property(app::SpiritShardType__Enum::UnderwaterEfficiency_Deprecated),
            create_shard_property(app::SpiritShardType__Enum::UltraBash),
            create_shard_property(app::SpiritShardType__Enum::UltraLeash),
            create_shard_property(app::SpiritShardType__Enum::Recycler),
            create_shard_property(app::SpiritShardType__Enum::Counterstrike),
            create_shard_property(app::SpiritShardType__Enum::HollowEnergy),
            create_shard_property(app::SpiritShardType__Enum::Supressor),
            create_shard_property(app::SpiritShardType__Enum::Aggressor),
            create_shard_property(app::SpiritShardType__Enum::Glue),
            create_shard_property(app::SpiritShardType__Enum::CombatLuck),
            create_shard_property(app::SpiritShardType__Enum::SpiritPower),
            create_shard_property(app::SpiritShardType__Enum::Overcharge_Deprecated),
            create_shard_property(app::SpiritShardType__Enum::Untouchable),
            create_shard_property(app::SpiritShardType__Enum::MirrorStrike),
            create_shard_property(app::SpiritShardType__Enum::Stinger),
            create_shard_property(app::SpiritShardType__Enum::Fracture),
            create_shard_property(app::SpiritShardType__Enum::ChainLightning),
        };

        Property<float> health_property(set_health, get_health);
        Property<int> max_health_property(set_max_health, get_max_health);
        Property<float> energy_property(set_energy, get_energy);
        Property<float> max_energy_property(set_max_energy, get_max_energy);
        Property<int> spirit_light_property(set_spirit_light, get_spirit_light);
        Property<int> keystones_property(set_keystones, get_keystones);
        Property<int> ore_property(set_ore, get_ore);
        Property<int> shard_slots_property(set_shard_slots, get_shard_slots);
    } // namespace

    app::SeinCharacter* sein() {
        if (!types::Characters::get_class()->static_fields->HasSein) {
            return nullptr;
        }

        return types::Characters::get_class()->static_fields->m_sein;
    }

    std::optional<app::EquipmentType__Enum> ability_to_equip_type(const app::AbilityType__Enum ability) {
        const auto it = ability_to_equip_map.find(ability);
        return it != ability_to_equip_map.end() ? std::optional<app::EquipmentType__Enum>(it->second) : std::nullopt;
    }

    bool is_valid_equipment(const app::EquipmentType__Enum equipment) {
        return equpment_types.contains(equipment);
    }

    void bind(const app::SpellInventory_Binding__Enum slot, const app::EquipmentType__Enum equip_type) {
        SpellInventory::UpdateBinding_2(sein()->fields.PlayerSpells, slot, equip_type);
    }

    void unbind(const app::EquipmentType__Enum equip_type) { SpellInventory::UnbindItem(sein()->fields.PlayerSpells, equip_type); }

    void unbind_all() {
        for (auto entry: magic_enum::enum_entries<app::EquipmentType__Enum>()) {
            SpellInventory::UnbindItem(sein()->fields.PlayerSpells, entry.first);
        }
    }

    bool can_move() {
        const auto controller = game_controller();
        return !(GameController::get_InputLocked(controller) || GameController::get_LockInput(controller) || GameController::get_IsSuspended(controller)) &&
            GameController::get_SecondaryMapAndInventoryCanBeOpened(controller);
    }

    app::Vector3 get_position() {
        const auto sein = player::sein();
        return sein != nullptr ? SeinCharacter::get_Position(sein) : app::Vector3{0, 0, 0};
    }

    app::Vector2 get_velocity() {
        const auto sein = player::sein();
        if (sein != nullptr) {
            const auto& [x, y, z] = sein->fields.PlatformBehaviour->fields.PlatformMovement->fields._.m_localSpeed;
            return app::Vector2{x, y};
        }

        return app::Vector2{0.f, 0.f};
    }

    void set_position(const float x, const float y, const bool wait_for_load) { set_position(app::Vector3{x, y, 0.f}, wait_for_load); }

    void set_position(const app::Vector3 value, const bool wait_for_load) {
        const auto sein = player::sein();
        if (sein != nullptr) {
            if (wait_for_load) {
                ScenesManager::LoadScenesAtPosition(scenes::get_scenes_manager(), value, false, true, false, true, true);
            }

            SeinCharacter::set_Position(sein, value);
        }
    }

    void set_velocity(const float x, const float y) {
        const auto sein = player::sein();
        if (sein != nullptr) {
            auto& speed = sein->fields.PlatformBehaviour->fields.PlatformMovement->fields._.m_localSpeed;
            speed.x = x;
            speed.y = y;
        }
    }

    void set_velocity(const app::Vector2& value) { set_velocity(value.x, value.y); }

    void snap_camera() {
        const auto cameras = types::UI_Cameras::get_class();
        if (cameras != nullptr && cameras->static_fields->Current != nullptr) {
            // We need to do this on the next frame to allow state to update without causing flickering.
            auto* const camera = cameras->static_fields->Current;
            GameplayCamera::MoveCameraToTargetInstantly(camera, true);
        }
    }

    app::Vector3 get_camera_position() {
        const auto cameras = types::UI_Cameras::get_class();

        if (cameras != nullptr && cameras->static_fields->Current != nullptr) {
            // We need to do this on the next frame to allow state to update without causing flickering.
            auto* const camera = cameras->static_fields->Current;
            auto bounds = GameplayCamera::get_CameraBoundingBox(camera);
            return bounds.m_Center;
        }

        return {0, 0, 0};
    }

    GameArea get_current_area() {
        const auto game_world = types::GameWorld::get_class()->static_fields->Instance;
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
        const auto sein = player::sein();
        if (sein != nullptr) {
            ScopedSetter setter(prevent_default_pickup_handlers, false);
            SeinEnergy::RestoreAllEnergy(sein->fields.Energy);
        }
    }

    const Property<float>& health() { return health_property; }
    const Property<int>& max_health() { return max_health_property; }
    const Property<float>& energy() { return energy_property; }
    const Property<float>& max_energy() { return max_energy_property; }
    const Property<int>& spirit_light() { return spirit_light_property; }
    const Property<int>& keystones() { return keystones_property; }
    const Property<int>& ore() { return ore_property; }
    const Property<int>& shard_slots() { return shard_slots_property; }

    const Property<bool>& shard(const app::SpiritShardType__Enum type) { return shard_properties[type]; }

    bool is_shard_equipped(const app::SpiritShardType__Enum type) {
        const auto shards = get_player_spirit_shards();
        return shards != nullptr && PlayerSpiritShards::IsGlobalShardEquipped_1(shards, type);
    }

    const Property<bool>& ability(const app::AbilityType__Enum type) {
        assert(ability_properties.contains(type));  // Ability type is not in the list of ability properties. Please add it.
        return ability_properties.at(type);
    }

    app::PlayerUberStateAreaMapInformation* get_area_map_information() {
        const auto player_group = types::PlayerUberStateGroup::get_class()->static_fields->Instance;

        if (player_group == nullptr) {
            return nullptr;
        }

        return player_group->fields.PlayerUberState->fields.m_state->fields.AreaMapInfo;
    }
} // namespace core::api::game::player
