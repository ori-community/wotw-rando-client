#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/SuspensionManager_SuspensionTicket.h>

namespace app::classes::Moon::SuspensionManager_SuspensionTicket {
    IL2CPP_REGISTER_METHOD(0x01857090, void, ctor, app::SuspensionManager_SuspensionTicket* this_ptr, int32_t id, app::SuspendableMask__Enum mask)
}
