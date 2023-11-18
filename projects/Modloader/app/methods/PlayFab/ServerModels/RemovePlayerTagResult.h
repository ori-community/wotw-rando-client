#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RemovePlayerTagResult.h>

namespace app::classes::PlayFab::ServerModels::RemovePlayerTagResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RemovePlayerTagResult * this_ptr))
}
