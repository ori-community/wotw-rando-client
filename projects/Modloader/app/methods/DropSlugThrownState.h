#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DropSlugThrownState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::DropSlugThrownState * this_ptr, app::DropSlugEnemy* slug))
    IL2CPP_REGISTER_METHOD(0x00BE60B0, void, OnEnter, (app::DropSlugThrownState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BE6100, void, UpdateState, (app::DropSlugThrownState * this_ptr))
} // namespace app::classes::DropSlugThrownState
