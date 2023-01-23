#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WispPickupContext.h>

namespace app::classes::WispPickupContext {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WispPickupContext * this_ptr))
}
