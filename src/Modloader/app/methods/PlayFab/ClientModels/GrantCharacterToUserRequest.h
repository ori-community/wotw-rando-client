#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GrantCharacterToUserRequest.h>

namespace app::classes::PlayFab::ClientModels::GrantCharacterToUserRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GrantCharacterToUserRequest* this_ptr)
}
