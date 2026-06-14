#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BanRequest.h>

namespace app::classes::PlayFab::ServerModels::BanRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::BanRequest* this_ptr)
}
