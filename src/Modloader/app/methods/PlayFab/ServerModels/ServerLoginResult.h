#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ServerLoginResult.h>

namespace app::classes::PlayFab::ServerModels::ServerLoginResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ServerLoginResult* this_ptr)
}
