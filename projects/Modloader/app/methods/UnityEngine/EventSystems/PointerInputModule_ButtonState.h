#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PointerInputModule_ButtonState.h>
#include <Modloader/app/structs/PointerEventData_InputButton__Enum.h>
#include <Modloader/app/structs/PointerInputModule_MouseButtonEventData.h>

namespace app::classes::UnityEngine::EventSystems::PointerInputModule_ButtonState {
    IL2CPP_REGISTER_METHOD(0x002FC780, void, ctor, (app::PointerInputModule_ButtonState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F25880, app::PointerInputModule_MouseButtonEventData*, get_eventData, (app::PointerInputModule_ButtonState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_eventData, (app::PointerInputModule_ButtonState * this_ptr, app::PointerInputModule_MouseButtonEventData* value))
    IL2CPP_REGISTER_METHOD(0x01F25890, app::PointerEventData_InputButton__Enum, get_button, (app::PointerInputModule_ButtonState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_button, (app::PointerInputModule_ButtonState * this_ptr, app::PointerEventData_InputButton__Enum value))
} // namespace app::classes::UnityEngine::EventSystems::PointerInputModule_ButtonState
