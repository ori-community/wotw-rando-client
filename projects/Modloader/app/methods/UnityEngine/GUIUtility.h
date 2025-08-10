#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/FocusType__Enum.h>
#include <Modloader/app/structs/GUISkin.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::UnityEngine::GUIUtility {
    IL2CPP_REGISTER_METHOD(0x029F7D30, float, get_pixelsPerPoint, )
    IL2CPP_REGISTER_METHOD(0x029F7D80, int32_t, get_guiDepth, )
    IL2CPP_REGISTER_METHOD(0x029F7DD0, void, set_mouseUsed, bool value)
    IL2CPP_REGISTER_METHOD(0x029F7E20, void, set_textFieldInput, bool value)
    IL2CPP_REGISTER_METHOD(0x024C46F0, app::String*, get_systemCopyBuffer, )
    IL2CPP_REGISTER_METHOD(0x024C4740, void, set_systemCopyBuffer, app::String* value)
    IL2CPP_REGISTER_METHOD(0x029F7E70, int32_t, GetControlID_1, int32_t hint, app::FocusType__Enum focus_type, app::Rect rect)
    IL2CPP_REGISTER_METHOD(0x029F7EE0, int32_t, Internal_GetHotControl, )
    IL2CPP_REGISTER_METHOD(0x029F7F30, int32_t, Internal_GetKeyboardControl, )
    IL2CPP_REGISTER_METHOD(0x029F7F80, void, Internal_SetHotControl, int32_t value)
    IL2CPP_REGISTER_METHOD(0x029F7FD0, void, Internal_SetKeyboardControl, int32_t value)
    IL2CPP_REGISTER_METHOD(0x029F8020, app::Object*, Internal_GetDefaultSkin, int32_t skin_mode)
    IL2CPP_REGISTER_METHOD(0x029F8070, void, Internal_ExitGUI, )
    IL2CPP_REGISTER_METHOD(0x029F80C0, void, MarkGUIChanged, )
    IL2CPP_REGISTER_METHOD(0x029F8150, int32_t, GetControlID_2, app::FocusType__Enum focus)
    IL2CPP_REGISTER_METHOD(0x029F81B0, int32_t, GetControlID_3, app::FocusType__Enum focus, app::Rect position)
    IL2CPP_REGISTER_METHOD(0x029F8210, int32_t, GetControlID_4, int32_t hint, app::FocusType__Enum focus)
    IL2CPP_REGISTER_METHOD(0x029F8280, app::Object*, GetStateObject, app::Type* t, int32_t control_i_d)
    IL2CPP_REGISTER_METHOD(0x029F8330, void, set_guiIsExiting, bool value)
    IL2CPP_REGISTER_METHOD(0x029F7EE0, int32_t, get_hotControl, )
    IL2CPP_REGISTER_METHOD(0x029F7F80, void, set_hotControl, int32_t value)
    IL2CPP_REGISTER_METHOD(0x029F83C0, void, TakeCapture, )
    IL2CPP_REGISTER_METHOD(0x029F8450, void, RemoveCapture, )
    IL2CPP_REGISTER_METHOD(0x029F7F30, int32_t, get_keyboardControl, )
    IL2CPP_REGISTER_METHOD(0x029F7FD0, void, set_keyboardControl, int32_t value)
    IL2CPP_REGISTER_METHOD(0x029F84E0, app::GUISkin*, GetDefaultSkin, )
    IL2CPP_REGISTER_METHOD(0x029F85C0, bool, ProcessEvent, int32_t instance_i_d, void* native_event_ptr)
    IL2CPP_REGISTER_METHOD(0x029F8680, void, BeginGUI, int32_t skin_mode, int32_t instance_i_d, int32_t use_g_u_i_layout)
    IL2CPP_REGISTER_METHOD(0x029F8880, void, EndGUI, int32_t layout_type)
    IL2CPP_REGISTER_METHOD(0x029F8C20, bool, EndGUIFromException, app::Exception* exception)
    IL2CPP_REGISTER_METHOD(0x029F8D20, bool, EndContainerGUIFromException, app::Exception* exception)
    IL2CPP_REGISTER_METHOD(0x029F8DC0, void, ResetGlobalState, )
    IL2CPP_REGISTER_METHOD(0x029F8F00, bool, IsExitGUIException, app::Exception* exception)
    IL2CPP_REGISTER_METHOD(0x029F8F00, bool, ShouldRethrowException, app::Exception* exception)
    IL2CPP_REGISTER_METHOD(0x029F8FC0, void, CheckOnGUI, )
    IL2CPP_REGISTER_METHOD(0x029F90A0, void, ScaleAroundPivot, app::Vector2 scale, app::Vector2 pivot_point)
    IL2CPP_REGISTER_METHOD(0x029F9690, int32_t, GetControlID_Injected, int32_t hint, app::FocusType__Enum focus_type, app::Rect* rect)
} // namespace app::classes::UnityEngine::GUIUtility
