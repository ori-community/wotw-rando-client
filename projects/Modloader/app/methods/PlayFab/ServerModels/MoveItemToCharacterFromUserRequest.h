#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoveItemToCharacterFromUserRequest.h>

namespace app::classes::PlayFab::ServerModels::MoveItemToCharacterFromUserRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MoveItemToCharacterFromUserRequest* this_ptr)
}
