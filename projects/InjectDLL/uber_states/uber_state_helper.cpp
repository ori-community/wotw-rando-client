#include <uber_states/uber_state_helper.h>

#include <constants.h>
#include <dll_main.h>
#include <pickups/pickups.h>
#include <pickups/ore.h>
#include <uber_states/uber_state_manager.h>
#include <uber_states/uber_state_virtual.h>

#include <Common/ext.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <array>

using namespace modloader;

namespace
{
    IL2CPP_BINDING(, CapsuleCrushDetector, void, KillOri, (app::CapsuleCrushDetector* this_ptr));
    IL2CPP_BINDING(, SeinHealthController, void, RestoreAllHealth, (app::SeinHealthController* this_ptr, float visualSpeed));
    IL2CPP_BINDING(, SeinHealthController, void, LoseHealth, (app::SeinHealthController* this_ptr, float amount, float visualSpeed));
    IL2CPP_BINDING(, SeinHealthController, void, GainHealth, (app::SeinHealthController* this_ptr, float amount, float visualSpeed, bool incrementStatistic));
    IL2CPP_BINDING(, SeinHealthController, void, set_Amount, (app::SeinHealthController* this_ptr, float value));
    IL2CPP_BINDING(, SeinHealthController, void, set_BaseMaxHealth, (app::SeinHealthController* this_ptr, int value));
    IL2CPP_BINDING(, SeinHealthController, int,  get_BaseMaxHealth, (app::SeinHealthController* this_ptr));
    IL2CPP_BINDING(, SeinEnergy, void, Gain, (app::SeinEnergy* this_ptr, float amount));
    IL2CPP_BINDING(, SeinEnergy, void, RestoreAllEnergy, (app::SeinEnergy* this_ptr));
    IL2CPP_BINDING(, SeinEnergy, void, set_Current, (app::SeinEnergy* this_ptr, float value));
    IL2CPP_BINDING(, SeinEnergy, float, get_BaseMaxEnergy, (app::SeinEnergy* this_ptr));
    IL2CPP_BINDING(, SeinEnergy, void,  set_BaseMaxEnergy, (app::SeinEnergy* this_ptr, float amount));
    IL2CPP_BINDING(, PlayerSpiritShards, void, RefreshHasShard, (app::PlayerSpiritShards* thisPtr));
    IL2CPP_BINDING(, PlayerSpiritShards, void, SetGlobalShardSlotCount, (app::PlayerSpiritShards* thisPtr, int32_t count));
    IL2CPP_BINDING(, PlayerSpiritShards, bool, HasShard, (app::PlayerSpiritShards* thisPtr, csharp_bridge::ShardType type));
    IL2CPP_BINDING_OVERLOAD(, PlayerSpiritShards, bool, IsGlobalShardEquipped, (app::PlayerSpiritShards* this_ptr, app::SpiritShardType__Enum value),
        (SpiritShardType));
    IL2CPP_BINDING_OVERLOAD(, PlayerSpiritShards, app::PlayerUberStateShards_Shard*, AddNewShardToInventory,
        (app::PlayerSpiritShards* thisPtr, csharp_bridge::ShardType type), (SpiritShardType));
    IL2CPP_BINDING(Moon.uberSerializationWisp, PlayerUberStateAbilities, void, SetAbilityLevel, (app::PlayerUberStateAbilities* this_ptr, app::AbilityType__Enum type, int level));
    STATIC_IL2CPP_BINDING(Moon, UberStateCollection, app::IUberState*, GetState, (app::UberID* groupID, app::UberID* stateID));
    STATIC_IL2CPP_BINDING(Moon, UberStateCollection, Il2CppObject*, get_Descriptors, ());
    IL2CPP_BINDING(, SeinCharacter, app::Vector3, get_Position, (app::SeinCharacter* this_ptr));
    IL2CPP_BINDING(, SeinCharacter, void, set_Position, (app::SeinCharacter* this_ptr, app::Vector3 value));

