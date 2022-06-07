#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayFab::PlayFabMatchmakerInstanceAPI {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::PlayFabMatchmakerInstanceAPI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::PlayFabMatchmakerInstanceAPI * this_ptr, app::PlayFabApiSettings * settings))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, ctor_3, (app::PlayFabMatchmakerInstanceAPI * this_ptr, app::PlayFabAuthenticationContext * context))
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_4, (app::PlayFabMatchmakerInstanceAPI * this_ptr, app::PlayFabApiSettings * settings, app::PlayFabAuthenticationContext * context))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, SetAuthenticationContext, (app::PlayFabMatchmakerInstanceAPI * this_ptr, app::PlayFabAuthenticationContext * context))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::PlayFabAuthenticationContext *, GetAuthenticationContext, (app::PlayFabMatchmakerInstanceAPI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017B4520, void, ForgetAllCredentials, (app::PlayFabMatchmakerInstanceAPI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A2E120, void, AuthUser, (app::PlayFabMatchmakerInstanceAPI * this_ptr, app::AuthUserRequest * request, app::Action_1_PlayFab_MatchmakerModels_AuthUserResponse_ * result_callback, app::Action_1_PlayFab_PlayFabError_ * error_callback, app::Object * custom_data, app::Dictionary_2_System_String_System_String_ * extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2E240, void, PlayerJoined, (app::PlayFabMatchmakerInstanceAPI * this_ptr, app::PlayerJoinedRequest * request, app::Action_1_PlayFab_MatchmakerModels_PlayerJoinedResponse_ * result_callback, app::Action_1_PlayFab_PlayFabError_ * error_callback, app::Object * custom_data, app::Dictionary_2_System_String_System_String_ * extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2E360, void, PlayerLeft, (app::PlayFabMatchmakerInstanceAPI * this_ptr, app::PlayerLeftRequest * request, app::Action_1_PlayFab_MatchmakerModels_PlayerLeftResponse_ * result_callback, app::Action_1_PlayFab_PlayFabError_ * error_callback, app::Object * custom_data, app::Dictionary_2_System_String_System_String_ * extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2E480, void, StartGame, (app::PlayFabMatchmakerInstanceAPI * this_ptr, app::StartGameRequest_1 * request, app::Action_1_PlayFab_MatchmakerModels_StartGameResponse_ * result_callback, app::Action_1_PlayFab_PlayFabError_ * error_callback, app::Object * custom_data, app::Dictionary_2_System_String_System_String_ * extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2E5A0, void, UserInfo, (app::PlayFabMatchmakerInstanceAPI * this_ptr, app::UserInfoRequest * request, app::Action_1_PlayFab_MatchmakerModels_UserInfoResponse_ * result_callback, app::Action_1_PlayFab_PlayFabError_ * error_callback, app::Object * custom_data, app::Dictionary_2_System_String_System_String_ * extra_headers))
}
