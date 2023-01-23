#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_StatSetting_.h>
#include <Modloader/app/structs/StatisticsManager.h>
#include <Modloader/app/structs/StatisticsManager_StatType__Enum.h>
#include <Modloader/app/structs/UberStateValueStore.h>
#include <Modloader/app/structs/Damage.h>

namespace app::classes::StatisticsManager {
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::List_1_StatSetting_*, get_StatSettings, (app::StatisticsManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009BA920, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x009BA9A0, void, Awake, (app::StatisticsManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009BB020, void, OnDestroy, (app::StatisticsManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009BB410, void, OnGameLoad, (app::StatisticsManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472EC88, StatisticsManager_OnGameLoad__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009BB690, void, FixedUpdate, (app::StatisticsManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009BB8F0, void, ResetStat, (app::StatisticsManager * this_ptr, app::StatisticsManager_StatType__Enum type))
    IL2CPP_REGISTER_METHOD(0x009BB9E0, void, Increment, (app::StatisticsManager * this_ptr, app::StatisticsManager_StatType__Enum type, float amount))
    IL2CPP_REGISTER_METHOD(0x009BBAE0, void, UpdateIfGreater, (app::StatisticsManager * this_ptr, app::StatisticsManager_StatType__Enum type, float value))
    IL2CPP_REGISTER_METHOD(0x009BBBE0, void, IncrementDistance, (app::StatisticsManager * this_ptr, app::StatisticsManager_StatType__Enum type))
    IL2CPP_REGISTER_METHOD(0x009BBCC0, void, ClearDirtyStates, (app::StatisticsManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009BBD50, void, UpdateUberStatesToDirtyValues, (app::StatisticsManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04761C50, StatisticsManager_UpdateUberStatesToDirtyValues__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009BBFC0, void, WriteDirtyStates, (app::StatisticsManager * this_ptr, app::UberStateValueStore* value_store))
    IL2CPP_REGISTER_METHOD(0x009BC280, void, UpdateValueStoreOnDeath, (app::StatisticsManager * this_ptr, app::UberStateValueStore* value_store))
    IL2CPP_REGISTER_METHOD(0x009BC330, void, ProcessPlayerDeath, (app::StatisticsManager * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x009BC4D0, void, ProcessPlayerDamage, (app::StatisticsManager * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x009BC660, void, ProcessEnemyDamage, (app::StatisticsManager * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x009BC7C0, void, OnRestoreCheckpoint, (app::StatisticsManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04763B50, StatisticsManager_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009BC920, void, ValidateStatistics, (app::StatisticsManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009BCD50, void, ctor, (app::StatisticsManager * this_ptr))
} // namespace app::classes::StatisticsManager
