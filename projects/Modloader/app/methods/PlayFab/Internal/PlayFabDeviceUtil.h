#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttributeInstallResult.h>
#include <Modloader/app/structs/PlayFabError.h>
#include <Modloader/app/structs/PlayFabResultCommon.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UserSettings.h>

namespace app::classes::PlayFab::Internal::PlayFabDeviceUtil {
    IL2CPP_REGISTER_METHOD(0x01838A00, void, DoAttributeInstall, )
    IL2CPP_REGISTER_METHOD(0x01838DC0, void, OnAttributeInstall, app::AttributeInstallResult* result)
    IL2CPP_REGISTER_METHOD(0x01838E80, void, SendDeviceInfoToPlayFab, )
    IL2CPP_REGISTER_METHOD(0x018393F0, void, OnGatherFail, app::PlayFabError* error)
    IL2CPP_REGISTER_METHOD(0x018394C0, void, OnPlayFabLogin, app::PlayFabResultCommon* result)
    IL2CPP_REGISTER_METHOD(
        0x01839810,
        void,
        _OnPlayFabLogin,
        app::UserSettings* settings_for_user,
        app::String* play_fab_id,
        app::String* entity_id,
        app::String* entity_type
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, GetAdvertIdFromUnity, )
} // namespace app::classes::PlayFab::Internal::PlayFabDeviceUtil
