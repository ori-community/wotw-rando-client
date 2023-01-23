#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SetCurrentCharacterAction.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SetCurrentCharacterAction {
    IL2CPP_REGISTER_METHOD(0x005A2350, void, Perform, (app::SetCurrentCharacterAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005A24B0, app::String*, GetNiceName, (app::SetCurrentCharacterAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SetCurrentCharacterAction * this_ptr))
} // namespace app::classes::SetCurrentCharacterAction
