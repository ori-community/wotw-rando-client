#include <csharp_bridge.h>
#include <macros.h>

namespace csharp_bridge
{
    signatures::f_void update;
    signatures::f_int ore_count;
    signatures::f_bool_at tree_fulfilled;
    signatures::f_void_at on_tree;
    signatures::f_void on_checkpoint;
    signatures::f_ull get_shard_slot_ptr;
    signatures::f_bool_str check_ini;

    signatures::f_bool inject_log_enabled;
    signatures::f_bool inject_debug_enabled;
    signatures::f_bool tp_to_any_pickup;
    signatures::f_bool invert_swim;

    // Save system
    signatures::f_void_int new_game;
    signatures::f_void_int_int on_load;
    signatures::f_void_int_int on_save;
    signatures::f_bool_at get_ability;
    signatures::f_void_at_bool set_ability;
    signatures::f_bool_at is_tree_activated;

    // Shop system
    signatures::f_ull_sll shop_string_repl;
    signatures::f_void_at opher_buy_weapon;
    signatures::f_void_at opher_buy_upgrade;
    signatures::f_bool_at opher_bought_weapon;
    signatures::f_int_at opher_weapon_cost;
    signatures::f_bool_at opher_bought_upgrade;
    signatures::f_void_st twillen_buy_shard;
    signatures::f_bool_st twillen_bought_shard;
    signatures::f_int_st twillen_shard_cost;
    signatures::f_int_int lupo_upgrade_cost;

    signatures::f_ull_str_bool rva_lookup;
}

INJECT_C_DLLEXPORT void register_delegate(const char* str, uint64_t ptr)
{
    using namespace csharp_bridge;
    using namespace signatures;

    std::string name(str);
    if (name == "update")
        update = reinterpret_cast<f_void>(ptr);
    else if (name == "ore_count")
        ore_count = reinterpret_cast<f_int>(ptr);
    else if (name == "tree_fulfilled")
        tree_fulfilled = reinterpret_cast<f_bool_at>(ptr);
    else if (name == "on_tree")
        on_tree = reinterpret_cast<f_void_at>(ptr);
    else if (name == "on_checkpoint")
        on_checkpoint = reinterpret_cast<f_void>(ptr);
    else if (name == "get_shard_slot_ptr")
        get_shard_slot_ptr = reinterpret_cast<f_ull>(ptr);
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
    else if (name == "get_ability")
        get_ability = reinterpret_cast<f_bool_at>(ptr);
    else if (name == "set_ability")
        set_ability = reinterpret_cast<f_void_at_bool>(ptr);
    else if (name == "is_tree_activated")
        is_tree_activated = reinterpret_cast<f_bool_at>(ptr);
    else if (name == "shop_string_repl")
        shop_string_repl = reinterpret_cast<f_ull_sll>(ptr);
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
}
