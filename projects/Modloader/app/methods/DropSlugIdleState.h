#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DropSlugIdleState.h>
#include <Modloader/app/structs/DropSlugEnemy.h>

namespace app::classes::DropSlugIdleState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::DropSlugIdleState * this_ptr, app::DropSlugEnemy* slug))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetSettings, (app::DropSlugIdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BE5150, void, OnEnter, (app::DropSlugIdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BE51E0, void, OnExit, (app::DropSlugIdleState * this_ptr))
} // namespace app::classes::DropSlugIdleState
