#pragma once

#include <interop/enum_definitions.h>
#include <macros.h>

#pragma pack(push, 1)
struct UberStateDef
{
    int state_id;
    int group_id;
    const char* state_name;
    const char* group_name;
    csharp_bridge::UberStateType type;
};
#pragma pack(pop)

csharp_bridge::UberStateType resolve_type(app::IUberState* uber_state);

INJECT_C_DLLEXPORT void set_debug_controls(bool value);
INJECT_C_DLLEXPORT bool get_debug_controls();
INJECT_C_DLLEXPORT void fill_health();
INJECT_C_DLLEXPORT void fill_energy();
INJECT_C_DLLEXPORT int32_t get_health();
INJECT_C_DLLEXPORT void set_health(float value);
INJECT_C_DLLEXPORT float get_energy();
INJECT_C_DLLEXPORT void set_energy(float value);
INJECT_C_DLLEXPORT void set_max_health(int32_t value);
INJECT_C_DLLEXPORT void set_max_energy(float value);
INJECT_C_DLLEXPORT int32_t get_max_health();
INJECT_C_DLLEXPORT float get_max_energy();
INJECT_C_DLLEXPORT int32_t get_ore();
INJECT_C_DLLEXPORT void set_ore(int32_t value);
INJECT_C_DLLEXPORT int32_t get_experience();
INJECT_C_DLLEXPORT void set_experience(int32_t value);
INJECT_C_DLLEXPORT int32_t get_keystones();
INJECT_C_DLLEXPORT void set_keystones(int32_t value);
INJECT_C_DLLEXPORT int32_t get_shard_slots();
INJECT_C_DLLEXPORT void set_shard_slots(int32_t value);
INJECT_C_DLLEXPORT bool has_shard(csharp_bridge::ShardType type);
INJECT_C_DLLEXPORT void set_shard(csharp_bridge::ShardType type, bool value);
INJECT_C_DLLEXPORT void set_ability_level(app::AbilityType__Enum type, int value);
INJECT_C_DLLEXPORT app::Vector2 get_position();
INJECT_C_DLLEXPORT void set_position(app::Vector2 position);
INJECT_C_DLLEXPORT app::Vector2 get_velocity();
INJECT_C_DLLEXPORT void set_velocity(app::Vector2 velocity);
INJECT_C_DLLEXPORT app::GameStateMachine_State__Enum get_game_state();
INJECT_C_DLLEXPORT app::GameWorldAreaID__Enum get_player_area();
INJECT_C_DLLEXPORT bool is_loading_game();
INJECT_C_DLLEXPORT UberStateDef* get_uber_states(int& size);
