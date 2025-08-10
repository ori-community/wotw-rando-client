#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabError.h>
#include <Modloader/app/structs/PlayFabSignInProvider_c.h>
#include <Modloader/app/structs/SetEntityProfilePolicyResponse.h>

namespace app::classes::SystemIntegration::PlayFabSignInProvider___c {
    IL2CPP_REGISTER_METHOD(0x00521190, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayFabSignInProvider_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        _EnsureProfilePolicy_b__49_0,
        app::PlayFabSignInProvider_c* this_ptr,
        app::SetEntityProfilePolicyResponse* response
    )
    IL2CPP_REGISTER_METHOD(0x005212D0, void, _EnsureProperDisplayName_b__51_1, app::PlayFabSignInProvider_c* this_ptr, app::PlayFabError* error)
} // namespace app::classes::SystemIntegration::PlayFabSignInProvider___c
