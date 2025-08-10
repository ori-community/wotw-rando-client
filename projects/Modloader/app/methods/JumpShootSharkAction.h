#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/JumpShootSharkAction.h>

namespace app::classes::JumpShootSharkAction {
    IL2CPP_REGISTER_METHOD(0x00E4F2A0, void, Perform, app::JumpShootSharkAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::JumpShootSharkAction* this_ptr)
} // namespace app::classes::JumpShootSharkAction
