#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListUsersCharactersRequest.h>

namespace app::classes::PlayFab::ClientModels::ListUsersCharactersRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ListUsersCharactersRequest* this_ptr)
}
