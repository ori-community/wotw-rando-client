#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SlugEnemy.h>
#include <Modloader/app/structs/SlugState.h>

namespace app::classes::SlugState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::SlugState* this_ptr, app::SlugEnemy* slug)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, app::SlugState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, app::SlugState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, app::SlugState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, app::SlugState* this_ptr)
} // namespace app::classes::SlugState
