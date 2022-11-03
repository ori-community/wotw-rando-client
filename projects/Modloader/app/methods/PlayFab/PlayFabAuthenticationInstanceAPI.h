#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PlayFab::PlayFabAuthenticationInstanceAPI {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::PlayFabAuthenticationInstanceAPI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::PlayFabAuthenticationInstanceAPI * this_ptr, app::PlayFabApiSettings* settings))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, ctor_3, (app::PlayFabAuthenticationInstanceAPI * this_ptr, app::PlayFabAuthenticationContext* context))
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_4, (app::PlayFabAuthenticationInstanceAPI * this_ptr, app::PlayFabApiSettings* settings, app::PlayFabAuthenticationContext* context))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, SetAuthenticationContext, (app::PlayFabAuthenticationInstanceAPI * this_ptr, app::PlayFabAuthenticationContext* context))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::PlayFabAuthenticationContext*, GetAuthenticationContext, (app::PlayFabAuthenticationInstanceAPI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017B4500, bool, IsEntityLoggedIn, (app::PlayFabAuthenticationInstanceAPI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017B4520, void, ForgetAllCredentials, (app::PlayFabAuthenticationInstanceAPI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017B4540, void, GetEntityToken, (app::PlayFabAuthenticationInstanceAPI * this_ptr, app::GetEntityTokenRequest* request, app::Action_1_PlayFab_AuthenticationModels_GetEntityTokenResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
} // namespace app::classes::PlayFab::PlayFabAuthenticationInstanceAPI
