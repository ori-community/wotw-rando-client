#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayFabAuthenticationContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::PlayFab::PlayFabAuthenticationContext {
    IL2CPP_REGISTER_METHOD(0x017B43D0, void, ctor_1, (app::PlayFabAuthenticationContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017B4470, void, ctor_2, (app::PlayFabAuthenticationContext * this_ptr, app::String* client_session_ticket, app::String* entity_token, app::String* play_fab_id))
    IL2CPP_REGISTER_METHOD(0x017B44C0, bool, IsClientLoggedIn, (app::PlayFabAuthenticationContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017B44E0, bool, IsEntityLoggedIn, (app::PlayFabAuthenticationContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B70200, void, ForgetAllCredentials, (app::PlayFabAuthenticationContext * this_ptr))
} // namespace app::classes::PlayFab::PlayFabAuthenticationContext
