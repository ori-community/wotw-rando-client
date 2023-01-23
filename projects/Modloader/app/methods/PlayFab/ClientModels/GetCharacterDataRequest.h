#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetCharacterDataRequest.h>

namespace app::classes::PlayFab::ClientModels::GetCharacterDataRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetCharacterDataRequest * this_ptr))
}
