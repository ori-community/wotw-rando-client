#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EUniverse__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/AppId_t.h>
#include <Modloader/app/structs/ENotificationPosition__Enum.h>
#include <Modloader/app/structs/SteamAPICall_t.h>
#include <Modloader/app/structs/ESteamAPICallFailure__Enum.h>
#include <Modloader/app/structs/SteamAPIWarningMessageHook_t.h>
#include <Modloader/app/structs/EGamepadTextInputMode__Enum.h>
#include <Modloader/app/structs/EGamepadTextInputLineMode__Enum.h>

namespace app::classes::Steamworks::SteamUtils {
    IL2CPP_REGISTER_METHOD(0x027A5590, uint32_t, GetSecondsSinceAppActive, ())
    IL2CPP_REGISTER_METHOD(0x027A55B0, uint32_t, GetSecondsSinceComputerActive, ())
    IL2CPP_REGISTER_METHOD(0x027A55D0, app::EUniverse__Enum, GetConnectedUniverse, ())
    IL2CPP_REGISTER_METHOD(0x027A55F0, uint32_t, GetServerRealTime, ())
    IL2CPP_REGISTER_METHOD(0x027A5610, app::String*, GetIPCountry, ())
    IL2CPP_REGISTER_METHOD(0x027A5640, bool, GetImageSize, (int32_t i_image, uint32_t* pn_width, uint32_t* pn_height))
    IL2CPP_REGISTER_METHOD(0x027A5690, bool, GetImageRGBA, (int32_t i_image, app::Byte__Array* pub_dest, int32_t n_dest_buffer_size))
    IL2CPP_REGISTER_METHOD(0x027A56E0, bool, GetCSERIPPort, (uint32_t * un_i_p, uint16_t* us_port))
    IL2CPP_REGISTER_METHOD(0x027A5720, uint8_t, GetCurrentBatteryPower, ())
    IL2CPP_REGISTER_METHOD(0x027A5740, app::AppId_t, GetAppID, ())
    IL2CPP_REGISTER_METHOD(0x027A57F0, void, SetOverlayNotificationPosition, (app::ENotificationPosition__Enum e_notification_position))
    IL2CPP_REGISTER_METHOD(0x027A5820, bool, IsAPICallCompleted, (app::SteamAPICall_t h_steam_a_p_i_call, bool* pb_failed))
    IL2CPP_REGISTER_METHOD(0x027A5860, app::ESteamAPICallFailure__Enum, GetAPICallFailureReason, (app::SteamAPICall_t h_steam_a_p_i_call))
    IL2CPP_REGISTER_METHOD(0x027A5890, bool, GetAPICallResult, (app::SteamAPICall_t h_steam_a_p_i_call, void* p_callback, int32_t cub_callback, int32_t i_callback_expected, bool* pb_failed))
    IL2CPP_REGISTER_METHOD(0x027A5900, uint32_t, GetIPCCallCount, ())
    IL2CPP_REGISTER_METHOD(0x027A5920, void, SetWarningMessageHook, (app::SteamAPIWarningMessageHook_t * p_function))
    IL2CPP_REGISTER_METHOD(0x027A5950, bool, IsOverlayEnabled, ())
    IL2CPP_REGISTER_METHOD(0x027A5970, bool, BOverlayNeedsPresent, ())
    IL2CPP_REGISTER_METHOD(0x027A5990, app::SteamAPICall_t, CheckFileSignature, (app::String * sz_file_name))
    IL2CPP_REGISTER_METHOD(0x027A5BB0, bool, ShowGamepadTextInput, (app::EGamepadTextInputMode__Enum e_input_mode, app::EGamepadTextInputLineMode__Enum e_line_input_mode, app::String* pch_description, uint32_t un_char_max, app::String* pch_existing_text))
    IL2CPP_REGISTER_METHOD(0x027A5F00, uint32_t, GetEnteredGamepadTextLength, ())
    IL2CPP_REGISTER_METHOD(0x027A5F20, bool, GetEnteredGamepadTextInput, (app::String * *pch_text, uint32_t cch_text))
    IL2CPP_REGISTER_METHOD(0x027A6040, app::String*, GetSteamUILanguage, ())
    IL2CPP_REGISTER_METHOD(0x027A6070, bool, IsSteamRunningInVR, ())
    IL2CPP_REGISTER_METHOD(0x027A6090, void, SetOverlayNotificationInset, (int32_t n_horizontal_inset, int32_t n_vertical_inset))
    IL2CPP_REGISTER_METHOD(0x027A60D0, bool, IsSteamInBigPictureMode, ())
    IL2CPP_REGISTER_METHOD(0x027A60F0, void, StartVRDashboard, ())
    IL2CPP_REGISTER_METHOD(0x027A6110, bool, IsVRHeadsetStreamingEnabled, ())
    IL2CPP_REGISTER_METHOD(0x027A6130, void, SetVRHeadsetStreamingEnabled, (bool b_enabled))
    IL2CPP_REGISTER_METHOD(0x027A6160, bool, IsSteamChinaLauncher, ())
    IL2CPP_REGISTER_METHOD(0x027A6180, bool, InitFilterText, ())
    IL2CPP_REGISTER_METHOD(0x027A61A0, int32_t, FilterText, (app::String * *pch_out_filtered_text, uint32_t n_byte_size_out_filtered_text, app::String* pch_input_message, bool b_legal_only))
} // namespace app::classes::Steamworks::SteamUtils
