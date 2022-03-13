#include <csharp_bridge.h>
#include <macros.h>

namespace csharp_bridge
{
    signatures::f_void_float update = nullptr;
    signatures::f_void_at on_tree = nullptr;
    signatures::f_void on_checkpoint = nullptr;
    signatures::f_void on_goal_mode_fail = nullptr;
    signatures::f_bool_str check_ini = nullptr;

    signatures::f_bool inject_log_enabled = nullptr;
    signatures::f_bool inject_debug_enabled = nullptr;
    signatures::f_bool tp_to_any_pickup = nullptr;
    signatures::f_bool invert_swim = nullptr;
    signatures::f_bool is_day_time = nullptr;
    signatures::f_bool does_howl_exist = nullptr;
    signatures::f_bool water_cleansed = nullptr;
    signatures::f_void_gwa on_map_pan = nullptr;
    signatures::f_void_string_dt on_enemy_death = nullptr;
    signatures::f_void_string_dt on_player_death = nullptr;
    signatures::f_void on_race_start = nullptr;
    signatures::f_void on_race_end = nullptr;
    signatures::f_void on_teleporting = nullptr;

    // Save system
    signatures::f_void_int new_game = nullptr;
    signatures::f_void_int_int on_load = nullptr;
    signatures::f_void_int_int on_save = nullptr;
    signatures::f_void_int_int on_copy = nullptr;
    signatures::f_void_int on_delete = nullptr;
    signatures::f_bool_at get_ability = nullptr;
    signatures::f_void_at_bool set_ability = nullptr;
    signatures::f_bool_at is_tree_activated = nullptr;

    // Shop system
    signatures::f_void_at opher_buy_weapon = nullptr;
    signatures::f_void_at opher_buy_upgrade = nullptr;
    signatures::f_bool_at opher_bought_weapon = nullptr;
    signatures::f_bool_at opher_bought_upgrade = nullptr;
    signatures::f_void_st twillen_buy_shard = nullptr;
    signatures::f_bool_st twillen_bought_shard = nullptr;
    signatures::f_void_st_int_int twillen_shard_upgraded = nullptr;
    signatures::f_int_st twillen_shard_cost = nullptr;
    signatures::f_int_int lupo_upgrade_cost = nullptr;
    signatures::f_void update_shop_data = nullptr;

    signatures::f_void_int_int_byte_double_double on_uber_state_applied = nullptr;
    signatures::f_void_a on_action_triggered = nullptr;

    signatures::f_void_int on_found_tp = nullptr;
    signatures::f_void_float_float on_map_tp_active = nullptr;
    signatures::f_void_string on_teleporter_activated = nullptr;
    signatures::f_bool_int_int_int filter_icon_show = nullptr;
    signatures::f_int_int_int_int filter_icon_type = nullptr;
    signatures::f_void_ptr_int_int_int_int_int filter_icon_text = nullptr;
    signatures::f_bool_int filter_enabled = nullptr;
    signatures::f_void_bool on_map_state = nullptr;

    signatures::f_void_float credits_progress = nullptr;
    signatures::f_void shutdown = nullptr;
    signatures::f_void post_initialize = nullptr;

    signatures::f_int get_flag_count = nullptr;
    signatures::f_void_int_ptr_int get_flag = nullptr;
    signatures::f_int_bool get_relic_count = nullptr;
}

