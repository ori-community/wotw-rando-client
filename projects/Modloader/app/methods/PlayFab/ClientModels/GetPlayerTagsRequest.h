#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetPlayerTagsRequest.h>

namespace app::classes::PlayFab::ClientModels::GetPlayerTagsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetPlayerTagsRequest * this_ptr))
}
