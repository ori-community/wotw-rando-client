#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PickupContext.h>

namespace app::classes::PickupContext {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PickupContext* this_ptr)
}
