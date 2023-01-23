#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoveItemToUserFromCharacterResult.h>

namespace app::classes::PlayFab::ServerModels::MoveItemToUserFromCharacterResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoveItemToUserFromCharacterResult * this_ptr))
}
