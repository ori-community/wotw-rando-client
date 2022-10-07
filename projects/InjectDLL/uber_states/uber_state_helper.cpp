#include <uber_states/uber_state_helper.h>

#include <constants.h>
#include <game/pickups/pickups.h>
#include <game/player.h>
#include <uber_states/uber_state_interface.h>
#include <uber_states/uber_state_virtual.h>

#include <Common/ext.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/app/methods/CapsuleCrushDetector.h>
#include <Il2CppModLoader/app/methods/SeinHealthController.h>
#include <Il2CppModLoader/app/methods/SeinEnergy.h>
#include <Il2CppModLoader/app/methods/PlayerSpiritShards.h>
#include <Il2CppModLoader/app/methods/Moon/uberSerializationWisp/PlayerUberStateAbilities.h>
#include <Il2CppModLoader/app/methods/Moon/uberSerializationWisp/PlayerUberStateShards.h>
#include <Il2CppModLoader/app/methods/Moon/UberStateCollection.h>
#include <Il2CppModLoader/app/methods/SeinCharacter.h>
#include <Il2CppModLoader/app/methods/SeinLevel.h>
#include <Il2CppModLoader/app/methods/UnityEngine/Transform.h>
#include <Il2CppModLoader/app/types/Scenes.h>
#include <Il2CppModLoader/app/types/GameController.h>
#include <Il2CppModLoader/app/types/GameWorld.h>
#include <Il2CppModLoader/app/types/GameStateMachine.h>
#include <Il2CppModLoader/app/types/DebugValues.h>
#include <Il2CppModLoader/app/types/PlayerUberStateGroup.h>
#include <Il2CppModLoader/app/types/CheatsHandler.h>

#include <array>

using namespace modloader;
using namespace app::classes;
using namespace app::classes::Moon;
using namespace app::classes::Moon::uberSerializationWisp;
using namespace app::classes::UnityEngine;

namespace {
    app::CheatsHandler__StaticFields* get_cheats() {
        return types::CheatsHandler::get_class()->static_fields;
    }

    app::PlayerUberStateStats* get_stats() {
        app::PlayerUberStateGroup* player_group = types::PlayerUberStateGroup::get_class()->static_fields->Instance;
        return player_group->fields.PlayerUberState->fields.m_state->fields.Stats;
    }

    app::PlayerUberStateInventory* get_inventory() {
        app::PlayerUberStateGroup* player_group = types::PlayerUberStateGroup::get_class()->static_fields->Instance;
        return player_group->fields.PlayerUberState->fields.m_state->fields.Inventory;
    }

    app::PlayerUberStateShards* get_shards() {
        app::PlayerUberStateGroup* player_group = types::PlayerUberStateGroup::get_class()->static_fields->Instance;
        return player_group->fields.PlayerUberState->fields.m_state->fields.Shards;
    }

    app::PlayerUberStateAbilities* get_abilities() {
        app::PlayerUberStateGroup* player_group = types::PlayerUberStateGroup::get_class()->static_fields->Instance;
        return player_group->fields.PlayerUberState->fields.m_state->fields.Abilities;
    }
} // namespace

INJECT_C_DLLEXPORT void set_debug_controls(bool value) {
    auto cheats = get_cheats();
    if (cheats->Instance->fields.DebugEnabled != value) {
        cheats->Instance->fields.DebugEnabled = value;
        cheats->DebugWasEnabled = value;
        cheats->DebugAlwaysEnabled = value;
        types::DebugValues::get_class()->static_fields->DebugControlsEnabled = value;
    }
}

INJECT_C_DLLEXPORT bool get_debug_controls() {
    return get_cheats()->Instance->fields.DebugEnabled;
}

INJECT_C_DLLEXPORT void add_health(float inc) {
    auto cp(game::pickups::scoped_not_collecting_pickup());
    auto sein = game::player::sein();
    if (sein != nullptr) {
        auto health = get_health();
        if (inc >= 0.0f)
            SeinHealthController::GainHealth(sein->fields.Mortality->fields.Health, inc, 4, false);
        else if (health - inc < 0.0f)
            CapsuleCrushDetector::KillOri(sein->fields.Mortality->fields.CrushDetector);
        else
            SeinHealthController::LoseHealth(sein->fields.Mortality->fields.Health, inc, 4);
    }
}

INJECT_C_DLLEXPORT void set_health(float val) {
    auto cp(game::pickups::scoped_not_collecting_pickup());
    auto sein = game::player::sein();
    if (sein != nullptr) {
        if (val < 0.0f)
            CapsuleCrushDetector::KillOri(sein->fields.Mortality->fields.CrushDetector);
        else
            SeinHealthController::set_Amount(sein->fields.Mortality->fields.Health, val);
    }
}

