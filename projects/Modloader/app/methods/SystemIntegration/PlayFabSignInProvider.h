#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/INetworkConnectivityChecker.h>
#include <Modloader/app/structs/IPlatformUser.h>
#include <Modloader/app/structs/ISignInProvider.h>
#include <Modloader/app/structs/LoginResult.h>
#include <Modloader/app/structs/PlayFabError.h>
#include <Modloader/app/structs/PlayFabSignInProvider.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UpdateUserTitleDisplayNameResult.h>

namespace app::classes::SystemIntegration::PlayFabSignInProvider {
    IL2CPP_REGISTER_METHOD(0x0051DAB0, bool, get_IsSignedIn, app::PlayFabSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsSigningIn, app::PlayFabSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_IsSigningIn, app::PlayFabSignInProvider* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0051DB60, bool, get_IsOnline, app::PlayFabSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::IPlatformUser*, get_User, app::PlayFabSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HasSignInError, app::PlayFabSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShowSignInUi, app::PlayFabSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShowAchievementUi, app::PlayFabSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051DBF0, app::String*, get_LinkToken, app::PlayFabSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::String*, get_EntityId, app::PlayFabSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_EntityId, app::PlayFabSignInProvider* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::String*, get_EntityType, app::PlayFabSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_EntityType, app::PlayFabSignInProvider* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SignInOnPressAnyButton, app::PlayFabSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051DC70, app::String*, get_CustomID, )
    IL2CPP_REGISTER_METHOD(
        0x0051DD10,
        void,
        ctor,
        app::PlayFabSignInProvider* this_ptr,
        app::INetworkConnectivityChecker* net_connectivity_checker,
        app::ISignInProvider* live_sign_in_provider,
        app::ISignInProvider* non_live_sign_in_provider
    )
    IL2CPP_REGISTER_METHOD(0x0051E390, void, SignInSilently, app::PlayFabSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051E3A0, void, SignIn, app::PlayFabSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051E9F0, void, SignInAs, app::PlayFabSignInProvider* this_ptr, app::IPlatformUser* user)
    IL2CPP_REGISTER_METHOD(0x0051EBA0, void, LoginSucceed, app::PlayFabSignInProvider* this_ptr, app::LoginResult* result)
    IL2CPP_REGISTER_METHOD(0x0051EE00, void, EnsureProfilePolicy, app::PlayFabSignInProvider* this_ptr, app::String* entity_id, app::String* entity_key)
    IL2CPP_REGISTER_METHOD(0x0051F7F0, void, LoginError, app::PlayFabSignInProvider* this_ptr, app::PlayFabError* error)
    IL2CPP_REGISTER_METHOD(0x0051F8D0, void, EnsureProperDisplayName, app::PlayFabSignInProvider* this_ptr, app::String* desired_display_name)
    IL2CPP_REGISTER_METHOD(0x0051FE00, void, Update, app::PlayFabSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00520090, void, DisplayNameUpdate, app::PlayFabSignInProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00520170,
        void,
        PlayFabPlatformLinkUpdate,
        app::PlayFabSignInProvider* this_ptr,
        app::ISignInProvider* provider,
        app::String* service
    )
    IL2CPP_REGISTER_METHOD(0x00520E20, void, OnLinkSuccess, app::PlayFabSignInProvider* this_ptr, app::String* result, app::String* service)
    IL2CPP_REGISTER_METHOD(0x00520EE0, void, OnLinkFailed, app::PlayFabSignInProvider* this_ptr, app::PlayFabError* error, app::String* service)
    IL2CPP_REGISTER_METHOD(0x00521030, void, SignOut, )
    IL2CPP_REGISTER_METHOD(0x005210C0, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(
        0x005210D0,
        void,
        _EnsureProperDisplayName_b__51_0,
        app::PlayFabSignInProvider* this_ptr,
        app::UpdateUserTitleDisplayNameResult* success
    )
} // namespace app::classes::SystemIntegration::PlayFabSignInProvider
