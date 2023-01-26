#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeleteAssetRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::DeleteAssetRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DeleteAssetRequest * this_ptr))
}
