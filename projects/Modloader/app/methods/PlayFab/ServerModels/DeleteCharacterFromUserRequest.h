#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeleteCharacterFromUserRequest.h>

namespace app::classes::PlayFab::ServerModels::DeleteCharacterFromUserRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DeleteCharacterFromUserRequest * this_ptr))
}
