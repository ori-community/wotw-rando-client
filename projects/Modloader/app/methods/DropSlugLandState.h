#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DropSlugLandState.h>
#include <Modloader/app/structs/DropSlugEnemy.h>

namespace app::classes::DropSlugLandState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::DropSlugLandState * this_ptr, app::DropSlugEnemy* slug))
    IL2CPP_REGISTER_METHOD(0x00BE5460, void, OnEnter, (app::DropSlugLandState * this_ptr))
} // namespace app::classes::DropSlugLandState
