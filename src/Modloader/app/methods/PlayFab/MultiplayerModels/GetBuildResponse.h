#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetBuildResponse.h>

namespace app::classes::PlayFab::MultiplayerModels::GetBuildResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetBuildResponse* this_ptr)
}
