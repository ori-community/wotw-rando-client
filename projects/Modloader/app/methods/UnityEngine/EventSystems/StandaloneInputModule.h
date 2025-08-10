#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/PointerEventData.h>
#include <Modloader/app/structs/PointerInputModule_MouseButtonEventData.h>
#include <Modloader/app/structs/StandaloneInputModule.h>
#include <Modloader/app/structs/StandaloneInputModule_InputMode__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::UnityEngine::EventSystems::StandaloneInputModule {
    IL2CPP_REGISTER_METHOD(0x01F26E70, void, ctor, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F1B660, app::StandaloneInputModule_InputMode__Enum, get_inputMode, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F26F50, bool, get_allowActivationOnMobileDevice, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFD10, void, set_allowActivationOnMobileDevice, app::StandaloneInputModule* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01F26F50, bool, get_forceModuleActive, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFD10, void, set_forceModuleActive, app::StandaloneInputModule* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01F26F60, float, get_inputActionsPerSecond, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C7C0A0, void, set_inputActionsPerSecond, app::StandaloneInputModule* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01F26F70, float, get_repeatDelay, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F0E770, void, set_repeatDelay, app::StandaloneInputModule* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01BA66F0, app::String*, get_horizontalAxis, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_horizontalAxis, app::StandaloneInputModule* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01F26F80, app::String*, get_verticalAxis, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCB0, void, set_verticalAxis, app::StandaloneInputModule* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01F26F90, app::String*, get_submitButton, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCD0, void, set_submitButton, app::StandaloneInputModule* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01F26FA0, app::String*, get_cancelButton, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_cancelButton, app::StandaloneInputModule* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01F26FB0, bool, ShouldIgnoreEventsOnNoFocus, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F27010, void, UpdateModule, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F271F0, bool, IsModuleSupported, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F27280, bool, ShouldActivateModule, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F27560, void, ActivateModule, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F27740, void, DeactivateModule, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F27750, void, Process, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F27810, bool, ProcessTouchEvents, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01F279D0,
        void,
        ProcessTouchPress,
        app::StandaloneInputModule* this_ptr,
        app::PointerEventData* pointer_event,
        bool pressed,
        bool released
    )
    IL2CPP_REGISTER_METHOD(0x01F28010, bool, SendSubmitEventToSelectedObject, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F28350, app::Vector2, GetRawMoveVector, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F28530, bool, SendMoveEventToSelectedObject, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F28940, void, ProcessMouseEvent_1, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B1B670, bool, ForceAutoSelect, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F28950, void, ProcessMouseEvent_2, app::StandaloneInputModule* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x01F28CE0, bool, SendUpdateEventToSelectedObject, app::StandaloneInputModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F28ED0, void, ProcessMousePress, app::StandaloneInputModule* this_ptr, app::PointerInputModule_MouseButtonEventData* data)
    IL2CPP_REGISTER_METHOD(0x01F294F0, app::GameObject*, GetCurrentFocusedGameObject, app::StandaloneInputModule* this_ptr)
} // namespace app::classes::UnityEngine::EventSystems::StandaloneInputModule
