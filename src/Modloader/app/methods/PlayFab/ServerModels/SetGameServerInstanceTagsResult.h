#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SetGameServerInstanceTagsResult.h>

namespace app::classes::PlayFab::ServerModels::SetGameServerInstanceTagsResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SetGameServerInstanceTagsResult* this_ptr)
}
