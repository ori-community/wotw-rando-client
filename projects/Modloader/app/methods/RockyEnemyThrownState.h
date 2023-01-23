#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RockyEnemyThrownState.h>
#include <Modloader/app/structs/RockyEnemy.h>

namespace app::classes::RockyEnemyThrownState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::RockyEnemyThrownState * this_ptr, app::RockyEnemy* enemy))
    IL2CPP_REGISTER_METHOD(0x01364550, void, UpdateState, (app::RockyEnemyThrownState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01364590, void, OnEnter, (app::RockyEnemyThrownState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01364690, void, OnExit, (app::RockyEnemyThrownState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013646C0, void, OnThrow, (app::RockyEnemyThrownState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047893F8, RockyEnemyThrownState_OnThrow__MethodInfo)
} // namespace app::classes::RockyEnemyThrownState
