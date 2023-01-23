#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GrdkSignInProvider.h>
#include <Modloader/app/structs/INetworkConnectivityChecker.h>
#include <Modloader/app/structs/IPlatformUser.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Byte__Array.h>

namespace app::classes::SystemIntegration::GrdkSignInProvider {
    IL2CPP_REGISTER_METHOD(0x00514C90, app::GrdkSignInProvider*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00514D30, void, set_Instance, (app::GrdkSignInProvider * value))
    IL2CPP_REGISTER_METHOD(0x00514DE0, void, ctor, (app::GrdkSignInProvider * this_ptr, app::INetworkConnectivityChecker* net_connectivity_checker))
    IL2CPP_REGISTER_METHOD(0x005150A0, bool, get_IsSignedIn, (app::GrdkSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005150C0, bool, get_IsSigningIn, (app::GrdkSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IPlatformUser*, get_User, (app::GrdkSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_User, (app::GrdkSignInProvider * this_ptr, app::IPlatformUser* value))
    IL2CPP_REGISTER_METHOD(0x00446590, bool, get_HasSignInError, (app::GrdkSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005150D0, void, set_HasSignInError, (app::GrdkSignInProvider * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShowSignInUi, (app::GrdkSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShowAchievementUi, (app::GrdkSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005150E0, app::String*, get_LinkToken, (app::GrdkSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SignInOnPressAnyButton, (app::GrdkSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SignInSilently, (app::GrdkSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00515180, void, SignIn, (app::GrdkSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005154C0, void, GrdkInternalSignInComplete, (app::GrdkSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04742080, GrdkSignInProvider_GrdkInternalSignInComplete__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00515570, void, GrdkInternalSignInFailed, (app::GrdkSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047638B8, GrdkSignInProvider_GrdkInternalSignInFailed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00515590, void, PopulateUser, (app::GrdkSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00515720, void, OnSignInResolved, (app::GrdkSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00515810, void, Update, (app::GrdkSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00515820, void, UpdateToken, (app::GrdkSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00515BE0, void, OnSignedOut, (app::GrdkSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04793B88, GrdkSignInProvider_OnSignedOut__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00515E80, void, SignedInAgainWithNewOrInvalidUser, (app::GrdkSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00515EA0, void, PauseTheGame, (app::GrdkSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00515F60, void, SendUserToMainMenu, (app::GrdkSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00516170, void, ClearCachedData, (app::GrdkSignInProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00516240, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x005162D0, void, _PopulateUser_b__37_0, (app::GrdkSignInProvider * this_ptr, app::Byte__Array* bytes))
    IL2CPP_REGISTER_METHODINFO(0x04759A90, GrdkSignInProvider__PopulateUser_b__37_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00516900, void, _UpdateToken_b__40_0, (app::GrdkSignInProvider * this_ptr, app::String* token, int32_t size))
    IL2CPP_REGISTER_METHODINFO(0x0472D370, GrdkSignInProvider__UpdateToken_b__40_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00516A30, void, _UpdateToken_b__40_1, (app::GrdkSignInProvider * this_ptr, int32_t hresults))
    IL2CPP_REGISTER_METHODINFO(0x0471B5B0, GrdkSignInProvider__UpdateToken_b__40_1__MethodInfo)
} // namespace app::classes::SystemIntegration::GrdkSignInProvider
