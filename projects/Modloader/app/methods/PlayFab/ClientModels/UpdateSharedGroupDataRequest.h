#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpdateSharedGroupDataRequest.h>

namespace app::classes::PlayFab::ClientModels::UpdateSharedGroupDataRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UpdateSharedGroupDataRequest* this_ptr)
}
