#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AssetReference.h>

namespace app::classes::PlayFab::MultiplayerModels::AssetReference {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AssetReference * this_ptr))
}
