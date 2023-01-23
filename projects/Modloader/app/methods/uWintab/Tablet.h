#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/CursorType__Enum.h>

namespace app::classes::uWintab::Tablet {
    IL2CPP_REGISTER_METHOD(0x00F74130, bool, get_Initialized, ())
    IL2CPP_REGISTER_METHOD(0x00F741B0, void, set_Initialized, (bool value))
    IL2CPP_REGISTER_METHOD(0x00F74240, void, InitializeTablet, ())
    IL2CPP_REGISTER_METHOD(0x00F742D0, void, FinalizeTablet, ())
    IL2CPP_REGISTER_METHOD(0x00F72B30, bool, get_IsAvailable, ())
    IL2CPP_REGISTER_METHOD(0x00F74360, app::String*, get_DeviceName, ())
    IL2CPP_REGISTER_METHOD(0x00F74370, app::String*, get_Version, ())
    IL2CPP_REGISTER_METHOD(0x00F72EC0, bool, get_IsPressureSupported, ())
    IL2CPP_REGISTER_METHOD(0x00F72F50, bool, get_IsWheelSupported, ())
    IL2CPP_REGISTER_METHOD(0x00F72FE0, bool, get_IsOrientationSupported, ())
    IL2CPP_REGISTER_METHOD(0x00F73070, bool, get_IsExpKeysSupported, ())
    IL2CPP_REGISTER_METHOD(0x00F732E0, int32_t, get_DeviceNum, ())
    IL2CPP_REGISTER_METHOD(0x00F74380, int32_t, get_ExpKeyNum, ())
    IL2CPP_REGISTER_METHOD(0x00F73410, float, get_X, ())
    IL2CPP_REGISTER_METHOD(0x00F734A0, float, get_Y, ())
    IL2CPP_REGISTER_METHOD(0x00F73530, float, get_Pressure, ())
    IL2CPP_REGISTER_METHOD(0x00F735C0, float, get_Wheel, ())
    IL2CPP_REGISTER_METHOD(0x00F73650, float, get_Azimuth, ())
    IL2CPP_REGISTER_METHOD(0x00F736E0, float, get_Altitude, ())
    IL2CPP_REGISTER_METHOD(0x00F73770, float, get_Twist, ())
    IL2CPP_REGISTER_METHOD(0x00F73800, int32_t, get_PenId, ())
    IL2CPP_REGISTER_METHOD(0x00F73890, app::CursorType__Enum, get_Cursor, ())
    IL2CPP_REGISTER_METHOD(0x00F73920, int32_t, get_Time, ())
    IL2CPP_REGISTER_METHOD(0x00F739B0, bool, get_Proximity, ())
    IL2CPP_REGISTER_METHOD(0x00F74390, int32_t, GetExpKeyNum, (int32_t tablet_id))
    IL2CPP_REGISTER_METHOD(0x00F73A40, bool, GetButton, (int32_t id))
    IL2CPP_REGISTER_METHOD(0x00F73AE0, bool, GetButtonDown, (int32_t id))
    IL2CPP_REGISTER_METHOD(0x00F73B80, bool, GetButtonUp, (int32_t id))
    IL2CPP_REGISTER_METHOD(0x00F743A0, bool, GetExpKey_1, (int32_t tablet_id, int32_t id))
    IL2CPP_REGISTER_METHOD(0x00F743B0, bool, GetExpKey_2, (int32_t id))
    IL2CPP_REGISTER_METHOD(0x00F743C0, bool, GetExpKeyDown_1, (int32_t tablet_id, int32_t id))
    IL2CPP_REGISTER_METHOD(0x00F743D0, bool, GetExpKeyDown_2, (int32_t id))
    IL2CPP_REGISTER_METHOD(0x00F743E0, bool, GetExpKeyUp_1, (int32_t tablet_id, int32_t id))
    IL2CPP_REGISTER_METHOD(0x00F743F0, bool, GetExpKeyUp_2, (int32_t id))
    IL2CPP_REGISTER_METHOD(0x00F74400, app::String*, Info, ())
} // namespace app::classes::uWintab::Tablet
