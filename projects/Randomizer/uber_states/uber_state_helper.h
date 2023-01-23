#pragma once

#include <Core/enums/shard_type.h>
#include <Core/enums/game_areas.h>
#include <Randomizer/macros.h>

#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/GameStateMachine_State__Enum.h>
#include <Modloader/app/structs/AbilityType__Enum.h>

RANDOMIZER_C_DLLEXPORT void set_debug_controls(bool value);
RANDOMIZER_C_DLLEXPORT bool get_debug_controls();
RANDOMIZER_C_DLLEXPORT void fill_health();
RANDOMIZER_C_DLLEXPORT void fill_energy();
RANDOMIZER_C_DLLEXPORT int32_t get_health();
RANDOMIZER_C_DLLEXPORT void set_health(float value);
RANDOMIZER_C_DLLEXPORT float get_energy();
RANDOMIZER_C_DLLEXPORT void set_energy(float value);
RANDOMIZER_C_DLLEXPORT void set_max_health(int32_t value);
RANDOMIZER_C_DLLEXPORT void set_max_energy(float value);
RANDOMIZER_C_DLLEXPORT int32_t get_max_health();
RANDOMIZER_C_DLLEXPORT float get_max_energy();
RANDOMIZER_C_DLLEXPORT int32_t get_ore();
RANDOMIZER_C_DLLEXPORT void set_ore(int32_t value);
RANDOMIZER_C_DLLEXPORT int32_t get_experience();
RANDOMIZER_C_DLLEXPORT void set_experience(int32_t value);
RANDOMIZER_C_DLLEXPORT int32_t get_keystones();
RANDOMIZER_C_DLLEXPORT void set_keystones(int32_t value);
RANDOMIZER_C_DLLEXPORT int32_t get_shard_slots();
RANDOMIZER_C_DLLEXPORT void set_shard_slots(int32_t value);
RANDOMIZER_C_DLLEXPORT bool has_shard(ShardType type);
RANDOMIZER_C_DLLEXPORT void set_shard(ShardType type, bool value);
RANDOMIZER_C_DLLEXPORT void set_ability_level(app::AbilityType__Enum type, int value);
RANDOMIZER_C_DLLEXPORT app::Vector2 get_position();
RANDOMIZER_C_DLLEXPORT void set_position(app::Vector2 position);
RANDOMIZER_C_DLLEXPORT app::Vector2 get_velocity();
RANDOMIZER_C_DLLEXPORT void set_velocity(app::Vector2 velocity);
RANDOMIZER_C_DLLEXPORT app::GameStateMachine_State__Enum get_game_state();
RANDOMIZER_C_DLLEXPORT GameArea get_player_area();
RANDOMIZER_C_DLLEXPORT bool is_loading_game();
