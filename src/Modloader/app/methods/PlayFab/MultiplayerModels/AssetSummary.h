#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AssetSummary.h>

namespace app::classes::PlayFab::MultiplayerModels::AssetSummary {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AssetSummary* this_ptr)
}
