#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoveItemToCharacterFromCharacterResult.h>

namespace app::classes::PlayFab::ServerModels::MoveItemToCharacterFromCharacterResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoveItemToCharacterFromCharacterResult * this_ptr))
}
