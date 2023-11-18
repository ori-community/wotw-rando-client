#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberColliderSettings.h>

namespace app::classes::UberColliderSettings {
    IL2CPP_REGISTER_METHOD(0x013E5500, void, ctor, (app::UberColliderSettings * this_ptr))
}
