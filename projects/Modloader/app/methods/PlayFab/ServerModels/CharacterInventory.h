#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CharacterInventory_1.h>

namespace app::classes::PlayFab::ServerModels::CharacterInventory {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CharacterInventory_1 * this_ptr))
}
