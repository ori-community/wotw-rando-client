#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoveItemToUserFromCharacterRequest.h>

namespace app::classes::PlayFab::ServerModels::MoveItemToUserFromCharacterRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoveItemToUserFromCharacterRequest * this_ptr))
}
