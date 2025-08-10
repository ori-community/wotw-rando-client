#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/INetworkConnectivityChecker.h>
#include <Modloader/app/structs/IPlatformUser.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/Task_1_Microsoft_Xbox_Services_Xal_XalUser_.h>
#include <Modloader/app/structs/XalSignInProvider.h>
#include <Modloader/app/structs/XalTraceLevel__Enum.h>
#include <Modloader/app/structs/XalUserGetTokenAndSignatureData.h>

namespace app::classes::SystemIntegration::XalSignInProvider {
    IL2CPP_REGISTER_METHOD(0x00CDC050, void, ctor, app::XalSignInProvider* this_ptr, app::INetworkConnectivityChecker* net_connectivity_checker)
    IL2CPP_REGISTER_METHOD(0x0052A110, bool, get_IsSignedIn, app::XalSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A120, void, set_IsSignedIn, app::XalSignInProvider* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00A64060, bool, get_IsSigningIn, app::XalSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A64070, void, set_IsSigningIn, app::XalSignInProvider* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IPlatformUser*, get_User, app::XalSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_User, app::XalSignInProvider* this_ptr, app::IPlatformUser* value)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HasSignInError, app::XalSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShowSignInUi, app::XalSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShowAchievementUi, app::XalSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_LinkToken, app::XalSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_LinkToken, app::XalSignInProvider* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SignInOnPressAnyButton, app::XalSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CDC8E0, void, SignInSilently, app::XalSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CDCA70, void, SignIn, app::XalSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CDCC00, void, CleanUpBrowserIfNeeded, app::XalSignInProvider* this_ptr, app::Task* t)
    IL2CPP_REGISTER_METHOD(0x00CDCD60, app::Task*, GetGamerPicture, app::XalSignInProvider* this_ptr, app::Task_1_Microsoft_Xbox_Services_Xal_XalUser_* t)
    IL2CPP_REGISTER_METHOD(0x00CDD190, int32_t, GetErrorCode, app::Task* task)
    IL2CPP_REGISTER_METHOD(
        0x00CDD400,
        void,
        DebugLog,
        app::String* area_name,
        app::XalTraceLevel__Enum level,
        uint64_t thread_id,
        uint64_t timestamp,
        app::String* message
    )
    IL2CPP_REGISTER_METHOD(0x00CDD630, void, Update, app::XalSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CDD770, void, CancelLogin, )
    IL2CPP_REGISTER_METHOD(0x00CDD8C0, void, TokenUpdate, app::XalSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CDDC70, void, OnSignOut, app::XalSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CDDDC0, app::Task*, _SignInSilently_b__30_0, app::XalSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CDDEC0, app::Task*, _SignIn_b__31_0, app::XalSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CDDFC0, void, _CleanUpBrowserIfNeeded_b__32_0, app::XalSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CDDFE0, void, _GetGamerPicture_b__33_0, app::XalSignInProvider* this_ptr, app::Task* o)
    IL2CPP_REGISTER_METHOD(0x00CDDFF0, void, _TokenUpdate_b__38_0, app::XalSignInProvider* this_ptr, app::XalUserGetTokenAndSignatureData result)
} // namespace app::classes::SystemIntegration::XalSignInProvider
