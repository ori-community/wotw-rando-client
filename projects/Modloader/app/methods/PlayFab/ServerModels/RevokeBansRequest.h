#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RevokeBansRequest.h>

namespace app::classes::PlayFab::ServerModels::RevokeBansRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RevokeBansRequest * this_ptr))
}
