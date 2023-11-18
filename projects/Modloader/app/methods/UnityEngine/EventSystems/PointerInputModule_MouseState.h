#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PointerInputModule_MouseState.h>
#include <Modloader/app/structs/PointerEventData.h>
#include <Modloader/app/structs/PointerEventData_FramePressState__Enum.h>
#include <Modloader/app/structs/PointerEventData_InputButton__Enum.h>
#include <Modloader/app/structs/PointerInputModule_ButtonState.h>

namespace app::classes::UnityEngine::EventSystems::PointerInputModule_MouseState {
    IL2CPP_REGISTER_METHOD(0x01F258E0, void, ctor, (app::PointerInputModule_MouseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F25A30, bool, AnyPressesThisFrame, (app::PointerInputModule_MouseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F25B20, bool, AnyReleasesThisFrame, (app::PointerInputModule_MouseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F25C10, app::PointerInputModule_ButtonState*, GetButtonState, (app::PointerInputModule_MouseState * this_ptr, app::PointerEventData_InputButton__Enum button))
    IL2CPP_REGISTER_METHOD(0x01F25EB0, void, SetButtonState, (app::PointerInputModule_MouseState * this_ptr, app::PointerEventData_InputButton__Enum button, app::PointerEventData_FramePressState__Enum state_for_mouse_button, app::PointerEventData* data))
} // namespace app::classes::UnityEngine::EventSystems::PointerInputModule_MouseState
