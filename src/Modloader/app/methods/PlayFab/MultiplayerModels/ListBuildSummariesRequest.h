#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListBuildSummariesRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::ListBuildSummariesRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ListBuildSummariesRequest* this_ptr)
}
