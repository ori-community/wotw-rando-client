#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PlayerFaceDirectionAction.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::PlayerFaceDirectionAction {
    IL2CPP_REGISTER_METHOD(0x0140E8F0, void, Perform, app::PlayerFaceDirectionAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0140EAB0, app::String*, GetNiceName, app::PlayerFaceDirectionAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::PlayerFaceDirectionAction* this_ptr)
} // namespace app::classes::PlayerFaceDirectionAction
