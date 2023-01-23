#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DropSlugState.h>
#include <Modloader/app/structs/DropSlugEnemy.h>

namespace app::classes::DropSlugState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::DropSlugState * this_ptr, app::DropSlugEnemy* slug))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::DropSlugState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (app::DropSlugState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::DropSlugState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058F9C0, float, get_CurrentStateTime, (app::DropSlugState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::DropSlugState * this_ptr))
} // namespace app::classes::DropSlugState
