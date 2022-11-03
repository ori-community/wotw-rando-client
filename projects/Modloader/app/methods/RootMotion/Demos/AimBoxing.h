#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::Demos::AimBoxing {
    IL2CPP_REGISTER_METHOD(0x02208410, void, LateUpdate, (app::AimBoxing * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AimBoxing * this_ptr))
} // namespace app::classes::RootMotion::Demos::AimBoxing
