#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/CursorType__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::uWintab::Lib {
    IL2CPP_REGISTER_METHOD(0x00F72B30, bool, IsAvailable, ())
    IL2CPP_REGISTER_METHOD(0x00F72BC0, void, Initialize, ())
    IL2CPP_REGISTER_METHOD(0x00F72C50, void, Finalize, ())
    IL2CPP_REGISTER_METHOD(0x00F72CE0, void, GetDeviceName_1, (app::StringBuilder * buf, int32_t len))
    IL2CPP_REGISTER_METHOD(0x00F72EC0, bool, IsPressureSupported, ())
    IL2CPP_REGISTER_METHOD(0x00F72F50, bool, IsWheelSupported, ())
    IL2CPP_REGISTER_METHOD(0x00F72FE0, bool, IsOrientationSupported, ())
    IL2CPP_REGISTER_METHOD(0x00F73070, bool, IsExpKeysSupported, ())
    IL2CPP_REGISTER_METHOD(0x00F73100, void, GetVersion_1, (app::StringBuilder * buf, int32_t len))
    IL2CPP_REGISTER_METHOD(0x00F732E0, int32_t, GetDeviceNum, ())
    IL2CPP_REGISTER_METHOD(0x00F73370, int32_t, GetExpKeyNum, (int32_t tablet_id))
    IL2CPP_REGISTER_METHOD(0x00F73410, float, GetX, ())
    IL2CPP_REGISTER_METHOD(0x00F734A0, float, GetY, ())
    IL2CPP_REGISTER_METHOD(0x00F73530, float, GetPressure, ())
    IL2CPP_REGISTER_METHOD(0x00F735C0, float, GetWheel, ())
    IL2CPP_REGISTER_METHOD(0x00F73650, float, GetAzimuth, ())
    IL2CPP_REGISTER_METHOD(0x00F736E0, float, GetAltitude, ())
    IL2CPP_REGISTER_METHOD(0x00F73770, float, GetTwist, ())
    IL2CPP_REGISTER_METHOD(0x00F73800, int32_t, GetPenId, ())
    IL2CPP_REGISTER_METHOD(0x00F73890, app::CursorType__Enum, GetCursor, ())
    IL2CPP_REGISTER_METHOD(0x00F73920, int32_t, GetTime, ())
    IL2CPP_REGISTER_METHOD(0x00F739B0, bool, GetProximity, ())
    IL2CPP_REGISTER_METHOD(0x00F73A40, bool, GetButton, (int32_t id))
    IL2CPP_REGISTER_METHOD(0x00F73AE0, bool, GetButtonDown, (int32_t id))
    IL2CPP_REGISTER_METHOD(0x00F73B80, bool, GetButtonUp, (int32_t id))
    IL2CPP_REGISTER_METHOD(0x00F73C20, bool, GetExpKey, (int32_t tablet_id, int32_t control_id))
    IL2CPP_REGISTER_METHOD(0x00F73CD0, bool, GetExpKeyDown, (int32_t tablet_id, int32_t control_id))
    IL2CPP_REGISTER_METHOD(0x00F73D80, bool, GetExpKeyUp, (int32_t tablet_id, int32_t control_id))
    IL2CPP_REGISTER_METHOD(0x00F73E30, app::String*, GetDeviceName_2, ())
    IL2CPP_REGISTER_METHOD(0x00F73FB0, app::String*, GetVersion_2, ())
} // namespace app::classes::uWintab::Lib
