#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ActivationChild.h>

namespace app::classes::ActivationChild {
    IL2CPP_REGISTER_METHOD(0x004C90F0, void, OnEnable, (app::ActivationChild * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ActivationChild * this_ptr))
} // namespace app::classes::ActivationChild