    app::CheatsHandler__StaticFields* get_cheats()
    {
        return il2cpp::get_class<app::CheatsHandler__Class>("", "CheatsHandler")->static_fields;
    }

    app::PlayerUberStateStats* get_stats()
    {
        app::PlayerUberStateGroup* player_group = il2cpp::get_class<app::PlayerUberStateGroup__Class>("", "PlayerUberStateGroup")->static_fields->Instance;
        return player_group->fields.PlayerUberState->fields.m_state->fields.Stats;
    }

    app::PlayerUberStateInventory* get_inventory()
    {
        app::PlayerUberStateGroup* player_group = il2cpp::get_class<app::PlayerUberStateGroup__Class>("", "PlayerUberStateGroup")->static_fields->Instance;
        return player_group->fields.PlayerUberState->fields.m_state->fields.Inventory;
    }

    app::PlayerUberStateShards* get_shards()
    {
        app::PlayerUberStateGroup* player_group = il2cpp::get_class<app::PlayerUberStateGroup__Class>("", "PlayerUberStateGroup")->static_fields->Instance;
        return player_group->fields.PlayerUberState->fields.m_state->fields.Shards;
    }

    app::PlayerUberStateAbilities* get_abilities()
    {
        app::PlayerUberStateGroup* player_group = il2cpp::get_class<app::PlayerUberStateGroup__Class>("", "PlayerUberStateGroup")->static_fields->Instance;
        return player_group->fields.PlayerUberState->fields.m_state->fields.Abilities;
    }

    struct UberStateTypeResolver
    {
        std::string namezpace;
        std::string name;
        csharp_bridge::UberStateType type;
    };

    std::array<UberStateTypeResolver, 11> resolvers = {
        UberStateTypeResolver{ "Moon", "SerializedBooleanUberState", csharp_bridge::UberStateType::SerializedBooleanUberState },
        UberStateTypeResolver{ "Moon", "SerializedIntUberState", csharp_bridge::UberStateType::SerializedIntUberState },
        UberStateTypeResolver{ "Moon", "SerializedFloatUberState", csharp_bridge::UberStateType::SerializedFloatUberState },
        UberStateTypeResolver{ "Moon", "SerializedByteUberState", csharp_bridge::UberStateType::SerializedByteUberState },

        UberStateTypeResolver{ "Moon.uberSerializationWisp", "SavePedestalUberState", csharp_bridge::UberStateType::SavePedestalUberState },
        UberStateTypeResolver{ "Moon.uberSerializationWisp", "PlayerUberStateDescriptor", csharp_bridge::UberStateType::PlayerUberStateDescriptor },

        UberStateTypeResolver{ "Moon", "BooleanUberState", csharp_bridge::UberStateType::BooleanUberState },
        UberStateTypeResolver{ "Moon", "ByteUberState", csharp_bridge::UberStateType::ByteUberState },
        UberStateTypeResolver{ "Moon", "IntUberState", csharp_bridge::UberStateType::IntUberState },
        UberStateTypeResolver{ "Moon", "CountUberState", csharp_bridge::UberStateType::CountUberState },
        UberStateTypeResolver{ "Moon", "ConditionUberState", csharp_bridge::UberStateType::ConditionUberState },
    };
}

INJECT_C_DLLEXPORT void set_debug_controls(bool value)
{
  auto cheats = get_cheats();
  if (cheats->Instance->fields.DebugEnabled != value)
  {
      cheats->Instance->fields.DebugEnabled = value;
      cheats->DebugWasEnabled = value;
      cheats->DebugAlwaysEnabled = value;
      il2cpp::get_class<app::DebugValues__Class>("Game", "DebugValues")->static_fields->DebugControlsEnabled = value;
      
  }
}

INJECT_C_DLLEXPORT bool get_debug_controls()
{
    return get_cheats()->Instance->fields.DebugEnabled;
}

