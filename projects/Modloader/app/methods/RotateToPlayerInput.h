#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RotateToPlayerInput.h>

namespace app::classes::RotateToPlayerInput {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::RotateToPlayerInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RotateToPlayerInput * this_ptr))
} // namespace app::classes::RotateToPlayerInput
