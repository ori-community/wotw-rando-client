#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UpdateUserInternalDataRequest.h>

namespace app::classes::PlayFab::ServerModels::UpdateUserInternalDataRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UpdateUserInternalDataRequest * this_ptr))
}
