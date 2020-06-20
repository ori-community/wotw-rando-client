#pragma once

#include <RandomizerBridge/enum_definitions.h>
#include <RandomizerBridge/macros.h>

#include <string>

namespace csharp_bridge
{
    BRIDGE_DLLEXPORT bool initialize();
    BRIDGE_DLLEXPORT void update();
    BRIDGE_DLLEXPORT int ore_count();
    BRIDGE_DLLEXPORT bool tree_fulfilled(AbilityType ability);
    BRIDGE_DLLEXPORT void on_tree(AbilityType ability);
    BRIDGE_DLLEXPORT void on_checkpoint();
    BRIDGE_DLLEXPORT unsigned long long get_shard_slot_ptr();
    BRIDGE_DLLEXPORT bool check_ini(std::string const& str);

    BRIDGE_DLLEXPORT bool inject_log_enabled();
    BRIDGE_DLLEXPORT bool inject_debug_enabled();
    BRIDGE_DLLEXPORT bool tp_to_any_pickup();
    BRIDGE_DLLEXPORT bool invert_swim();

    // Save system
    BRIDGE_DLLEXPORT void new_game(int slot);
    BRIDGE_DLLEXPORT void on_load(int slot, int backupSlot);
    BRIDGE_DLLEXPORT void on_save(int slot, int backupSlot);
    BRIDGE_DLLEXPORT bool get_ability(AbilityType ability);
    BRIDGE_DLLEXPORT void set_ability(AbilityType ability, bool value);
    BRIDGE_DLLEXPORT bool do_invert_tree(AbilityType ability);
    BRIDGE_DLLEXPORT bool is_tree_activated(AbilityType ability);

    // Shop system
    BRIDGE_DLLEXPORT unsigned long long shop_string_repl(int64_t str);
    BRIDGE_DLLEXPORT void opher_buy_weapon(AbilityType slot);
    BRIDGE_DLLEXPORT void opher_buy_upgrade(AbilityType slot);
    BRIDGE_DLLEXPORT void twillen_buy_shard(ShardType slot);
    BRIDGE_DLLEXPORT bool opher_bought_weapon(AbilityType granted);
    BRIDGE_DLLEXPORT bool twillen_bought_shard(ShardType shard);
    BRIDGE_DLLEXPORT int twillen_shard_cost(ShardType shard);
    BRIDGE_DLLEXPORT int lupo_upgrade_cost(int slot);
    BRIDGE_DLLEXPORT int opher_weapon_cost(AbilityType ability);
    BRIDGE_DLLEXPORT bool opher_bought_upgrade(AbilityType slot);

    BRIDGE_DLLEXPORT unsigned long long rva_lookup(std::string const& sig, bool from_dump);
}
