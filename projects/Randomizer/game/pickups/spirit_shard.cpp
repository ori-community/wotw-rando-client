#include <Modloader/app/methods/MenuTabManager.h>
#include <Modloader/app/methods/PlayerSpiritShards.h>
#include <Modloader/app/methods/SeinPickupProcessor.h>
#include <Modloader/app/methods/SpiritShardPickup.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

using namespace modloader;

namespace {
    bool collecting_spirit_shard = false;
    bool prevent_switch_to_shard_menu = false;

    IL2CPP_INTERCEPT(void, SeinPickupProcessor, OnCollectSpiritShardPickup, app::SeinPickupProcessor * this_ptr, app::SpiritShardPickup* spiritShardPickup) {
        ScopedSetter setter(collecting_spirit_shard, true);
        next::SeinPickupProcessor::OnCollectSpiritShardPickup(this_ptr, spiritShardPickup);
    }

    IL2CPP_INTERCEPT(void, SeinPickupProcessor, OnCollectedShardSlotUpgrade, app::SeinPickupProcessor * this_ptr, app::ShardSlotUpgradePickup* shardSlotPickup) {
        ScopedSetter setter(collecting_spirit_shard, true);
        next::SeinPickupProcessor::OnCollectedShardSlotUpgrade(this_ptr, shardSlotPickup);
    }

    IL2CPP_INTERCEPT(app::PlayerUberStateShards_Shard*, PlayerSpiritShards, AddNewShardToInventory_1, app::PlayerSpiritShards * this_ptr, app::SpiritShardType__Enum spirit_shard_type) {
        if (!collecting_spirit_shard)
            return next::PlayerSpiritShards::AddNewShardToInventory_1(this_ptr, spirit_shard_type);

        auto* result = next::PlayerSpiritShards::AddNewShardToInventory_1(this_ptr, spirit_shard_type);
        if (result) {
            // Rollback if shard was new
            result->fields.m_gained = false;
            result->fields.m_isNew = false;
            il2cpp::invoke(this_ptr->fields.OnInventoryUpdated, "Invoke", result);
        }

        return result;
    }

    IL2CPP_INTERCEPT(void, PlayerSpiritShards, AddGlobalShardSlot, app::PlayerSpiritShards * this_ptr) {
        if (!collecting_spirit_shard)
            next::PlayerSpiritShards::AddGlobalShardSlot(this_ptr);
    }

    IL2CPP_INTERCEPT(void, SpiritShardPickup, OnCollectorCandidateTouch, app::SpiritShardPickup * this_ptr, app::GameObject* collector) {
        ScopedSetter setter(prevent_switch_to_shard_menu, true);
        next::SpiritShardPickup::OnCollectorCandidateTouch(this_ptr, collector);
    }

    IL2CPP_INTERCEPT(void, MenuTabManager, UpdateCurrentVisibleScreen, app::MenuTabManager * this_ptr, app::MenuScreenManager_Screens__Enum screen) {
        if (!prevent_switch_to_shard_menu)
            next::MenuTabManager::UpdateCurrentVisibleScreen(this_ptr, screen);
    }
} // namespace
