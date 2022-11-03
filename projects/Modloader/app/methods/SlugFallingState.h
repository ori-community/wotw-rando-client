#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SlugFallingState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::SlugFallingState * this_ptr, app::SlugEnemy* slug))
}
