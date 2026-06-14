#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PortalB.h>

namespace app::classes::PortalB {
    IL2CPP_REGISTER_METHOD(0x00C67260, void, ctor, app::PortalB* this_ptr)
}
