#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_AchievementAsset_.h>
#include <Modloader/app/structs/AchievementAsset.h>
#include <Modloader/app/structs/AchievementsLogic.h>
#include <Modloader/app/structs/AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean_.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/EnemyEntity.h>
#include <Modloader/app/structs/List_1_AbilityType_.h>
#include <Modloader/app/structs/List_1_SpiritShardType_.h>
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/RaceConfiguration.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::AchievementsLogic {
    IL2CPP_REGISTER_METHOD(0x004B6340, app::List_1_AchievementAsset_*, get_WispsAchievements, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B67E0, app::SuspendableMask__Enum, get_Mask, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B67F0, void, set_Mask, (app::AchievementsLogic * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x004B6800, bool, get_IsSuspended, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B6810, void, set_IsSuspended, (app::AchievementsLogic * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x004B6820, void, Awake, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B6B70, void, OnGameRestart, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B6D40, void, ResetAchievementAssetProgress, (app::AchievementsLogic * this_ptr, app::AchievementAsset* asset))
    IL2CPP_REGISTER_METHOD(0x004B6DF0, void, AssignDelegates, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B77B0, void, OnDestroy, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B8250, void, OnGameReset, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B8270, void, OnGameLoadFromMainMenu, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B8340, void, FixedUpdate, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B8730, void, CommitPickupCollectionProgressIfNeeded, (app::AchievementsLogic * this_ptr, bool force))
    IL2CPP_REGISTER_METHOD(0x004B8870, void, CommitJuggleProjectilesAchievementIfNeeded, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B8930, void, HandleTrialAchievements, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B8AC0, int32_t, get_MinShardSlots, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B8B50, int32_t, get_MaxShardSlots, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B8BE0, void, OnAbilityUnlocked_1, (app::AchievementsLogic * this_ptr, app::PlayerUberStateInventory_InventoryItem* item))
    IL2CPP_REGISTER_METHOD(0x004B8CD0, app::List_1_AbilityType_*, get_m_allAbilities, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B8D70, app::List_1_SpiritShardType_*, get_m_allShards, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B8E10, void, OnAbilityUnlocked_2, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B8F00, bool, GetUnlockedAbilitiesProgress, (app::AchievementsLogic * this_ptr, int32_t* unlocked_count, int32_t* all_count))
    IL2CPP_REGISTER_METHOD(0x004B91C0, void, OnSkillUpgraded_1, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B92B0, bool, GetSkillUpgradesProgress, (app::AchievementsLogic * this_ptr, int32_t* upgraded, int32_t* all))
    IL2CPP_REGISTER_METHOD(0x004B9540, void, OnSkillUpgraded_2, (app::AchievementsLogic * this_ptr, float progress))
    IL2CPP_REGISTER_METHOD(0x004B9600, void, OnShardSlotUnlocked_1, (app::AchievementsLogic * this_ptr, app::PlayerUberStateShards_Shard* item))
    IL2CPP_REGISTER_METHOD(0x004B9610, void, OnShardSlotUnlocked_2, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B9720, bool, GetShardSlotsUpgradeProgress, (app::AchievementsLogic * this_ptr, int32_t* unlocked_count, int32_t* all_count))
    IL2CPP_REGISTER_METHOD(0x004B98F0, void, OnShardUpdated_1, (app::AchievementsLogic * this_ptr, app::PlayerUberStateShards_Shard* item))
    IL2CPP_REGISTER_METHOD(0x004B9900, void, OnShardUpdated_2, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B9AC0, bool, GetShardsUnlockedProgress, (app::AchievementsLogic * this_ptr, int32_t* unlocked_count, int32_t* all_count))
    IL2CPP_REGISTER_METHOD(0x004B9CF0, bool, GetShardsUpgradedProgress, (app::AchievementsLogic * this_ptr, int32_t* upgraded_count, int32_t* all_count))
    IL2CPP_REGISTER_METHOD(0x004B9F70, void, OnCollectedPickup, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BA060, void, OnCollectedHealthContainer, (app::AchievementsLogic * this_ptr, int32_t collected_halfs))
    IL2CPP_REGISTER_METHOD(0x004BA1C0, float, GetHealthCollectionCompletion, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BA200, bool, GetHealthContainerProgress, (app::AchievementsLogic * this_ptr, int32_t* collected_count, int32_t* all_count))
    IL2CPP_REGISTER_METHOD(0x004BA2E0, void, OnCollectedEnergyContainer, (app::AchievementsLogic * this_ptr, int32_t collected_halfs))
    IL2CPP_REGISTER_METHOD(0x004BA440, float, GetEnergyCollectionCompletion, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BA480, bool, GetEnergyContainerProgress, (app::AchievementsLogic * this_ptr, int32_t* collected_count, int32_t* all_count))
    IL2CPP_REGISTER_METHOD(0x004BA560, float, GetBoughtMapCompletion, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRaceEnd, (app::AchievementsLogic * this_ptr, app::RaceConfiguration* configuration))
    IL2CPP_REGISTER_METHOD(0x004BA590, void, OnKwolokBossFightStart, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BA5A0, void, OnKwolokBossFightOver, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BA660, void, OnSpiderBossFightStart, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BA6A0, void, OnSpiderBossFightOver, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BA7C0, void, OnSpiderBossEndVignetteEnd, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BA890, void, OnDamageDealt, (app::AchievementsLogic * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x004BA920, void, OnEnemyKilled, (app::AchievementsLogic * this_ptr, app::DamageResult result, app::EnemyEntity* entity))
    IL2CPP_REGISTER_METHOD(0x004BAD60, void, OnShootSpearStart, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BAD70, void, OnBashProjectile, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BAD80, void, OnEquipShard, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BADB0, void, OnSpiritLightGained, (app::AchievementsLogic * this_ptr, int32_t count))
    IL2CPP_REGISTER_METHOD(0x004BAE90, int32_t, GetSpiritLightEverGainedCount, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BAF70, void, OnSpiritLightSpent, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BAFA0, void, OnGameEnd, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BB260, void, PostAchievementProgress, (app::AchievementsLogic * this_ptr, app::AchievementAsset* asset, app::AchievementsLogic_Func_3_System_Int32_System_Int32_System_Boolean_* count_progress_method))
    IL2CPP_REGISTER_METHOD(0x004BB370, void, PostAllAchievementsProgress, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BBB90, void, ValidateEndGameAchievements, (app::AchievementsLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BBC60, void, DrawDebugInfo, ())
    IL2CPP_REGISTER_METHOD(0x004BBF10, void, ctor, (app::AchievementsLogic * this_ptr))
} // namespace app::classes::AchievementsLogic
