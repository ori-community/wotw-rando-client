#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabSharedSettings.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/PlayFabApiSettings.h>
#include <Modloader/app/structs/PlayFabLogLevel__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WebRequestType__Enum.h>

namespace app::classes::PlayFab::PlayFabSettings {
    IL2CPP_REGISTER_METHOD(0x01A455C0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01A457D0, app::PlayFabSharedSettings*, get_PlayFabSharedPrivate, ())
    IL2CPP_REGISTER_METHOD(0x01A45910, app::PlayFabSharedSettings*, GetSharedSettingsObjectPrivate, ())
    IL2CPP_REGISTER_METHOD(0x01A45B00, void, set_DeveloperSecretKey, (app::String * value))
    IL2CPP_REGISTER_METHOD(0x01A45BB0, app::String*, get_DeveloperSecretKey, ())
    IL2CPP_REGISTER_METHOD(0x01A45C50, app::String*, get_DeviceUniqueIdentifier, ())
    IL2CPP_REGISTER_METHOD(0x01A45CA0, app::String*, get_ProductionEnvironmentUrlPrivate, ())
    IL2CPP_REGISTER_METHOD(0x01A45D90, void, set_ProductionEnvironmentUrlPrivate, (app::String * value))
    IL2CPP_REGISTER_METHOD(0x01A45E40, app::String*, get_TitleId, ())
    IL2CPP_REGISTER_METHOD(0x01A45EE0, void, set_TitleId, (app::String * value))
    IL2CPP_REGISTER_METHOD(0x01A45F90, app::String*, get_VerticalName, ())
    IL2CPP_REGISTER_METHOD(0x01A46030, void, set_VerticalName, (app::String * value))
    IL2CPP_REGISTER_METHOD(0x01A460E0, app::PlayFabLogLevel__Enum, get_LogLevel, ())
    IL2CPP_REGISTER_METHOD(0x01A46180, void, set_LogLevel, (app::PlayFabLogLevel__Enum value))
    IL2CPP_REGISTER_METHOD(0x01A46230, app::WebRequestType__Enum, get_RequestType, ())
    IL2CPP_REGISTER_METHOD(0x01A462D0, void, set_RequestType, (app::WebRequestType__Enum value))
    IL2CPP_REGISTER_METHOD(0x01A46380, int32_t, get_RequestTimeout, ())
    IL2CPP_REGISTER_METHOD(0x01A46420, void, set_RequestTimeout, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x01A464D0, bool, get_RequestKeepAlive, ())
    IL2CPP_REGISTER_METHOD(0x01A46570, void, set_RequestKeepAlive, (bool value))
    IL2CPP_REGISTER_METHOD(0x01A46620, bool, get_CompressApiData, ())
    IL2CPP_REGISTER_METHOD(0x01A466C0, void, set_CompressApiData, (bool value))
    IL2CPP_REGISTER_METHOD(0x01A46770, app::String*, get_LoggerHost, ())
    IL2CPP_REGISTER_METHOD(0x01A46810, void, set_LoggerHost, (app::String * value))
    IL2CPP_REGISTER_METHOD(0x01A468C0, int32_t, get_LoggerPort, ())
    IL2CPP_REGISTER_METHOD(0x01A46960, void, set_LoggerPort, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x01A46A10, bool, get_EnableRealTimeLogging, ())
    IL2CPP_REGISTER_METHOD(0x01A46AB0, void, set_EnableRealTimeLogging, (bool value))
    IL2CPP_REGISTER_METHOD(0x01A46B60, int32_t, get_LogCapLimit, ())
    IL2CPP_REGISTER_METHOD(0x01A46C00, void, set_LogCapLimit, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x01A46CB0, app::String*, get_LocalApiServer, ())
    IL2CPP_REGISTER_METHOD(0x01A46D90, void, set_LocalApiServer, (app::String * value))
    IL2CPP_REGISTER_METHOD(0x01A46E40, app::String*, GetFullUrl, (app::String * api_call, app::Dictionary_2_System_String_System_String_* get_params, app::PlayFabApiSettings* api_settings))
} // namespace app::classes::PlayFab::PlayFabSettings
