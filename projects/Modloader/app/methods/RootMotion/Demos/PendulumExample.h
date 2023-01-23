#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PendulumExample.h>

namespace app::classes::RootMotion::Demos::PendulumExample {
    IL2CPP_REGISTER_METHOD(0x02228ED0, void, Start, (app::PendulumExample * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022298E0, void, LateUpdate, (app::PendulumExample * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0222AAA0, void, ctor, (app::PendulumExample * this_ptr))
} // namespace app::classes::RootMotion::Demos::PendulumExample
