#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AcidSlugState.h>
#include <Modloader/app/structs/AcidSlugEnemy.h>

namespace app::classes::AcidSlugState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::AcidSlugState * this_ptr, app::AcidSlugEnemy* slug))
}
