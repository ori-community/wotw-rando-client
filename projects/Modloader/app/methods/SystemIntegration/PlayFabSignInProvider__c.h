#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SystemIntegration::PlayFabSignInProvider___c {
    IL2CPP_REGISTER_METHOD(0x00521190, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayFabSignInProvider_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _EnsureProfilePolicy_b__49_0, (app::PlayFabSignInProvider_c * this_ptr, app::SetEntityProfilePolicyResponse* response))
    IL2CPP_REGISTER_METHODINFO(0x0475F2C0, PlayFabSignInProvider_c__EnsureProfilePolicy_b__49_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005212D0, void, _EnsureProperDisplayName_b__51_1, (app::PlayFabSignInProvider_c * this_ptr, app::PlayFabError* error))
    IL2CPP_REGISTER_METHODINFO(0x04775260, PlayFabSignInProvider_c__EnsureProperDisplayName_b__51_1__MethodInfo)
} // namespace app::classes::SystemIntegration::PlayFabSignInProvider___c
