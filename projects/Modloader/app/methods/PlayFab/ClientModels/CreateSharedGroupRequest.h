#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CreateSharedGroupRequest.h>

namespace app::classes::PlayFab::ClientModels::CreateSharedGroupRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CreateSharedGroupRequest * this_ptr))
}
