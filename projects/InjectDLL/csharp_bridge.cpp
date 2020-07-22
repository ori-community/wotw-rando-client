#include <csharp_bridge.h>
#include <macros.h>

namespace csharp_bridge
{
    signatures::f_void update;
    signatures::f_void_at on_tree;
    signatures::f_void on_checkpoint;
    signatures::f_void on_goal_mode_fail;
    signatures::f_bool_str check_ini;

    signatures::f_bool inject_log_enabled;
    signatures::f_bool inject_debug_enabled;
    signatures::f_bool tp_to_any_pickup;
    signatures::f_bool invert_swim;
    signatures::f_bool is_day_time;
    signatures::f_bool does_howl_exist;
    signatures::f_bool water_cleansed;
    signatures::f_void_gwa on_map_pan;

    // Save system
    signatures::f_void_int new_game;
    signatures::f_void_int_int on_load;
    signatures::f_void_int_int on_save;
    signatures::f_void_int_int on_copy;
    signatures::f_void_int on_delete;
    signatures::f_bool_at get_ability;
    signatures::f_void_at_bool set_ability;
    signatures::f_bool_at is_tree_activated;

    // Shop system
    signatures::f_void_at opher_buy_weapon;
    signatures::f_void_at opher_buy_upgrade;
    signatures::f_bool_at opher_bought_weapon;
    signatures::f_int_at opher_weapon_cost;
    signatures::f_bool_at opher_bought_upgrade;
    signatures::f_void_st twillen_buy_shard;
    signatures::f_bool_st twillen_bought_shard;
    signatures::f_int_st twillen_shard_cost;
    signatures::f_int_int lupo_upgrade_cost;
    signatures::f_void update_shop_data;

    signatures::f_ull_str_bool rva_lookup;
    signatures::f_void_int_int_byte_float_float on_uber_state_applied;

    signatures::f_bool_int_int filter_icon_show;
    signatures::f_int_int_int filter_icon_type;
    signatures::f_void_ptr_int_int_int filter_icon_text;
    signatures::f_bool_int filter_enabled;
}

INJECT_C_DLLEXPORT void register_delegate(const char* str, uint64_t ptr)
{
    using namespace csharp_bridge;
    using namespace signatures;

    std::string name(str);
    if (name == "update")
        update = reinterpret_cast<f_void>(ptr);
    else if (name == "on_tree")
        on_tree = reinterpret_cast<f_void_at>(ptr);
    else if (name == "on_checkpoint")
        on_checkpoint = reinterpret_cast<f_void>(ptr);
    else if (name == "on_goal_mode_fail")
        on_goal_mode_fail = reinterpret_cast<f_void>(ptr);
    else if (name == "check_ini")
        check_ini = reinterpret_cast<f_bool_str>(ptr);
    else if (name == "inject_log_enabled")
        inject_log_enabled = reinterpret_cast<f_bool>(ptr);
    else if (name == "inject_debug_enabled")
        inject_debug_enabled = reinterpret_cast<f_bool>(ptr);
    else if (name == "tp_to_any_pickup")
        tp_to_any_pickup = reinterpret_cast<f_bool>(ptr);
    else if (name == "invert_swim")
        invert_swim = reinterpret_cast<f_bool>(ptr);
    else if (name == "new_game")
        new_game = reinterpret_cast<f_void_int>(ptr);
    else if (name == "on_load")
        on_load = reinterpret_cast<f_void_int_int>(ptr);
    else if (name == "on_save")
        on_save = reinterpret_cast<f_void_int_int>(ptr);
    else if (name == "on_copy")
        on_copy = reinterpret_cast<f_void_int_int>(ptr);
    else if (name == "on_delete")
        on_delete = reinterpret_cast<f_void_int>(ptr);
    else if (name == "get_ability")
        get_ability = reinterpret_cast<f_bool_at>(ptr);
    else if (name == "set_ability")
        set_ability = reinterpret_cast<f_void_at_bool>(ptr);
    else if (name == "water_cleansed")
        water_cleansed = reinterpret_cast<f_bool>(ptr);
    else if (name == "is_day_time")
        is_day_time = reinterpret_cast<f_bool>(ptr);
    else if (name == "does_howl_exist")
        does_howl_exist = reinterpret_cast<f_bool>(ptr);
    else if (name == "on_map_pan")
        on_map_pan = reinterpret_cast<f_void_gwa>(ptr);
    else if (name == "is_tree_activated")
        is_tree_activated = reinterpret_cast<f_bool_at>(ptr);
    else if (name == "opher_buy_weapon")
        opher_buy_weapon = reinterpret_cast<f_void_at>(ptr);
    else if (name == "opher_buy_upgrade")
        opher_buy_upgrade = reinterpret_cast<f_void_at>(ptr);
    else if (name == "opher_bought_weapon")
        opher_bought_weapon = reinterpret_cast<f_bool_at>(ptr);
    else if (name == "opher_weapon_cost")
        opher_weapon_cost = reinterpret_cast<f_int_at>(ptr);
    else if (name == "opher_bought_upgrade")
        opher_bought_upgrade = reinterpret_cast<f_bool_at>(ptr);
    else if (name == "twillen_buy_shard")
        twillen_buy_shard = reinterpret_cast<f_void_st>(ptr);
    else if (name == "twillen_bought_shard")
        twillen_bought_shard = reinterpret_cast<f_bool_st>(ptr);
    else if (name == "twillen_shard_cost")
        twillen_shard_cost = reinterpret_cast<f_int_st>(ptr);
    else if (name == "lupo_upgrade_cost")
        lupo_upgrade_cost = reinterpret_cast<f_int_int>(ptr);
    else if (name == "rva_lookup")
        rva_lookup = reinterpret_cast<f_ull_str_bool>(ptr);
    else if (name == "on_uber_state_applied")
        on_uber_state_applied = reinterpret_cast<f_void_int_int_byte_float_float>(ptr);
    else if (name == "filter_icon_show")
        filter_icon_show = reinterpret_cast<f_bool_int_int>(ptr);
    else if (name == "filter_icon_type")
        filter_icon_type = reinterpret_cast<f_int_int_int>(ptr);
    else if (name == "filter_icon_text")
        filter_icon_text = reinterpret_cast<f_void_ptr_int_int_int>(ptr);
    else if (name == "filter_enabled")
      filter_enabled = reinterpret_cast<f_bool_int>(ptr);
    else if(name == "update_shop_data")
      update_shop_data = reinterpret_cast<f_void>(ptr);
}