INJECT_C_DLLEXPORT void fill_health() {
    auto cp(game::pickups::scoped_not_collecting_pickup());
    auto sein = game::player::sein();
    if (sein != nullptr)
        SeinHealthController::RestoreAllHealth(sein->fields.Mortality->fields.Health, 4);
}

INJECT_C_DLLEXPORT void add_energy(float inc) {
    auto cp(game::pickups::scoped_not_collecting_pickup());
    auto sein = game::player::sein();
    if (sein != nullptr)
        SeinEnergy::Gain(sein->fields.Energy, inc);
}

INJECT_C_DLLEXPORT void set_energy(float val) {
    auto cp(game::pickups::scoped_not_collecting_pickup());
    auto sein = game::player::sein();
    if (sein != nullptr)
        SeinEnergy::set_Current(sein->fields.Energy, val);
}

INJECT_C_DLLEXPORT void fill_energy() {
    auto cp(game::pickups::scoped_not_collecting_pickup());
    auto sein = game::player::sein();
    if (sein != nullptr)
        SeinEnergy::RestoreAllEnergy(sein->fields.Energy);
}

INJECT_C_DLLEXPORT int32_t get_health() {
    return get_stats()->fields.m_health;
}

INJECT_C_DLLEXPORT float get_energy() {
    return get_stats()->fields.m_energy;
}

INJECT_C_DLLEXPORT void set_max_health(int32_t value) {
    auto sein = game::player::sein();
    if (sein == nullptr) {
        warn("set_max_health", "No sein!!! D:");
        return;
    }

    auto cp(game::pickups::scoped_not_collecting_pickup());
    SeinHealthController::set_BaseMaxHealth(sein->fields.Mortality->fields.Health, value);
}

INJECT_C_DLLEXPORT void set_max_energy(float value) {
    auto sein = game::player::sein();
    if (sein == nullptr) {
        warn("set_max_energy", "No sein!!! D:");
        return;
    }

    auto cp(game::pickups::scoped_not_collecting_pickup());
    SeinEnergy::set_BaseMaxEnergy(sein->fields.Energy, value);
}

INJECT_C_DLLEXPORT int32_t get_max_health() {
    auto sein = game::player::sein();
    if (sein != nullptr) {
        return SeinHealthController::get_BaseMaxHealth(sein->fields.Mortality->fields.Health);
    } else
        return 0.f;
}

INJECT_C_DLLEXPORT float get_max_energy() {
    auto sein = game::player::sein();
    if (sein != nullptr)
        return SeinEnergy::get_BaseMaxEnergy(sein->fields.Energy);
    else
        return 0.f;
}

INJECT_C_DLLEXPORT int32_t get_ore() {
    return get_inventory()->fields.m_ore;
}

INJECT_C_DLLEXPORT void set_ore(int32_t value) {
    auto cp(game::pickups::scoped_not_collecting_pickup());
    auto sein = game::player::sein();
    if (sein != nullptr)
        SeinLevel::set_Ore(sein->fields.Level, value);
}

INJECT_C_DLLEXPORT int32_t get_experience() {
    return get_inventory()->fields.m_experience;
}

INJECT_C_DLLEXPORT void set_experience(int32_t value) {
    get_inventory()->fields.m_experience = value;
}

INJECT_C_DLLEXPORT int32_t get_keystones() {
    return get_inventory()->fields.m_keystones;
}

INJECT_C_DLLEXPORT void set_keystones(int32_t value) {
    get_inventory()->fields.m_keystones = value;
}

INJECT_C_DLLEXPORT app::Vector3 get_head_position() {
    auto sein = game::player::sein();
    if (!il2cpp::unity::is_valid(sein))
        return app::Vector3{ 0.f, 0.f, 0.f };

    std::vector<std::string_view> path{
        "ori3D",
        "mirrorHolder",
        "rigHolder",
        "oriRig",
        "Skeleton_GRP",
        "root_JNT",
        "pelvis_JNT",
        "spine_joint01_JNT",
        "spine_joint02_JNT",
        "spine_joint03_JNT",
        "spine_joint04_JNT",
        "headC_joint01_JNT"
    };

    auto head = il2cpp::unity::find_child(il2cpp::unity::get_game_object(sein), path);
    if (!il2cpp::unity::is_valid(head)) {
        auto pos = get_position();
        return app::Vector3{ pos.x, pos.y, 0.f };
    }

    auto transform = il2cpp::unity::get_transform(head);
    return Transform::get_position(transform);
}

INJECT_C_DLLEXPORT app::Vector2 get_position() {
    auto sein = game::player::sein();
    if (sein != nullptr) {
        auto pos = SeinCharacter::get_Position(sein);
        return app::Vector2{ pos.x, pos.y };
    } else
        return app::Vector2{ 0, 0 };
}

