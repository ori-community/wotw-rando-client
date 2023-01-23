#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoveCameraAction.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::MoveCameraAction {
    IL2CPP_REGISTER_METHOD(0x008679B0, void, Perform, (app::MoveCameraAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (app::MoveCameraAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsPerforming, (app::MoveCameraAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00867B60, app::String*, GetNiceName, (app::MoveCameraAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::MoveCameraAction * this_ptr))
} // namespace app::classes::MoveCameraAction
