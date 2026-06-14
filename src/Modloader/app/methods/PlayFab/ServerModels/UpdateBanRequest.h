#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpdateBanRequest.h>

namespace app::classes::PlayFab::ServerModels::UpdateBanRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UpdateBanRequest* this_ptr)
}
