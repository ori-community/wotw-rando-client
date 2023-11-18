#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StarSlugState.h>
#include <Modloader/app/structs/StarSlugEnemy.h>

namespace app::classes::StarSlugState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::StarSlugState * this_ptr, app::StarSlugEnemy* slug))
}
