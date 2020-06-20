#include <csharp_bridge.h>

using namespace System;
using namespace System::Collections::Generic;
using namespace RandoMainDLL;

namespace csharp_bridge
{
    bool initialize()
    {
        return Randomizer::Initialize();
    }

    void update()
    {
        Randomizer::Update();
    }

    int ore_count()
    {
        return Randomizer::Memory->Ore;
    }

    bool tree_fulfilled(AbilityType ability)
    {
        auto cast_ability = static_cast<RandoMainDLL::Memory::AbilityType>(ability);
        return SaveController::Data->TreesActivated->Contains(cast_ability);
    }

    void on_tree(AbilityType ability)
    {
        auto cast_ability = static_cast<RandoMainDLL::Memory::AbilityType>(ability);
        SaveController::Data->TreesActivated->Add(cast_ability);
        Randomizer::Memory->FillEnergy();
        Randomizer::Memory->FillHealth();
        SeedController::OnTree(cast_ability);
    }

    void on_checkpoint()
    {
        UberStateController::Update();
    }

    unsigned long long get_shard_slot_ptr()
    {
        return Randomizer::Memory->ShardSlotPtr();
    }

    bool check_ini(std::string const& str)
    {
        auto managed_str = gcnew String(str.c_str());
        return AHK::IniFlag(managed_str);
    }

    bool inject_log_enabled()
    {
        return !AHK::IniFlag("MuteInjectLogs");
    }

    bool inject_debug_enabled()
    {
        return AHK::IniFlag("DebugInjectLogs");
    }

    bool tp_to_any_pickup()
    {
        return AHK::TPToPickupsEnabled;
    }

    bool invert_swim()
    {
        return AHK::IniFlag("InvertSwim");
    }

    // Save system
    void new_game(int slot)
    {
        return Randomizer::OnNewGame(slot);
    }

    void on_load(int slot, int backupSlot)
    {
        return SaveController::OnLoad(slot, backupSlot);
    }

    void on_save(int slot, int backupSlot)
    {
        return SaveController::OnSave(slot, backupSlot);
    }

    bool get_ability(AbilityType ability)
    {
        auto cast_ability = static_cast<RandoMainDLL::Memory::AbilityType>(ability);
        return SaveController::GetAbility(cast_ability);
    }

    void set_ability(AbilityType ability, bool value)
    {
        auto cast_ability = static_cast<RandoMainDLL::Memory::AbilityType>(ability);
        SaveController::SetAbility(cast_ability, value);
    }

    bool do_invert_tree(AbilityType ability)
    {
        auto cast_ability = static_cast<RandoMainDLL::Memory::AbilityType>(ability);
        return SaveController::Data->TreesActivated->Contains(cast_ability)
            ^ Randomizer::Memory->HasAbility(cast_ability);
    }

    bool is_tree_activated(AbilityType ability)
    {
        auto cast_ability = static_cast<RandoMainDLL::Memory::AbilityType>(ability);
        return SaveController::Data->TreesActivated->Contains(cast_ability);
    }

    // Shop system
    unsigned long long shop_string_repl(int64_t str)
    {
        return ShopController::MessageSwap(IntPtr(str));
    }

    void opher_buy_weapon(AbilityType slot)
    {
        auto cast_slot = static_cast<RandoMainDLL::Memory::AbilityType>(slot);
        ShopController::OnBuyOpherWeapon(cast_slot);
    }

    void opher_buy_upgrade(AbilityType slot)
    {
        auto cast_slot = static_cast<RandoMainDLL::Memory::AbilityType>(slot);
        ShopController::OnBuyOpherUpgrade(cast_slot);
    }

    void twillen_buy_shard(ShardType slot)
    {
        auto cast_slot = static_cast<RandoMainDLL::Memory::ShardType>(slot);
        ShopController::OnBuyTwillenShard(cast_slot);
    }

    bool opher_bought_weapon(AbilityType granted)
    {
        auto cast_granted = static_cast<RandoMainDLL::Memory::AbilityType>(granted);
        return ShopController::OpherBoughtWeapon(cast_granted);
    }

    bool twillen_bought_shard(ShardType shard)
    {
        auto cast_shard = static_cast<RandoMainDLL::Memory::ShardType>(shard);
        return ShopController::TwillenBoughtShard(cast_shard);
    }

    int twillen_shard_cost(ShardType shard)
    {
        auto cast_shard = static_cast<RandoMainDLL::Memory::ShardType>(shard);
        return ShopController::TwillenShardCost(cast_shard);
    }

    int lupo_upgrade_cost(int slot)
    {
        return ShopController::LupoUpgradeCost(slot);
    }

    int opher_weapon_cost(AbilityType ability)
    {
        auto cast_ability = static_cast<RandoMainDLL::Memory::AbilityType>(ability);
        return  ShopController::OpherWeaponCost(cast_ability);
    }

    bool opher_bought_upgrade(AbilityType slot)
    {
        auto cast_slot = static_cast<RandoMainDLL::Memory::AbilityType>(slot);
        return ShopController::OpherBoughtUpgrade(cast_slot);
    }

    unsigned long long rva_lookup(std::string const& sig, bool from_dump)
    {
        auto cast_sig = gcnew String(sig.c_str());
        return RVAFinder::rvaLookup(cast_sig, from_dump);
    }
}
