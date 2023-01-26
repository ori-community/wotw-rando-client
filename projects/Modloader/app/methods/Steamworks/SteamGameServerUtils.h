#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EUniverse__Enum.h>
#include <Modloader/app/structs/AppId_t.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/EGamepadTextInputLineMode__Enum.h>
#include <Modloader/app/structs/EGamepadTextInputMode__Enum.h>
#include <Modloader/app/structs/ENotificationPosition__Enum.h>
#include <Modloader/app/structs/ESteamAPICallFailure__Enum.h>
#include <Modloader/app/structs/SteamAPICall_t.h>
#include <Modloader/app/structs/SteamAPIWarningMessageHook_t.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Steamworks::SteamGameServerUtils {
    IL2CPP_REGISTER_METHOD(0x02803E40, uint32_t, GetSecondsSinceAppActive, ())
    IL2CPP_REGISTER_METHOD(0x02803E60, uint32_t, GetSecondsSinceComputerActive, ())
    IL2CPP_REGISTER_METHOD(0x02803E80, app::EUniverse__Enum, GetConnectedUniverse, ())
    IL2CPP_REGISTER_METHOD(0x02803EA0, uint32_t, GetServerRealTime, ())
    IL2CPP_REGISTER_METHOD(0x02803EC0, app::String*, GetIPCountry, ())
    IL2CPP_REGISTER_METHOD(0x02803EF0, bool, GetImageSize, (int32_t i_image, uint32_t* pn_width, uint32_t* pn_height))
    IL2CPP_REGISTER_METHOD(0x02803F40, bool, GetImageRGBA, (int32_t i_image, app::Byte__Array* pub_dest, int32_t n_dest_buffer_size))
    IL2CPP_REGISTER_METHOD(0x02803F90, bool, GetCSERIPPort, (uint32_t * un_i_p, uint16_t* us_port))
    IL2CPP_REGISTER_METHOD(0x02803FD0, uint8_t, GetCurrentBatteryPower, ())
    IL2CPP_REGISTER_METHOD(0x02803FF0, app::AppId_t, GetAppID, ())
    IL2CPP_REGISTER_METHOD(0x028040A0, void, SetOverlayNotificationPosition, (app::ENotificationPosition__Enum e_notification_position))
    IL2CPP_REGISTER_METHOD(0x028040D0, bool, IsAPICallCompleted, (app::SteamAPICall_t h_steam_a_p_i_call, bool* pb_failed))
    IL2CPP_REGISTER_METHOD(0x02804110, app::ESteamAPICallFailure__Enum, GetAPICallFailureReason, (app::SteamAPICall_t h_steam_a_p_i_call))
    IL2CPP_REGISTER_METHOD(0x02804140, bool, GetAPICallResult, (app::SteamAPICall_t h_steam_a_p_i_call, void* p_callback, int32_t cub_callback, int32_t i_callback_expected, bool* pb_failed))
    IL2CPP_REGISTER_METHOD(0x028041B0, uint32_t, GetIPCCallCount, ())
    IL2CPP_REGISTER_METHOD(0x028041D0, void, SetWarningMessageHook, (app::SteamAPIWarningMessageHook_t * p_function))
    IL2CPP_REGISTER_METHOD(0x02804200, bool, IsOverlayEnabled, ())
    IL2CPP_REGISTER_METHOD(0x02804220, bool, BOverlayNeedsPresent, ())
    IL2CPP_REGISTER_METHOD(0x02804240, app::SteamAPICall_t, CheckFileSignature, (app::String * sz_file_name))
    IL2CPP_REGISTER_METHOD(0x02804460, bool, ShowGamepadTextInput, (app::EGamepadTextInputMode__Enum e_input_mode, app::EGamepadTextInputLineMode__Enum e_line_input_mode, app::String* pch_description, uint32_t un_char_max, app::String* pch_existing_text))
    IL2CPP_REGISTER_METHOD(0x028047B0, uint32_t, GetEnteredGamepadTextLength, ())
    IL2CPP_REGISTER_METHOD(0x028047D0, bool, GetEnteredGamepadTextInput, (app::String * *pch_text, uint32_t cch_text))
    IL2CPP_REGISTER_METHOD(0x028048F0, app::String*, GetSteamUILanguage, ())
    IL2CPP_REGISTER_METHOD(0x02804920, bool, IsSteamRunningInVR, ())
    IL2CPP_REGISTER_METHOD(0x02804940, void, SetOverlayNotificationInset, (int32_t n_horizontal_inset, int32_t n_vertical_inset))
    IL2CPP_REGISTER_METHOD(0x02804980, bool, IsSteamInBigPictureMode, ())
    IL2CPP_REGISTER_METHOD(0x028049A0, void, StartVRDashboard, ())
    IL2CPP_REGISTER_METHOD(0x028049C0, bool, IsVRHeadsetStreamingEnabled, ())
    IL2CPP_REGISTER_METHOD(0x028049E0, void, SetVRHeadsetStreamingEnabled, (bool b_enabled))
    IL2CPP_REGISTER_METHOD(0x02804A10, bool, IsSteamChinaLauncher, ())
    IL2CPP_REGISTER_METHOD(0x02804A30, bool, InitFilterText, ())
    IL2CPP_REGISTER_METHOD(0x02804A50, int32_t, FilterText, (app::String * *pch_out_filtered_text, uint32_t n_byte_size_out_filtered_text, app::String* pch_input_message, bool b_legal_only))
} // namespace app::classes::Steamworks::SteamGameServerUtils
