#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListAssetSummariesRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::ListAssetSummariesRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ListAssetSummariesRequest* this_ptr)
}
