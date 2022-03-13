#pragma once

#include <enum_definitions.h>
#include <input/enums/actions.h>

#include <string>

namespace csharp_bridge
{
    namespace signatures
    {
        using f_void = void(*)();
        using f_void_a = void(*)(input::Action);
        using f_void_at = void(*)(app::AbilityType__Enum);
        using f_void_gwa = void(*)(app::GameWorldAreaID__Enum);
        using f_void_at_bool = void(*)(app::AbilityType__Enum, bool);
        using f_void_int = void(*)(int);
        using f_void_int_int = void(*)(int, int);
        using f_void_float = void(*)(float);
        using f_void_float_float = void(*)(float, float);
        using f_void_ptr_int_int_int_int_int = void(*)(void*, int, int, int, int, int);
        using f_void_int_int_byte_double_double = void(*)(int, int, uint8_t, double, double);
        using f_void_int_ptr_int = void(*)(int, void*, int);
        using f_void_string = void(*)(const char*);
        using f_void_string_dt = void(*)(const char*, app::DamageType__Enum);
        using f_void_st = void(*)(ShardType);
        using f_void_st_int_int = void(*)(ShardType, int, int);
        using f_bool = bool(*)();
        using f_bool_at = bool(*)(app::AbilityType__Enum);
        using f_bool_int = bool(*)(int);
        using f_bool_int_int_int = bool(*)(int, int, int);
        using f_bool_st = bool (*)(ShardType);
        using f_bool_str = bool(*)(const char*);
        using f_int = int(*)();
        using f_int_at = int(*)(app::AbilityType__Enum);
        using f_int_int = int(*)(int);
        using f_int_int_int = int(*)(int, int);
        using f_int_int_int_int = int(*)(int, int, int);
        using f_int_bool = int(*)(bool);
        using f_int_st = int(*)(ShardType);
        using f_ull_str = uint64_t(*)(const char*);
        using f_ull_str_bool = uint64_t(*)(const char*, bool);
    }

    extern signatures::f_void_float update;
    extern signatures::f_void_at on_tree;
    extern signatures::f_void on_checkpoint;
    extern signatures::f_void on_goal_mode_fail;
    extern signatures::f_bool_str check_ini;
    extern signatures::f_bool inject_log_enabled;
    extern signatures::f_bool inject_debug_enabled;
    extern signatures::f_bool tp_to_any_pickup;
    extern signatures::f_bool invert_swim;
    extern signatures::f_bool water_cleansed;
    extern signatures::f_bool is_day_time;
    extern signatures::f_bool does_howl_exist;
    extern signatures::f_void_gwa on_map_pan;
    extern signatures::f_void_string_dt on_enemy_death;
    extern signatures::f_void_string_dt on_player_death;
    extern signatures::f_void on_race_start;
    extern signatures::f_void on_race_end;
    extern signatures::f_void on_teleporting;

    // Save system
    extern signatures::f_void_int new_game;
    extern signatures::f_void_int_int on_load;
    extern signatures::f_void_int_int on_save;
    extern signatures::f_void_int_int on_copy;
    extern signatures::f_void_int on_delete;
    extern signatures::f_bool_at get_ability;
    extern signatures::f_void_at_bool set_ability;
    extern signatures::f_bool_at is_tree_activated;
    
    // Shop system
    extern signatures::f_void_at opher_buy_weapon;
    extern signatures::f_void_at opher_buy_upgrade;
    extern signatures::f_bool_at opher_bought_weapon;
    extern signatures::f_bool_at opher_bought_upgrade;
    extern signatures::f_void_st twillen_buy_shard;
    extern signatures::f_bool_st twillen_bought_shard;
    extern signatures::f_void_st_int_int twillen_shard_upgraded;
    extern signatures::f_int_st twillen_shard_cost;
    extern signatures::f_int_int lupo_upgrade_cost;
    extern signatures::f_void update_shop_data;

    extern signatures::f_void_int_int_byte_double_double on_uber_state_applied;
    extern signatures::f_void_a on_action_triggered;

    extern signatures::f_void_int on_found_tp;
    extern signatures::f_void_string on_teleporter_activated;
    extern signatures::f_void_float_float on_map_tp_active;
    extern signatures::f_bool_int_int_int filter_icon_show;
    extern signatures::f_int_int_int_int filter_icon_type;
    extern signatures::f_void_ptr_int_int_int_int_int filter_icon_text;
    extern signatures::f_bool_int filter_enabled;

    extern signatures::f_void_float credits_progress;
    extern signatures::f_void shutdown;
    extern signatures::f_void post_initialize;

    extern signatures::f_int get_flag_count;
    extern signatures::f_void_int_ptr_int get_flag;
    extern signatures::f_int_bool get_relic_count;
}
