#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WormState.h>
#include <Modloader/app/structs/WormEnemy.h>

namespace app::classes::WormState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::WormState * this_ptr, app::WormEnemy* worm))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::WormState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (app::WormState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::WormState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058F9C0, float, get_CurrentStateTime, (app::WormState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::WormState * this_ptr))
} // namespace app::classes::WormState
