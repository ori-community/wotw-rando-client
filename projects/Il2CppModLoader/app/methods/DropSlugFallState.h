#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DropSlugFallState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::DropSlugFallState * this_ptr, app::DropSlugEnemy * slug))
    IL2CPP_REGISTER_METHOD(0x00BE4840, void, OnEnter, (app::DropSlugFallState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BE48B0, void, UpdateState, (app::DropSlugFallState * this_ptr))
}
