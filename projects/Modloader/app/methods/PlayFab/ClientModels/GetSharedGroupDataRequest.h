#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetSharedGroupDataRequest.h>

namespace app::classes::PlayFab::ClientModels::GetSharedGroupDataRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetSharedGroupDataRequest* this_ptr)
}
