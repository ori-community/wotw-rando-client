#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XboxSignInProvider.h>
#include <Modloader/app/structs/INetworkConnectivityChecker.h>
#include <Modloader/app/structs/IPlatformUser.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SystemIntegration::XboxSignInProvider {
    IL2CPP_REGISTER_METHOD(0x00CDFE20, void, ctor, (app::XboxSignInProvider * this_ptr, app::INetworkConnectivityChecker* network_connectivity_checker))
    IL2CPP_REGISTER_METHOD(0x00CE0530, bool, get_IsSignedIn, (app::XboxSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE0540, bool, get_IsSigningIn, (app::XboxSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IPlatformUser*, get_User, (app::XboxSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HasSignInError, (app::XboxSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShowSignInUi, (app::XboxSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShowAchievementUi, (app::XboxSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_LinkToken, (app::XboxSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_LinkToken, (app::XboxSignInProvider * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SignInOnPressAnyButton, (app::XboxSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SignInSilently, (app::XboxSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE0560, void, UserChanged, (app::XboxSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04744CA8, XboxSignInProvider_UserChanged__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SignIn, (app::XboxSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE0760, void, UserSignedOut, (app::XboxSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477ADC0, XboxSignInProvider_UserSignedOut__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00CE0770, void, Update, (app::XboxSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE0900, void, TokenUpdate, (app::XboxSignInProvider * this_ptr))
} // namespace app::classes::SystemIntegration::XboxSignInProvider
