#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetCharacterDataRequest_1.h>

namespace app::classes::PlayFab::ServerModels::GetCharacterDataRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetCharacterDataRequest_1 * this_ptr))
}
