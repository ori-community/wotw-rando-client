#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetCharacterInventoryRequest.h>

namespace app::classes::PlayFab::ClientModels::GetCharacterInventoryRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetCharacterInventoryRequest * this_ptr))
}