INJECT_C_DLLEXPORT void set_position(app::Vector2 position) {
    auto sein = game::player::sein();
    if (sein != nullptr) {
        app::Vector3 pos{ position.x, position.y, 0.f };
        SeinCharacter::set_Position(sein, pos);
    }
}

INJECT_C_DLLEXPORT app::Vector2 get_velocity() {
    auto sein = game::player::sein();
    if (sein != nullptr) {
        auto& speed = sein->fields.PlatformBehaviour->fields.PlatformMovement->fields._.m_localSpeed;
        return app::Vector2{ speed.x, speed.y };
    }

    return app::Vector2{ 0.f, 0.f };
}

INJECT_C_DLLEXPORT void set_velocity(app::Vector2 velocity) {
    auto sein = game::player::sein();
    if (sein != nullptr) {
        auto& speed = sein->fields.PlatformBehaviour->fields.PlatformMovement->fields._.m_localSpeed;
        speed.x = velocity.x;
        speed.y = velocity.y;
        speed.z = 0.f;
    }
}

INJECT_C_DLLEXPORT app::GameStateMachine_State__Enum get_game_state() {
    return types::GameStateMachine::get_class()
            ->static_fields->m_instance->fields._CurrentState_k__BackingField;
}

INJECT_C_DLLEXPORT int32_t get_shard_slots() {
    return get_shards()->fields.m_shardSlotCount;
}

app::PlayerSpiritShards* get_player_spirit_shards() {
    auto sein = game::player::sein();
    if (sein != nullptr)
        return sein->fields.PlayerSpiritShards;
    else
        return nullptr;
}

INJECT_C_DLLEXPORT void set_shard_slots(int32_t value) {
    auto shards = get_player_spirit_shards();
    if (shards != nullptr)
        PlayerSpiritShards::SetGlobalShardSlotCount(shards, value);
}

INJECT_C_DLLEXPORT bool has_shard(csharp_bridge::ShardType type) {
    auto shards = get_player_spirit_shards();
    if (shards != nullptr)
        return PlayerSpiritShards::HasShard(shards, static_cast<app::SpiritShardType__Enum>(type));
    else
        return false;
}

INJECT_C_DLLEXPORT bool is_shard_equipped(csharp_bridge::ShardType type) {
    auto shards = get_player_spirit_shards();
    if (shards != nullptr)
        return PlayerSpiritShards::IsGlobalShardEquipped_1(shards, static_cast<app::SpiritShardType__Enum>(type));
    else
        return false;
}

INJECT_C_DLLEXPORT void refresh_shards() {
    auto shards = get_player_spirit_shards();
    if (shards != nullptr)
        PlayerSpiritShards::RefreshHasShard(shards);
}

INJECT_C_DLLEXPORT void set_shard(csharp_bridge::ShardType type, bool value) {
    auto player_shards = get_player_spirit_shards();
    if (player_shards != nullptr) {
        auto shards = get_shards();
        auto shard = PlayerUberStateShards::SetAbility(shards, static_cast<app::SpiritShardType__Enum>(type), value);
        il2cpp::invoke(player_shards->fields.OnInventoryUpdated, "Invoke", shard);
    }
}

INJECT_C_DLLEXPORT void set_ability_level(app::AbilityType__Enum type, int value) {
    auto* abilities = get_abilities();
    PlayerUberStateAbilities::SetAbilityLevel(abilities, type, value);
}

INJECT_C_DLLEXPORT app::GameWorldAreaID__Enum get_player_area() {
    app::GameWorld* game_world = types::GameWorld::get_class()->static_fields->Instance;
    if (game_world == nullptr || game_world->fields.CurrentArea == nullptr || game_world->fields.CurrentArea->fields.Area == nullptr)
        return app::GameWorldAreaID__Enum::None;
    return game_world->fields.CurrentArea->fields.Area->fields.WorldMapAreaUniqueID;
}

INJECT_C_DLLEXPORT bool is_loading_game() {
    auto controller_klass = types::GameController::get_class();
    auto controller = controller_klass->static_fields->Instance;
    if (controller_klass->static_fields->FreezeFixedUpdate || controller->fields.m_isLoadingGame)
        return true;

    auto scenes_manager = types::Scenes::get_class()->static_fields->Manager;
    auto scene = scenes_manager->fields.m_currentScene;

    if (scene == nullptr) {
        return true;
    }

    auto scene_name = il2cpp::convert_csstring(scene->fields.Scene);
    auto game_state_machine = types::GameStateMachine::get_class()->static_fields->m_instance;
    return game_state_machine->fields._CurrentState_k__BackingField == app::GameStateMachine_State__Enum::Game &&
            (scene_name == "wotwTitleScreen" || scene_name == "kuFlyAway");
}
