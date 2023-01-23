#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ListAssetSummariesResponse.h>

namespace app::classes::PlayFab::MultiplayerModels::ListAssetSummariesResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ListAssetSummariesResponse * this_ptr))
}
