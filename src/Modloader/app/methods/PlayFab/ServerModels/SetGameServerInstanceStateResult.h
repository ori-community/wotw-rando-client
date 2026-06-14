#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SetGameServerInstanceStateResult.h>

namespace app::classes::PlayFab::ServerModels::SetGameServerInstanceStateResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SetGameServerInstanceStateResult* this_ptr)
}
