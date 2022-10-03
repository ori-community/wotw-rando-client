#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SystemIntegration::SteamSignInProvider {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::SteamSignInProvider * this_ptr, app::INetworkConnectivityChecker* net_connectivity_checker))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsSignedIn, (app::SteamSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSigningIn, (app::SteamSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::IPlatformUser*, get_User, (app::SteamSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_User, (app::SteamSignInProvider * this_ptr, app::IPlatformUser* value))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_HasSignInError, (app::SteamSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_HasSignInError, (app::SteamSignInProvider * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShowSignInUi, (app::SteamSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShowAchievementUi, (app::SteamSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_LinkToken, (app::SteamSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_LinkToken, (app::SteamSignInProvider * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SignInOnPressAnyButton, (app::SteamSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A290, void, SignInSilently, (app::SteamSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A2A0, void, SignIn, (app::SteamSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A5A0, void, InjectSteamAuthTicket, (app::SteamSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052AA80, app::Texture2D*, GetSteamImageAsTexture2D, (int32_t i_image))
    IL2CPP_REGISTER_METHODINFO(0x0470C858, SteamSignInProvider_GetSteamImageAsTexture2D__MethodInfo)
} // namespace app::classes::SystemIntegration::SteamSignInProvider
