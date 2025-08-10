#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SetGameServerInstanceDataResult.h>

namespace app::classes::PlayFab::ServerModels::SetGameServerInstanceDataResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SetGameServerInstanceDataResult* this_ptr)
}
