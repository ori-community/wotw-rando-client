#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeleteBuildRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::DeleteBuildRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DeleteBuildRequest* this_ptr)
}
