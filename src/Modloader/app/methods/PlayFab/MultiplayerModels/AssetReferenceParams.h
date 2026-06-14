#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AssetReferenceParams.h>

namespace app::classes::PlayFab::MultiplayerModels::AssetReferenceParams {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AssetReferenceParams* this_ptr)
}
