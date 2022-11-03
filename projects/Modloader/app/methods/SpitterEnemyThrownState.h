#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpitterEnemyThrownState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::SpitterEnemyThrownState * this_ptr, app::SpitterEnemy* enemy))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::SpitterEnemyThrownState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A16E0, void, OnEnter, (app::SpitterEnemyThrownState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A1730, void, OnExit, (app::SpitterEnemyThrownState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A1760, void, OnThrow, (app::SpitterEnemyThrownState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04729960, SpitterEnemyThrownState_OnThrow__MethodInfo)
} // namespace app::classes::SpitterEnemyThrownState
