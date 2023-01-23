#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoveItemToCharacterFromCharacterRequest.h>

namespace app::classes::PlayFab::ServerModels::MoveItemToCharacterFromCharacterRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoveItemToCharacterFromCharacterRequest * this_ptr))
}
