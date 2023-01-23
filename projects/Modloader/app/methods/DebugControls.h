#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DebugControls.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::DebugControls {
    IL2CPP_REGISTER_METHOD(0x00DE1650, void, Update, (app::DebugControls * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DE3830, void, FixedUpdate, (app::DebugControls * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SendOneSteamTelemetry, (app::DebugControls * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SendTenSteamTelemetry, (app::DebugControls * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SendSteamTelemetry, (app::DebugControls * this_ptr, int32_t repetition))
    IL2CPP_REGISTER_METHOD(0x00DE3CE0, void, HandleQuickQuit, (app::DebugControls * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_IsSuspended, (app::DebugControls * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FCE40, void, set_IsSuspended, (app::DebugControls * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FF3C0, app::SuspendableMask__Enum, get_Mask, (app::DebugControls * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DE3F20, void, set_Mask, (app::DebugControls * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00DE3FD0, void, ctor, (app::DebugControls * this_ptr))
} // namespace app::classes::DebugControls
