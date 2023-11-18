#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WeaponBase.h>

namespace app::classes::RootMotion::Demos::WeaponBase {
    IL2CPP_REGISTER_METHOD(0x0204CEA0, void, ctor, (app::WeaponBase * this_ptr))
}
