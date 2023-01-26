#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnemyArenaController.h>
#include <Modloader/app/structs/EnemyArenaController_EnemyWave.h>
#include <Modloader/app/structs/ICondition.h>
#include <Modloader/app/structs/IDesiredUberState.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/List_1_Moon_Entity_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/VirtualClipsBuilder.h>

namespace app::classes::EnemyArenaController {
    IL2CPP_REGISTER_METHOD(0x00BFF2B0, bool, get_IsCompleted, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFF380, int32_t, get_WavesCount, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFF410, int32_t, get_WaveIndex, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFF4F0, void, set_WaveIndex, (app::EnemyArenaController * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00BFF5E0, app::EnemyArenaController_EnemyWave*, get_CurrentWave, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFF6B0, app::MoonTimeline*, get_OnArenaEndTimelineResolved, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFF7B0, bool, get_IsPlaying, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFF880, app::ICondition*, get_StartConditionResolved, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFF950, bool, get_ShouldStartPlaying, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FCE30, bool, ShouldCreateCheckpointOnArenaCompleted, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFFA20, void, OnEnable, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFFCE0, void, OnDisable, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFFEB0, void, OnValidate, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFFEC0, void, Update, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C00340, app::List_1_Moon_Entity_*, GetAliveEntities, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C00570, app::EnemyArenaController_EnemyWave*, GetWaveAt, (app::EnemyArenaController * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00C00620, void, AddWave, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C008B0, void, RemoveWaveAt, (app::EnemyArenaController * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00C00960, void, OnArenaFinished, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C00AA0, void, OnRestoreCheckpoint, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C00B90, void, StopAllWaveTimelines, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C00D20, void, StartArena, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C00D30, void, InstaKillAllEnemies, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C00E20, void, StopArena, (app::EnemyArenaController * this_ptr, bool insta_kill_enemies))
    IL2CPP_REGISTER_METHOD(0x00C010C0, void, Apply, (app::EnemyArenaController * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C010D0, app::IUberState__Array*, get_AffectingUberStates, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCC0, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005DA240, bool, get_InvalidateParentTimelineCache, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AD920, void, set_InvalidateParentTimelineCache, (app::EnemyArenaController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AddChildren, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C011C0, void, CreateTimelineParentEntity, (app::EnemyArenaController * this_ptr, app::VirtualClipsBuilder* builder))
    IL2CPP_REGISTER_METHOD(0x00C013A0, app::IDesiredUberState*, GetRequirementsForTimeline, (app::EnemyArenaController * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x00BFFEB0, void, InvalidateTimelineCache, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C01820, app::String__Array*, GetAllConditionNames, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C018D0, void, EnsureMapExists, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C01C90, app::Int32__Array*, GetAllConditionGuids, (app::EnemyArenaController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C01D40, app::String*, GetConditionNameFromGuid, (app::EnemyArenaController * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x00C01E30, bool, IsConditionGuidValid, (app::EnemyArenaController * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x00C01E70, bool, Validate, (app::EnemyArenaController * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x00C01EF0, void, ctor, (app::EnemyArenaController * this_ptr))
} // namespace app::classes::EnemyArenaController
