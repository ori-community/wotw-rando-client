#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoveCameraHereAction.h>

namespace app::classes::MoveCameraHereAction {
    IL2CPP_REGISTER_METHOD(0x00867DF0, void, Perform, app::MoveCameraHereAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00868200, void, Stop, app::MoveCameraHereAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00868250, bool, get_IsPerforming, app::MoveCameraHereAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008682A0, float, get_Duration, app::MoveCameraHereAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008682B0, void, set_Duration, app::MoveCameraHereAction* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x008682C0, void, ctor, app::MoveCameraHereAction* this_ptr)
} // namespace app::classes::MoveCameraHereAction
