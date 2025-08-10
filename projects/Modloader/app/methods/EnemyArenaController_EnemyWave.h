#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/EnemyArenaController_EnemyWave.h>
#include <Modloader/app/structs/EnemyArenaController_WaveStatus__Enum.h>
#include <Modloader/app/structs/ICondition.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::EnemyArenaController_EnemyWave {
    IL2CPP_REGISTER_METHOD(0x00C02130, app::MoonTimeline*, get_OnStartTimelineResolved, app::EnemyArenaController_EnemyWave* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C02220, app::ICondition*, get_ResolvedExtraCondition, app::EnemyArenaController_EnemyWave* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C022E0, bool, CanStart, app::EnemyArenaController_EnemyWave* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C02390, bool, get_AllEnemiesKilled, app::EnemyArenaController_EnemyWave* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C02420, void, EnablePlaceholders, app::EnemyArenaController_EnemyWave* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C02430, void, DisablePlaceholders, app::EnemyArenaController_EnemyWave* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C02440, void, SetPlaceholderActivation, app::EnemyArenaController_EnemyWave* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00C025F0, void, ChangeState, app::EnemyArenaController_EnemyWave* this_ptr, app::EnemyArenaController_WaveStatus__Enum new_state)
    IL2CPP_REGISTER_METHOD(0x00C02430, void, ReadyToStartEnter, app::EnemyArenaController_EnemyWave* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ReadyToStartExit, app::EnemyArenaController_EnemyWave* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C02890, void, RunningEnter, app::EnemyArenaController_EnemyWave* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C029B0, void, RunningExit, app::EnemyArenaController_EnemyWave* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C02430, void, FinishedEnter, app::EnemyArenaController_EnemyWave* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishedExit, app::EnemyArenaController_EnemyWave* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C02430, void, DisabledEnter, app::EnemyArenaController_EnemyWave* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C02430, void, DisabledExit, app::EnemyArenaController_EnemyWave* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C029C0, void, ResetAllEnemies, app::EnemyArenaController_EnemyWave* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C02C40, void, InstaKillAllEnemies, app::EnemyArenaController_EnemyWave* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C02D90, void, RefreshDeathCount, app::EnemyArenaController_EnemyWave* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C02FC0, void, RegisterEvent, app::EnemyArenaController_EnemyWave* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C03280, void, UnregisterEvent, app::EnemyArenaController_EnemyWave* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C03540, void, EntityKilled, app::EnemyArenaController_EnemyWave* this_ptr, app::DamageResult obj)
    IL2CPP_REGISTER_METHOD(0x00C03550, void, ctor, app::EnemyArenaController_EnemyWave* this_ptr)
} // namespace app::classes::EnemyArenaController_EnemyWave
