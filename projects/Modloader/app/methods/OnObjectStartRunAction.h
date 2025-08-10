#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OnObjectStartRunAction.h>

namespace app::classes::OnObjectStartRunAction {
    IL2CPP_REGISTER_METHOD(0x00611C80, void, Start, app::OnObjectStartRunAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::OnObjectStartRunAction* this_ptr)
} // namespace app::classes::OnObjectStartRunAction
