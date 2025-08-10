#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterInventory.h>

namespace app::classes::PlayFab::ClientModels::CharacterInventory {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CharacterInventory* this_ptr)
}
