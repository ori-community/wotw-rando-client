#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/KeyCode__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Touch.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/IMECompositionMode__Enum.h>

namespace app::classes::UnityEngine::Input {
    IL2CPP_REGISTER_METHOD(0x0145B390, bool, GetKeyInt, (app::KeyCode__Enum key))
    IL2CPP_REGISTER_METHOD(0x0145B4D0, bool, GetKeyUpInt, (app::KeyCode__Enum key))
    IL2CPP_REGISTER_METHOD(0x0145B480, bool, GetKeyUpString, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x0145B430, bool, GetKeyDownInt, (app::KeyCode__Enum key))
    IL2CPP_REGISTER_METHOD(0x0145B3E0, bool, GetKeyDownString, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x0145B250, float, GetAxis, (app::String * axis_name))
    IL2CPP_REGISTER_METHOD(0x0252D570, float, GetAxisRaw, (app::String * axis_name))
    IL2CPP_REGISTER_METHOD(0x0145B2F0, bool, GetButton, (app::String * button_name))
    IL2CPP_REGISTER_METHOD(0x0145B340, bool, GetButtonDown, (app::String * button_name))
    IL2CPP_REGISTER_METHOD(0x0145B2A0, bool, GetMouseButton, (int32_t button))
    IL2CPP_REGISTER_METHOD(0x0145B570, bool, GetMouseButtonDown, (int32_t button))
    IL2CPP_REGISTER_METHOD(0x0145B520, bool, GetMouseButtonUp, (int32_t button))
    IL2CPP_REGISTER_METHOD(0x0252D5C0, app::String__Array*, GetJoystickNames, ())
    IL2CPP_REGISTER_METHOD(0x0252D610, app::Touch, GetTouch, (int32_t index))
    IL2CPP_REGISTER_METHOD(0x0145B390, bool, GetKey, (app::KeyCode__Enum key))
    IL2CPP_REGISTER_METHOD(0x0145B4D0, bool, GetKeyUp_1, (app::KeyCode__Enum key))
    IL2CPP_REGISTER_METHOD(0x0145B480, bool, GetKeyUp_2, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x0145B430, bool, GetKeyDown_1, (app::KeyCode__Enum key))
    IL2CPP_REGISTER_METHOD(0x0145B3E0, bool, GetKeyDown_2, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x0252D6D0, bool, get_simulateMouseWithTouches, ())
    IL2CPP_REGISTER_METHOD(0x0252D720, void, set_simulateMouseWithTouches, (bool value))
    IL2CPP_REGISTER_METHOD(0x0145B180, bool, get_anyKey, ())
    IL2CPP_REGISTER_METHOD(0x0145B130, bool, get_anyKeyDown, ())
    IL2CPP_REGISTER_METHOD(0x0145B1D0, app::Vector3, get_mousePosition, ())
    IL2CPP_REGISTER_METHOD(0x0252D770, app::Vector2, get_mouseScrollDelta, ())
    IL2CPP_REGISTER_METHOD(0x01F19C80, app::IMECompositionMode__Enum, get_imeCompositionMode, ())
    IL2CPP_REGISTER_METHOD(0x0252D7D0, void, set_imeCompositionMode, (app::IMECompositionMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x01F19C30, app::String*, get_compositionString, ())
    IL2CPP_REGISTER_METHOD(0x0252D820, app::Vector2, get_compositionCursorPos, ())
    IL2CPP_REGISTER_METHOD(0x0252D880, void, set_compositionCursorPos, (app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x01F19DE0, bool, get_mousePresent, ())
    IL2CPP_REGISTER_METHOD(0x01F19FE0, int32_t, get_touchCount, ())
    IL2CPP_REGISTER_METHOD(0x01F19F90, bool, get_touchSupported, ())
    IL2CPP_REGISTER_METHOD(0x0252D8E0, void, GetTouch_Injected, (int32_t index, app::Touch* ret))
    IL2CPP_REGISTER_METHOD(0x0252D940, void, get_mousePosition_Injected, (app::Vector3 * ret))
    IL2CPP_REGISTER_METHOD(0x0252D990, void, get_mouseScrollDelta_Injected, (app::Vector2 * ret))
    IL2CPP_REGISTER_METHOD(0x0252D9E0, void, get_compositionCursorPos_Injected, (app::Vector2 * ret))
    IL2CPP_REGISTER_METHOD(0x0252DA30, void, set_compositionCursorPos_Injected, (app::Vector2 * value))
} // namespace app::classes::UnityEngine::Input
