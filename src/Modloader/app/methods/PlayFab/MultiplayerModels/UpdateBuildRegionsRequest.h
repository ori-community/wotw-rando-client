#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpdateBuildRegionsRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::UpdateBuildRegionsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UpdateBuildRegionsRequest* this_ptr)
}
