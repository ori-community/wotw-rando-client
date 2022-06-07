#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::EventSystems::PointerInputModule_MouseState {
    IL2CPP_REGISTER_METHOD(0x01F258E0, void, ctor, (app::PointerInputModule_MouseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F25A30, bool, AnyPressesThisFrame, (app::PointerInputModule_MouseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F25B20, bool, AnyReleasesThisFrame, (app::PointerInputModule_MouseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F25C10, app::PointerInputModule_ButtonState *, GetButtonState, (app::PointerInputModule_MouseState * this_ptr, app::PointerEventData_InputButton__Enum button))
    IL2CPP_REGISTER_METHOD(0x01F25EB0, void, SetButtonState, (app::PointerInputModule_MouseState * this_ptr, app::PointerEventData_InputButton__Enum button, app::PointerEventData_FramePressState__Enum state_for_mouse_button, app::PointerEventData * data))
}
