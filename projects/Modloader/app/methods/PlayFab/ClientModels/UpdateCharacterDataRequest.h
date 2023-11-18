#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpdateCharacterDataRequest.h>

namespace app::classes::PlayFab::ClientModels::UpdateCharacterDataRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UpdateCharacterDataRequest * this_ptr))
}
