#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectDisabler.h>

namespace app::classes::Moon::Utilities::ObjectDisabler {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::ObjectDisabler* this_ptr)
}
