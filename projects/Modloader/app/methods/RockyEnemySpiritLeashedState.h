#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RockyEnemySpiritLeashedState.h>
#include <Modloader/app/structs/RockyEnemy.h>

namespace app::classes::RockyEnemySpiritLeashedState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::RockyEnemySpiritLeashedState * this_ptr, app::RockyEnemy* enemy))
    IL2CPP_REGISTER_METHOD(0x01363EF0, void, OnEnter, (app::RockyEnemySpiritLeashedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013640C0, void, UpdateState, (app::RockyEnemySpiritLeashedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::RockyEnemySpiritLeashedState * this_ptr))
} // namespace app::classes::RockyEnemySpiritLeashedState
