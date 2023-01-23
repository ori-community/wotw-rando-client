#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetEntityTokenRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_AuthenticationModels_GetEntityTokenResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_PlayFabError_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>

namespace app::classes::PlayFab::PlayFabAuthenticationAPI {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x017B4070, bool, IsEntityLoggedIn, ())
    IL2CPP_REGISTER_METHOD(0x017B4140, void, ForgetAllCredentials, ())
    IL2CPP_REGISTER_METHOD(0x017B41D0, void, GetEntityToken, (app::GetEntityTokenRequest * request, app::Action_1_PlayFab_AuthenticationModels_GetEntityTokenResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
} // namespace app::classes::PlayFab::PlayFabAuthenticationAPI