INJECT_C_DLLEXPORT void add_health(float inc) {
    ScopedSetter cp(collecting_pickup, false);
    auto sein = get_sein();
    if (sein != nullptr)
    {
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
    ScopedSetter cp(collecting_pickup, false);
    auto sein = get_sein();
    if (sein != nullptr)
    {
        if (val < 0.0f)
            CapsuleCrushDetector::KillOri(sein->fields.Mortality->fields.CrushDetector);
        else
            SeinHealthController::set_Amount(sein->fields.Mortality->fields.Health, val);
    }
}

INJECT_C_DLLEXPORT void fill_health() {
    ScopedSetter cp(collecting_pickup, false);
    auto sein = get_sein();
    if (sein != nullptr)
        SeinHealthController::RestoreAllHealth(sein->fields.Mortality->fields.Health, 4);
}

INJECT_C_DLLEXPORT void add_energy(float inc) {
    ScopedSetter cp(collecting_pickup, false);
    auto sein = get_sein();
    if (sein != nullptr)
        SeinEnergy::Gain(sein->fields.Energy, inc);
}

INJECT_C_DLLEXPORT void set_energy(float val) {
    ScopedSetter cp(collecting_pickup, false);
    auto sein = get_sein();
    if (sein != nullptr)
        SeinEnergy::set_Current(sein->fields.Energy, val);
}


INJECT_C_DLLEXPORT void fill_energy() {
    ScopedSetter cp(collecting_pickup, false);
    auto sein = get_sein();
    if (sein != nullptr)
        SeinEnergy::RestoreAllEnergy(sein->fields.Energy);
}

INJECT_C_DLLEXPORT int32_t get_health()
{
    return get_stats()->fields.m_health;
}

INJECT_C_DLLEXPORT float get_energy()
{
    return get_stats()->fields.m_energy;
}

INJECT_C_DLLEXPORT void set_max_health(int32_t value) {
  auto sein = get_sein();
  if (sein == nullptr) {
    warn("set_max_health", "No sein!!! D:");
    return;
  }

  ScopedSetter cp(collecting_pickup, false);
  SeinHealthController::set_BaseMaxHealth(sein->fields.Mortality->fields.Health, value);
}

INJECT_C_DLLEXPORT void set_max_energy(float value) {
    auto sein = get_sein();
    if (sein == nullptr) {
      warn("set_max_energy", "No sein!!! D:");
      return;
    }

    ScopedSetter cp(collecting_pickup, false);
    SeinEnergy::set_BaseMaxEnergy(sein->fields.Energy, value);
}

INJECT_C_DLLEXPORT int32_t get_max_health() {
  auto sein = get_sein();
  if (sein != nullptr) {
    return SeinHealthController::get_BaseMaxHealth(sein->fields.Mortality->fields.Health);
  } else
    return 0.f;
}

INJECT_C_DLLEXPORT float get_max_energy()
{
    auto sein = get_sein();
    if (sein != nullptr)
        return SeinEnergy::get_BaseMaxEnergy(sein->fields.Energy);
    else
        return 0.f;
}

INJECT_C_DLLEXPORT int32_t get_ore()
{
    return get_inventory()->fields.m_ore;
}

INJECT_C_DLLEXPORT void set_ore(int32_t value)
{
    auto sein = get_sein();
    if (sein != nullptr)
    {
        SeinLevel::set_Ore(sein->fields.Level, value);
        get_inventory()->fields.m_ore = value;
    }
}

INJECT_C_DLLEXPORT int32_t get_experience()
{
    return get_inventory()->fields.m_experience;
}

INJECT_C_DLLEXPORT void set_experience(int32_t value)
{
    ScopedSetter cp(collecting_pickup, false);
    get_inventory()->fields.m_experience = value;
}

INJECT_C_DLLEXPORT int32_t get_keystones()
{
    return get_inventory()->fields.m_keystones;
}

INJECT_C_DLLEXPORT void set_keystones(int32_t value)
{
    get_inventory()->fields.m_keystones = value;
}

INJECT_C_DLLEXPORT app::Vector2 get_position()
{
    auto sein = get_sein();
    if (sein != nullptr)
    {
        auto pos = SeinCharacter::get_Position(sein);
        return app::Vector2{ pos.x, pos.y };
    }
    else
        return app::Vector2{ 0, 0 };
}

INJECT_C_DLLEXPORT void set_position(app::Vector2 position)
{
    auto sein = get_sein();
    if (sein != nullptr)
    {
        app::Vector3 pos{ position.x, position.y, 0.f };
        SeinCharacter::set_Position(sein, pos);
    }
}

INJECT_C_DLLEXPORT app::Vector2 get_velocity()
{
    auto sein = get_sein();
    if (sein != nullptr)
    {
        auto& speed = sein->fields.PlatformBehaviour->fields.PlatformMovement->fields._.m_localSpeed;
        return app::Vector2{ speed.x, speed.y };
    }

    return app::Vector2{ 0.f, 0.f };
}

INJECT_C_DLLEXPORT void set_velocity(app::Vector2 velocity)
{
    auto sein = get_sein();
    if (sein != nullptr)
    {
        auto& speed = sein->fields.PlatformBehaviour->fields.PlatformMovement->fields._.m_localSpeed;
        speed.x = velocity.x;
        speed.y = velocity.y;
        speed.z = 0.f;
    }
}

INJECT_C_DLLEXPORT app::GameStateMachine_State__Enum get_game_state()
{
    return il2cpp::get_class<app::GameStateMachine__Class>("", "GameStateMachine")
        ->static_fields->m_instance->fields._CurrentState_k__BackingField;
}

INJECT_C_DLLEXPORT int32_t get_shard_slots() {
  return get_shards()->fields.m_shardSlotCount;
}

app::PlayerSpiritShards* get_player_spirit_shards() {
    auto sein = get_sein();
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
        return PlayerSpiritShards::HasShard(shards, type);
    else
        return false;
}

INJECT_C_DLLEXPORT bool is_shard_equipped(csharp_bridge::ShardType type)
{
    auto shards = get_player_spirit_shards();
    if (shards != nullptr)
        return PlayerSpiritShards::IsGlobalShardEquipped(shards, static_cast<app::SpiritShardType__Enum>(type));
    else
        return false;
}

INJECT_C_DLLEXPORT void refresh_shards() {
    auto shards = get_player_spirit_shards();
    if (shards != nullptr)
        PlayerSpiritShards::RefreshHasShard(shards);
}

IL2CPP_BINDING(Moon.uberSerializationWisp, PlayerUberStateShards, app::PlayerUberStateShards_Shard*, SetAbility,
    (app::PlayerUberStateShards* this_ptr, uint8_t ability, bool value));

INJECT_C_DLLEXPORT void set_shard(csharp_bridge::ShardType type, bool value) {
    auto player_shards = get_player_spirit_shards();
    if (player_shards != nullptr)
    {
        auto shards = get_shards();
        auto shard = PlayerUberStateShards::SetAbility(shards, static_cast<uint8_t>(type), value);
        il2cpp::invoke(player_shards->fields.OnInventoryUpdated, "Invoke", shard);
    }
}

INJECT_C_DLLEXPORT void set_ability_level(app::AbilityType__Enum type, int value)
{
    auto* abilities = get_abilities();
    PlayerUberStateAbilities::SetAbilityLevel(abilities, type, value);
}

INJECT_C_DLLEXPORT app::GameWorldAreaID__Enum get_player_area()
{
    app::GameWorld* game_world = il2cpp::get_class<app::GameWorld__Class>("", "GameWorld")->static_fields->Instance;
    if (game_world == nullptr || game_world->fields.CurrentArea == nullptr || game_world->fields.CurrentArea->fields.Area == nullptr)
        return app::GameWorldAreaID__Enum_None;
    return game_world->fields.CurrentArea->fields.Area->fields.WorldMapAreaUniqueID;
}

INJECT_C_DLLEXPORT bool is_loading_game()
{
    auto controller_klass = il2cpp::get_class<app::GameController__Class>("", "GameController");
    auto controller = controller_klass->static_fields->Instance;
    if (controller_klass->static_fields->FreezeFixedUpdate || controller->fields.m_isLoadingGame)
        return true;

    auto scenes_manager = il2cpp::get_class<app::Scenes__Class>("Core", "Scenes")->static_fields->Manager;
    auto scene = scenes_manager->fields.m_currentScene;
    auto scene_name = il2cpp::convert_csstring(scene->fields.Scene);
    auto game_state_machine = il2cpp::get_class<app::GameStateMachine__Class>("", "GameStateMachine")->static_fields->m_instance;
    return game_state_machine->fields._CurrentState_k__BackingField == app::GameStateMachine_State__Enum_Game &&
        (scene_name == "wotwTitleScreen" || scene_name == "kuFlyAway");
}

csharp_bridge::UberStateType resolve_type(app::IUberState* uber_state)
{
    for (auto const& resolver : resolvers)
        if (il2cpp::is_assignable(uber_state, resolver.namezpace.c_str(), resolver.name.c_str()))
            return resolver.type;

    return static_cast<csharp_bridge::UberStateType>(-1);
}

// Define these here so they are not destroyed when we return the "array".
std::vector<std::string> temp_string_vector;
std::vector<UberStateDef> temp_vector;
INJECT_C_DLLEXPORT UberStateDef* get_uber_states(int& size)
{
    temp_string_vector.clear();
    temp_vector.clear();

    auto collection = il2cpp::get_class<app::UberStateCollection__Class>("Moon", "UberStateCollection")
        ->static_fields->m_instance->fields.m_descriptors->fields;

    temp_vector.resize(collection._size);
    temp_string_vector.resize(collection._size * 2);

    for (auto i = 0; i < collection._size; ++i)
    {
        UberStateDef def;
        auto uber_state = reinterpret_cast<app::IUberState*>(collection._items->vector[i]);
        def.state_id = uber_states::get_uber_state_id(uber_state)->fields.m_id;
        def.group_id = uber_states::get_uber_state_group_id(uber_state)->fields.m_id;
        temp_string_vector[i * 2] = uber_states::get_uber_state_name(uber_state);
        def.state_name = temp_string_vector[i * 2].c_str();
        temp_string_vector[i * 2 + 1] = uber_states::get_uber_state_group_name(uber_state);
        def.group_name = temp_string_vector[i * 2 + 1].c_str();
        def.type = resolve_type(uber_state);
        temp_vector[i] = def;
    }

    size = temp_vector.size();
    return temp_vector.data();
}

INJECT_C_DLLEXPORT csharp_bridge::UberStateType get_uber_state_type(int group, int state)
{
    // TODO: Make this better
    if (uber_states::is_virtual_state(group, state))
        return csharp_bridge::UberStateType::SerializedFloatUberState;

    if (group == 12)
        return csharp_bridge::UberStateType::SerializedBooleanUberState;

    auto group_id = uber_states::create_uber_id(group);
    auto state_id = uber_states::create_uber_id(state);
    auto uber_state = uber_states::get_uber_state(group_id, state_id);
    return resolve_type(uber_state);
}

INJECT_C_DLLEXPORT bool get_uber_state_exists(int group, int state)
{
    if (uber_states::is_virtual_state(group, state))
        return true;

    auto group_id = uber_states::create_uber_id(group);
    auto state_id = uber_states::create_uber_id((group == 12) ? state / 31 : state);
    return uber_states::get_uber_state(group_id, state_id) != nullptr;
}
