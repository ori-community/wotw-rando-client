#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RegisterGameResponse.h>

namespace app::classes::PlayFab::ServerModels::RegisterGameResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RegisterGameResponse* this_ptr)
}
