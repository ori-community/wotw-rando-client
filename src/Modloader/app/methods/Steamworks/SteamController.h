#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ControllerActionSetHandle_t.h>
#include <Modloader/app/structs/ControllerActionSetHandle_t__Array.h>
#include <Modloader/app/structs/ControllerAnalogActionData_t.h>
#include <Modloader/app/structs/ControllerAnalogActionHandle_t.h>
#include <Modloader/app/structs/ControllerDigitalActionData_t.h>
#include <Modloader/app/structs/ControllerDigitalActionHandle_t.h>
#include <Modloader/app/structs/ControllerHandle_t.h>
#include <Modloader/app/structs/ControllerHandle_t__Array.h>
#include <Modloader/app/structs/ControllerMotionData_t.h>
#include <Modloader/app/structs/EControllerActionOrigin__Enum.h>
#include <Modloader/app/structs/EControllerActionOrigin__Enum__Array.h>
#include <Modloader/app/structs/ESteamControllerPad__Enum.h>
#include <Modloader/app/structs/ESteamInputType__Enum.h>
#include <Modloader/app/structs/EXboxOrigin__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Steamworks::SteamController {
    IL2CPP_REGISTER_METHOD(0x027E75F0, bool, Init, )
    IL2CPP_REGISTER_METHOD(0x027E76A0, bool, Shutdown, )
    IL2CPP_REGISTER_METHOD(0x027E7750, void, RunFrame, )
    IL2CPP_REGISTER_METHOD(0x027E7800, int32_t, GetConnectedControllers, app::ControllerHandle_t__Array* handles_out)
    IL2CPP_REGISTER_METHOD(0x027E7960, app::ControllerActionSetHandle_t, GetActionSetHandle, app::String* psz_action_set_name)
    IL2CPP_REGISTER_METHOD(0x027E7C40, void, ActivateActionSet, app::ControllerHandle_t controller_handle, app::ControllerActionSetHandle_t action_set_handle)
    IL2CPP_REGISTER_METHOD(0x027E7D10, app::ControllerActionSetHandle_t, GetCurrentActionSet, app::ControllerHandle_t controller_handle)
    IL2CPP_REGISTER_METHOD(
        0x027E7DD0,
        void,
        ActivateActionSetLayer,
        app::ControllerHandle_t controller_handle,
        app::ControllerActionSetHandle_t action_set_layer_handle
    )
    IL2CPP_REGISTER_METHOD(
        0x027E7EA0,
        void,
        DeactivateActionSetLayer,
        app::ControllerHandle_t controller_handle,
        app::ControllerActionSetHandle_t action_set_layer_handle
    )
    IL2CPP_REGISTER_METHOD(0x027E7F70, void, DeactivateAllActionSetLayers, app::ControllerHandle_t controller_handle)
    IL2CPP_REGISTER_METHOD(
        0x027E8030,
        int32_t,
        GetActiveActionSetLayers,
        app::ControllerHandle_t controller_handle,
        app::ControllerActionSetHandle_t__Array* handles_out
    )
    IL2CPP_REGISTER_METHOD(0x027E81A0, app::ControllerDigitalActionHandle_t, GetDigitalActionHandle, app::String* psz_action_name)
    IL2CPP_REGISTER_METHOD(
        0x027E8480,
        app::ControllerDigitalActionData_t,
        GetDigitalActionData,
        app::ControllerHandle_t controller_handle,
        app::ControllerDigitalActionHandle_t digital_action_handle
    )
    IL2CPP_REGISTER_METHOD(
        0x027E8550,
        int32_t,
        GetDigitalActionOrigins,
        app::ControllerHandle_t controller_handle,
        app::ControllerActionSetHandle_t action_set_handle,
        app::ControllerDigitalActionHandle_t digital_action_handle,
        app::EControllerActionOrigin__Enum__Array* origins_out
    )
    IL2CPP_REGISTER_METHOD(0x027E86F0, app::ControllerAnalogActionHandle_t, GetAnalogActionHandle, app::String* psz_action_name)
    IL2CPP_REGISTER_METHOD(
        0x027E89D0,
        app::ControllerAnalogActionData_t,
        GetAnalogActionData,
        app::ControllerHandle_t controller_handle,
        app::ControllerAnalogActionHandle_t analog_action_handle
    )
    IL2CPP_REGISTER_METHOD(
        0x027E8AC0,
        int32_t,
        GetAnalogActionOrigins,
        app::ControllerHandle_t controller_handle,
        app::ControllerActionSetHandle_t action_set_handle,
        app::ControllerAnalogActionHandle_t analog_action_handle,
        app::EControllerActionOrigin__Enum__Array* origins_out
    )
    IL2CPP_REGISTER_METHOD(0x027E8C60, app::String*, GetGlyphForActionOrigin, app::EControllerActionOrigin__Enum e_origin)
    IL2CPP_REGISTER_METHOD(0x027E8D20, app::String*, GetStringForActionOrigin, app::EControllerActionOrigin__Enum e_origin)
    IL2CPP_REGISTER_METHOD(0x027E8DE0, void, StopAnalogActionMomentum, app::ControllerHandle_t controller_handle, app::ControllerAnalogActionHandle_t e_action)
    IL2CPP_REGISTER_METHOD(0x027E8EB0, app::ControllerMotionData_t, GetMotionData, app::ControllerHandle_t controller_handle)
    IL2CPP_REGISTER_METHOD(
        0x027E8F90,
        void,
        TriggerHapticPulse,
        app::ControllerHandle_t controller_handle,
        app::ESteamControllerPad__Enum e_target_pad,
        uint16_t us_duration_micro_sec
    )
    IL2CPP_REGISTER_METHOD(
        0x027E9070,
        void,
        TriggerRepeatedHapticPulse,
        app::ControllerHandle_t controller_handle,
        app::ESteamControllerPad__Enum e_target_pad,
        uint16_t us_duration_micro_sec,
        uint16_t us_off_micro_sec,
        uint16_t un_repeat,
        uint32_t n_flags
    )
    IL2CPP_REGISTER_METHOD(0x027E9180, void, TriggerVibration, app::ControllerHandle_t controller_handle, uint16_t us_left_speed, uint16_t us_right_speed)
    IL2CPP_REGISTER_METHOD(
        0x027E9260,
        void,
        SetLEDColor,
        app::ControllerHandle_t controller_handle,
        uint8_t n_color_r,
        uint8_t n_color_g,
        uint8_t n_color_b,
        uint32_t n_flags
    )
    IL2CPP_REGISTER_METHOD(0x027E9360, bool, ShowBindingPanel, app::ControllerHandle_t controller_handle)
    IL2CPP_REGISTER_METHOD(0x027E9420, app::ESteamInputType__Enum, GetInputTypeForHandle, app::ControllerHandle_t controller_handle)
    IL2CPP_REGISTER_METHOD(0x027E94E0, app::ControllerHandle_t, GetControllerForGamepadIndex, int32_t n_index)
    IL2CPP_REGISTER_METHOD(0x027E9590, int32_t, GetGamepadIndexForController, app::ControllerHandle_t ul_controller_handle)
    IL2CPP_REGISTER_METHOD(0x027E9650, app::String*, GetStringForXboxOrigin, app::EXboxOrigin__Enum e_origin)
    IL2CPP_REGISTER_METHOD(0x027E9710, app::String*, GetGlyphForXboxOrigin, app::EXboxOrigin__Enum e_origin)
    IL2CPP_REGISTER_METHOD(
        0x027E97D0,
        app::EControllerActionOrigin__Enum,
        GetActionOriginFromXboxOrigin,
        app::ControllerHandle_t controller_handle,
        app::EXboxOrigin__Enum e_origin
    )
    IL2CPP_REGISTER_METHOD(
        0x027E98A0,
        app::EControllerActionOrigin__Enum,
        TranslateActionOrigin,
        app::ESteamInputType__Enum e_destination_input_type,
        app::EControllerActionOrigin__Enum e_source_origin
    )
    IL2CPP_REGISTER_METHOD(0x027E9960, bool, GetControllerBindingRevision, app::ControllerHandle_t controller_handle, int32_t* p_major, int32_t* p_minor)
} // namespace app::classes::Steamworks::SteamController
