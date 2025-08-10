#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EInputActionOrigin__Enum.h>
#include <Modloader/app/structs/EInputActionOrigin__Enum__Array.h>
#include <Modloader/app/structs/ESteamControllerPad__Enum.h>
#include <Modloader/app/structs/ESteamInputType__Enum.h>
#include <Modloader/app/structs/EXboxOrigin__Enum.h>
#include <Modloader/app/structs/InputActionSetHandle_t.h>
#include <Modloader/app/structs/InputActionSetHandle_t__Array.h>
#include <Modloader/app/structs/InputAnalogActionData_t.h>
#include <Modloader/app/structs/InputAnalogActionHandle_t.h>
#include <Modloader/app/structs/InputDigitalActionData_t.h>
#include <Modloader/app/structs/InputDigitalActionHandle_t.h>
#include <Modloader/app/structs/InputHandle_t.h>
#include <Modloader/app/structs/InputHandle_t__Array.h>
#include <Modloader/app/structs/InputMotionData_t.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Steamworks::SteamInput {
    IL2CPP_REGISTER_METHOD(0x02781EA0, bool, Init, )
    IL2CPP_REGISTER_METHOD(0x02781F50, bool, Shutdown, )
    IL2CPP_REGISTER_METHOD(0x02782000, void, RunFrame, )
    IL2CPP_REGISTER_METHOD(0x027820B0, int32_t, GetConnectedControllers, app::InputHandle_t__Array* handles_out)
    IL2CPP_REGISTER_METHOD(0x02782210, app::InputActionSetHandle_t, GetActionSetHandle, app::String* psz_action_set_name)
    IL2CPP_REGISTER_METHOD(0x027824F0, void, ActivateActionSet, app::InputHandle_t input_handle, app::InputActionSetHandle_t action_set_handle)
    IL2CPP_REGISTER_METHOD(0x027825C0, app::InputActionSetHandle_t, GetCurrentActionSet, app::InputHandle_t input_handle)
    IL2CPP_REGISTER_METHOD(0x02782680, void, ActivateActionSetLayer, app::InputHandle_t input_handle, app::InputActionSetHandle_t action_set_layer_handle)
    IL2CPP_REGISTER_METHOD(0x02782750, void, DeactivateActionSetLayer, app::InputHandle_t input_handle, app::InputActionSetHandle_t action_set_layer_handle)
    IL2CPP_REGISTER_METHOD(0x02782820, void, DeactivateAllActionSetLayers, app::InputHandle_t input_handle)
    IL2CPP_REGISTER_METHOD(0x027828E0, int32_t, GetActiveActionSetLayers, app::InputHandle_t input_handle, app::InputActionSetHandle_t__Array* handles_out)
    IL2CPP_REGISTER_METHOD(0x02782A50, app::InputDigitalActionHandle_t, GetDigitalActionHandle, app::String* psz_action_name)
    IL2CPP_REGISTER_METHOD(
        0x02782D30,
        app::InputDigitalActionData_t,
        GetDigitalActionData,
        app::InputHandle_t input_handle,
        app::InputDigitalActionHandle_t digital_action_handle
    )
    IL2CPP_REGISTER_METHOD(
        0x02782E00,
        int32_t,
        GetDigitalActionOrigins,
        app::InputHandle_t input_handle,
        app::InputActionSetHandle_t action_set_handle,
        app::InputDigitalActionHandle_t digital_action_handle,
        app::EInputActionOrigin__Enum__Array* origins_out
    )
    IL2CPP_REGISTER_METHOD(0x02782FA0, app::InputAnalogActionHandle_t, GetAnalogActionHandle, app::String* psz_action_name)
    IL2CPP_REGISTER_METHOD(
        0x02783280,
        app::InputAnalogActionData_t,
        GetAnalogActionData,
        app::InputHandle_t input_handle,
        app::InputAnalogActionHandle_t analog_action_handle
    )
    IL2CPP_REGISTER_METHOD(
        0x02783370,
        int32_t,
        GetAnalogActionOrigins,
        app::InputHandle_t input_handle,
        app::InputActionSetHandle_t action_set_handle,
        app::InputAnalogActionHandle_t analog_action_handle,
        app::EInputActionOrigin__Enum__Array* origins_out
    )
    IL2CPP_REGISTER_METHOD(0x02783510, app::String*, GetGlyphForActionOrigin, app::EInputActionOrigin__Enum e_origin)
    IL2CPP_REGISTER_METHOD(0x027835D0, app::String*, GetStringForActionOrigin, app::EInputActionOrigin__Enum e_origin)
    IL2CPP_REGISTER_METHOD(0x02783690, void, StopAnalogActionMomentum, app::InputHandle_t input_handle, app::InputAnalogActionHandle_t e_action)
    IL2CPP_REGISTER_METHOD(0x02783760, app::InputMotionData_t, GetMotionData, app::InputHandle_t input_handle)
    IL2CPP_REGISTER_METHOD(0x02783840, void, TriggerVibration, app::InputHandle_t input_handle, uint16_t us_left_speed, uint16_t us_right_speed)
    IL2CPP_REGISTER_METHOD(
        0x02783920,
        void,
        SetLEDColor,
        app::InputHandle_t input_handle,
        uint8_t n_color_r,
        uint8_t n_color_g,
        uint8_t n_color_b,
        uint32_t n_flags
    )
    IL2CPP_REGISTER_METHOD(
        0x02783A20,
        void,
        TriggerHapticPulse,
        app::InputHandle_t input_handle,
        app::ESteamControllerPad__Enum e_target_pad,
        uint16_t us_duration_micro_sec
    )
    IL2CPP_REGISTER_METHOD(
        0x02783B00,
        void,
        TriggerRepeatedHapticPulse,
        app::InputHandle_t input_handle,
        app::ESteamControllerPad__Enum e_target_pad,
        uint16_t us_duration_micro_sec,
        uint16_t us_off_micro_sec,
        uint16_t un_repeat,
        uint32_t n_flags
    )
    IL2CPP_REGISTER_METHOD(0x02783C10, bool, ShowBindingPanel, app::InputHandle_t input_handle)
    IL2CPP_REGISTER_METHOD(0x02783CD0, app::ESteamInputType__Enum, GetInputTypeForHandle, app::InputHandle_t input_handle)
    IL2CPP_REGISTER_METHOD(0x02783D90, app::InputHandle_t, GetControllerForGamepadIndex, int32_t n_index)
    IL2CPP_REGISTER_METHOD(0x02783E40, int32_t, GetGamepadIndexForController, app::InputHandle_t ulinput_handle)
    IL2CPP_REGISTER_METHOD(0x02783F00, app::String*, GetStringForXboxOrigin, app::EXboxOrigin__Enum e_origin)
    IL2CPP_REGISTER_METHOD(0x02783FC0, app::String*, GetGlyphForXboxOrigin, app::EXboxOrigin__Enum e_origin)
    IL2CPP_REGISTER_METHOD(
        0x02784080,
        app::EInputActionOrigin__Enum,
        GetActionOriginFromXboxOrigin,
        app::InputHandle_t input_handle,
        app::EXboxOrigin__Enum e_origin
    )
    IL2CPP_REGISTER_METHOD(
        0x02784150,
        app::EInputActionOrigin__Enum,
        TranslateActionOrigin,
        app::ESteamInputType__Enum e_destination_input_type,
        app::EInputActionOrigin__Enum e_source_origin
    )
    IL2CPP_REGISTER_METHOD(0x02784210, bool, GetDeviceBindingRevision, app::InputHandle_t input_handle, int32_t* p_major, int32_t* p_minor)
    IL2CPP_REGISTER_METHOD(0x027842F0, uint32_t, GetRemotePlaySessionID, app::InputHandle_t input_handle)
} // namespace app::classes::Steamworks::SteamInput
