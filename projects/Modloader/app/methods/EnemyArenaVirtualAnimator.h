#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EnemyArenaController.h>
#include <Modloader/app/structs/EnemyArenaVirtualAnimator.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/EntityOperationPermit__Enum.h>
#include <Modloader/app/structs/ITimelineEntity.h>
#include <Modloader/app/structs/EntityId.h>

namespace app::classes::EnemyArenaVirtualAnimator {
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::EnemyArenaController*, get_Controller, (app::EnemyArenaVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_Controller, (app::EnemyArenaVirtualAnimator * this_ptr, app::EnemyArenaController* value))
    IL2CPP_REGISTER_METHOD(0x00C036A0, void, ctor, (app::EnemyArenaVirtualAnimator * this_ptr, app::EnemyArenaController* controller))
    IL2CPP_REGISTER_METHOD(0x00C03740, void, Reset, (app::EnemyArenaVirtualAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00C03800, app::EntityOperationPermit__Enum, OnBeforeAddChild, (app::EnemyArenaVirtualAnimator * this_ptr, app::ITimelineEntity* entity))
    IL2CPP_REGISTER_METHOD(0x00C03900, app::EntityId, CustomAddChild, (app::EnemyArenaVirtualAnimator * this_ptr, app::ITimelineEntity* entity))
    IL2CPP_REGISTER_METHOD(0x00C039E0, app::EntityOperationPermit__Enum, OnBeforeRemoveChild, (app::EnemyArenaVirtualAnimator * this_ptr, app::ITimelineEntity* entity))
    IL2CPP_REGISTER_METHOD(0x00C03AB0, void, CustomRemoveChild, (app::EnemyArenaVirtualAnimator * this_ptr, app::EntityId id, app::ITimelineEntity* entity))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RebuildHierarchy, (app::EnemyArenaVirtualAnimator * this_ptr))
} // namespace app::classes::EnemyArenaVirtualAnimator
