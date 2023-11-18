#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DropSlugFallState.h>
#include <Modloader/app/structs/DropSlugEnemy.h>

namespace app::classes::DropSlugFallState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::DropSlugFallState * this_ptr, app::DropSlugEnemy* slug))
    IL2CPP_REGISTER_METHOD(0x00BE4840, void, OnEnter, (app::DropSlugFallState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BE48B0, void, UpdateState, (app::DropSlugFallState * this_ptr))
} // namespace app::classes::DropSlugFallState
