#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoveCameraToPlayerAction.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::MoveCameraToPlayerAction {
    IL2CPP_REGISTER_METHOD(0x008682E0, void, Perform, app::MoveCameraToPlayerAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00868510, void, Stop, app::MoveCameraToPlayerAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00868560, bool, get_IsPerforming, app::MoveCameraToPlayerAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_Duration, app::MoveCameraToPlayerAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_Duration, app::MoveCameraToPlayerAction* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x008685B0, app::String*, GetNiceName, app::MoveCameraToPlayerAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043BB90, void, ctor, app::MoveCameraToPlayerAction* this_ptr)
} // namespace app::classes::MoveCameraToPlayerAction
