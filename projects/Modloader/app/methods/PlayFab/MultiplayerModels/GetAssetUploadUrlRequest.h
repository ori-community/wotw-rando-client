#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetAssetUploadUrlRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::GetAssetUploadUrlRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetAssetUploadUrlRequest * this_ptr))
}