INJECT_C_DLLEXPORT void register_delegate(const char* str, uint64_t ptr)
{
    using namespace csharp_bridge;
    using namespace signatures;

    // TODO: Make this into a map instead of using a chain of if else.
    std::string name(str);
    if (name == "update")
        csharp_bridge::update = reinterpret_cast<f_void_float>(ptr);
    else if (name == "on_tree")
        csharp_bridge::on_tree = reinterpret_cast<f_void_at>(ptr);
    else if (name == "on_checkpoint")
        csharp_bridge::on_checkpoint = reinterpret_cast<f_void>(ptr);
    else if (name == "on_goal_mode_fail")
        csharp_bridge::on_goal_mode_fail = reinterpret_cast<f_void>(ptr);
    else if (name == "check_ini")
        csharp_bridge::check_ini = reinterpret_cast<f_bool_str>(ptr);
    else if (name == "inject_log_enabled")
        csharp_bridge::inject_log_enabled = reinterpret_cast<f_bool>(ptr);
    else if (name == "inject_debug_enabled")
        csharp_bridge::inject_debug_enabled = reinterpret_cast<f_bool>(ptr);
    else if (name == "tp_to_any_pickup")
        csharp_bridge::tp_to_any_pickup = reinterpret_cast<f_bool>(ptr);
    else if (name == "invert_swim")
        csharp_bridge::invert_swim = reinterpret_cast<f_bool>(ptr);
    else if (name == "new_game")
        csharp_bridge::new_game = reinterpret_cast<f_void_int>(ptr);
    else if (name == "on_load")
        csharp_bridge::on_load = reinterpret_cast<f_void_int_int>(ptr);
    else if (name == "on_save")
        csharp_bridge::on_save = reinterpret_cast<f_void_int_int>(ptr);
    else if (name == "on_copy")
        csharp_bridge::on_copy = reinterpret_cast<f_void_int_int>(ptr);
    else if (name == "on_delete")
        csharp_bridge::on_delete = reinterpret_cast<f_void_int>(ptr);
    else if (name == "get_ability")
        csharp_bridge::get_ability = reinterpret_cast<f_bool_at>(ptr);
    else if (name == "set_ability")
        csharp_bridge::set_ability = reinterpret_cast<f_void_at_bool>(ptr);
    else if (name == "water_cleansed")
        csharp_bridge::water_cleansed = reinterpret_cast<f_bool>(ptr);
    else if (name == "is_day_time")
        csharp_bridge::is_day_time = reinterpret_cast<f_bool>(ptr);
    else if (name == "does_howl_exist")
        csharp_bridge::does_howl_exist = reinterpret_cast<f_bool>(ptr);
    else if (name == "on_map_pan")
        csharp_bridge::on_map_pan = reinterpret_cast<f_void_gwa>(ptr);
    else if (name == "on_map_state")
        csharp_bridge::on_map_state = reinterpret_cast<f_void_bool>(ptr);
    else if (name == "is_tree_activated")
        csharp_bridge::is_tree_activated = reinterpret_cast<f_bool_at>(ptr);
    else if (name == "opher_buy_weapon")
        csharp_bridge::opher_buy_weapon = reinterpret_cast<f_void_at>(ptr);
    else if (name == "opher_buy_upgrade")
        csharp_bridge::opher_buy_upgrade = reinterpret_cast<f_void_at>(ptr);
    else if (name == "opher_bought_weapon")
        csharp_bridge::opher_bought_weapon = reinterpret_cast<f_bool_at>(ptr);
    else if (name == "opher_bought_upgrade")
        csharp_bridge::opher_bought_upgrade = reinterpret_cast<f_bool_at>(ptr);
    else if (name == "twillen_buy_shard")
        csharp_bridge::twillen_buy_shard = reinterpret_cast<f_void_st>(ptr);
    else if (name == "twillen_bought_shard")
        csharp_bridge::twillen_bought_shard = reinterpret_cast<f_bool_st>(ptr);
    else if (name == "twillen_shard_cost")
        csharp_bridge::twillen_shard_cost = reinterpret_cast<f_int_st>(ptr);
    else if (name == "lupo_upgrade_cost")
        csharp_bridge::lupo_upgrade_cost = reinterpret_cast<f_int_int>(ptr);
    else if (name == "on_uber_state_applied")
        csharp_bridge::on_uber_state_applied = reinterpret_cast<f_void_int_int_byte_double_double>(ptr);
    else if (name == "filter_icon_show")
        csharp_bridge::filter_icon_show = reinterpret_cast<f_bool_int_int_int>(ptr);
    else if (name == "filter_icon_type")
        csharp_bridge::filter_icon_type = reinterpret_cast<f_int_int_int_int>(ptr);
    else if (name == "filter_icon_text")
        csharp_bridge::filter_icon_text = reinterpret_cast<f_void_ptr_int_int_int_int_int>(ptr);
    else if (name == "filter_enabled")
        csharp_bridge::filter_enabled = reinterpret_cast<f_bool_int>(ptr);
    else if (name == "update_shop_data")
        csharp_bridge::update_shop_data = reinterpret_cast<f_void>(ptr);
    else if (name == "on_teleporter_activated")
        csharp_bridge::on_teleporter_activated = reinterpret_cast<f_void_string>(ptr);
    else if (name == "on_map_tp_active")
        csharp_bridge::on_map_tp_active = reinterpret_cast<f_void_float_float>(ptr);
    else if (name == "on_enemy_death")
        csharp_bridge::on_enemy_death = reinterpret_cast<f_void_string_dt>(ptr);
    else if (name == "on_player_death")
        csharp_bridge::on_player_death = reinterpret_cast<f_void_string_dt>(ptr);
    else if (name == "on_race_start")
        csharp_bridge::on_race_start = reinterpret_cast<f_void>(ptr);
    else if (name == "on_race_end")
        csharp_bridge::on_race_end = reinterpret_cast<f_void>(ptr);
    else if (name == "on_teleporting")
        csharp_bridge::on_teleporting = reinterpret_cast<f_void>(ptr);
    else if (name == "on_action_triggered")
        csharp_bridge::on_action_triggered = reinterpret_cast<f_void_a>(ptr);
    else if (name == "twillen_shard_upgraded")
        csharp_bridge::twillen_shard_upgraded = reinterpret_cast<f_void_st_int_int>(ptr);
    else if (name == "credits_progress")
        csharp_bridge::credits_progress = reinterpret_cast<f_void_float>(ptr);
    else if (name == "shutdown")
        csharp_bridge::shutdown = reinterpret_cast<f_void>(ptr);
    else if (name == "post_initialize")
        csharp_bridge::post_initialize = reinterpret_cast<f_void>(ptr);
    else if (name == "get_flag_count")
        csharp_bridge::get_flag_count = reinterpret_cast<f_int>(ptr);
    else if (name == "get_flag")
        csharp_bridge::get_flag = reinterpret_cast<f_void_int_ptr_int>(ptr);
    else if (name == "get_relic_count")
        csharp_bridge::get_relic_count = reinterpret_cast<f_int_bool>(ptr);
    else if (name == "on_found_tp")
        csharp_bridge::on_found_tp = reinterpret_cast<f_void_int>(ptr);
}
