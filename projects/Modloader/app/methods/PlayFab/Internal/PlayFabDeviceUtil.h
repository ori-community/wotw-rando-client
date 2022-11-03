#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PlayFab::Internal::PlayFabDeviceUtil {
    IL2CPP_REGISTER_METHOD(0x01838A00, void, DoAttributeInstall, ())
    IL2CPP_REGISTER_METHOD(0x01838DC0, void, OnAttributeInstall, (app::AttributeInstallResult * result))
    IL2CPP_REGISTER_METHODINFO(0x04723088, PlayFabDeviceUtil_OnAttributeInstall__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01838E80, void, SendDeviceInfoToPlayFab, ())
    IL2CPP_REGISTER_METHOD(0x018393F0, void, OnGatherFail, (app::PlayFabError * error))
    IL2CPP_REGISTER_METHODINFO(0x04743E88, PlayFabDeviceUtil_OnGatherFail__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018394C0, void, OnPlayFabLogin, (app::PlayFabResultCommon * result))
    IL2CPP_REGISTER_METHOD(0x01839810, void, _OnPlayFabLogin, (app::UserSettings * settings_for_user, app::String* play_fab_id, app::String* entity_id, app::String* entity_type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, GetAdvertIdFromUnity, ())
} // namespace app::classes::PlayFab::Internal::PlayFabDeviceUtil
