#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DeletePlayerResult.h>

namespace app::classes::PlayFab::ServerModels::DeletePlayerResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DeletePlayerResult * this_ptr))
}
