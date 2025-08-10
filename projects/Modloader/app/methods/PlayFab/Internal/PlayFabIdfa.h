#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttributeInstallResult.h>

namespace app::classes::PlayFab::Internal::PlayFabIdfa {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x0183D1E0, void, DoAttributeInstall, )
    IL2CPP_REGISTER_METHOD(0x0183D550, void, OnAttributeInstall, app::AttributeInstallResult* result)
    IL2CPP_REGISTER_METHOD(0x0183D610, void, OnPlayFabLogin, )
} // namespace app::classes::PlayFab::Internal::PlayFabIdfa
