#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MovementSettings.h>

namespace app::classes::Moon::MovementSettings {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MovementSettings * this_ptr))
}
