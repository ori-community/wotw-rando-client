#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EnemyArenaController.h>
#include <Modloader/app/structs/EnemyArenaWaveVirtualAnimator.h>
#include <Modloader/app/structs/EnemyArenaController_EnemyWave.h>
#include <Modloader/app/structs/DesiredUberStateGeneric.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/EntityOperationPermit__Enum.h>
#include <Modloader/app/structs/ITimelineEntity.h>
#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Single_.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>

namespace app::classes::EnemyArenaWaveVirtualAnimator {
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::EnemyArenaController*, get_Controller, (app::EnemyArenaWaveVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_Controller, (app::EnemyArenaWaveVirtualAnimator * this_ptr, app::EnemyArenaController* value))
    IL2CPP_REGISTER_METHOD(0x00C03C70, int32_t, get_WaveIndex, (app::EnemyArenaWaveVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C03C80, void, set_WaveIndex, (app::EnemyArenaWaveVirtualAnimator * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00C03C90, app::EnemyArenaController_EnemyWave*, get_Wave, (app::EnemyArenaWaveVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::DesiredUberStateGeneric*, get_DesiredState, (app::EnemyArenaWaveVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_DesiredState, (app::EnemyArenaWaveVirtualAnimator * this_ptr, app::DesiredUberStateGeneric* value))
    IL2CPP_REGISTER_METHOD(0x00C03CC0, void, ctor_1, (app::EnemyArenaWaveVirtualAnimator * this_ptr, app::EnemyArenaController* controller, int32_t wave_index))
    IL2CPP_REGISTER_METHOD(0x00C03E70, void, ctor_2, (app::EnemyArenaWaveVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C03FF0, void, RefreshDesiredState, (app::EnemyArenaWaveVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C041E0, void, Reset, (app::EnemyArenaWaveVirtualAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00C042A0, app::EntityOperationPermit__Enum, OnBeforeRemoveChild, (app::EnemyArenaWaveVirtualAnimator * this_ptr, app::ITimelineEntity* entity))
    IL2CPP_REGISTER_METHOD(0x00C043C0, void, CustomRemoveChild, (app::EnemyArenaWaveVirtualAnimator * this_ptr, app::EntityId id, app::ITimelineEntity* entity))
    IL2CPP_REGISTER_METHOD(0x00C04510, void, RemoveEnemyPlaceholder, (app::EnemyArenaWaveVirtualAnimator * this_ptr, app::GameObject* placeholder_game_object))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RebuildHierarchy, (app::EnemyArenaWaveVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C047C0, app::String*, get_Name, (app::EnemyArenaWaveVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::Dictionary_2_System_Int32_System_Single_*, get_EventBoard, (app::EnemyArenaWaveVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::Nullable_1_Single_, get_CustomStart, (app::EnemyArenaWaveVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_CustomStart, (app::EnemyArenaWaveVirtualAnimator * this_ptr, app::Nullable_1_Single_ value))
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::Nullable_1_Single_, get_CustomEnd, (app::EnemyArenaWaveVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCB0, void, set_CustomEnd, (app::EnemyArenaWaveVirtualAnimator * this_ptr, app::Nullable_1_Single_ value))
} // namespace app::classes::EnemyArenaWaveVirtualAnimator
