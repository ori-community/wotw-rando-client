#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GrantCharacterToUserRequest_1.h>

namespace app::classes::PlayFab::ServerModels::GrantCharacterToUserRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GrantCharacterToUserRequest_1 * this_ptr))
}
