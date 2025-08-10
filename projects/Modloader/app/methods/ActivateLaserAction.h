#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActivateLaserAction.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ActivateLaserAction {
    IL2CPP_REGISTER_METHOD(0x004C88F0, void, Perform, app::ActivateLaserAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x004C8940, app::String*, GetNiceName, app::ActivateLaserAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C89F0, void, Serialize, app::ActivateLaserAction* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x004C8B70, void, ctor, app::ActivateLaserAction* this_ptr)
} // namespace app::classes::ActivateLaserAction
