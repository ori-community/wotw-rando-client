#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeleteSharedGroupRequest.h>

namespace app::classes::PlayFab::ServerModels::DeleteSharedGroupRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DeleteSharedGroupRequest * this_ptr))
}
