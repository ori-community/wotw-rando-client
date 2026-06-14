#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpdateBansRequest.h>

namespace app::classes::PlayFab::ServerModels::UpdateBansRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UpdateBansRequest* this_ptr)
}
