#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DeregisterGameResponse.h>

namespace app::classes::PlayFab::ServerModels::DeregisterGameResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DeregisterGameResponse * this_ptr))
}
