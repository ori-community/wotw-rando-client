#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DropSlugLandState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::DropSlugLandState * this_ptr, app::DropSlugEnemy * slug))
    IL2CPP_REGISTER_METHOD(0x00BE5460, void, OnEnter, (app::DropSlugLandState * this_ptr))
}
