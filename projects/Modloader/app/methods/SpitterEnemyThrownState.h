#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpitterEnemy.h>
#include <Modloader/app/structs/SpitterEnemyThrownState.h>

namespace app::classes::SpitterEnemyThrownState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, app::SpitterEnemyThrownState* this_ptr, app::SpitterEnemy* enemy)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, app::SpitterEnemyThrownState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009A16E0, void, OnEnter, app::SpitterEnemyThrownState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009A1730, void, OnExit, app::SpitterEnemyThrownState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009A1760, void, OnThrow, app::SpitterEnemyThrownState* this_ptr)
} // namespace app::classes::SpitterEnemyThrownState
