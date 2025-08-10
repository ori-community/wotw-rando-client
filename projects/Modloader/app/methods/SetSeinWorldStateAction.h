#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SetSeinWorldStateAction.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SetSeinWorldStateAction {
    IL2CPP_REGISTER_METHOD(0x005A4400, void, Perform, app::SetSeinWorldStateAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x005A4700, app::String*, GetNiceName, app::SetSeinWorldStateAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::SetSeinWorldStateAction* this_ptr)
} // namespace app::classes::SetSeinWorldStateAction
