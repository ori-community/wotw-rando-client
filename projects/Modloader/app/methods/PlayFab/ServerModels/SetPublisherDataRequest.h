#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SetPublisherDataRequest.h>

namespace app::classes::PlayFab::ServerModels::SetPublisherDataRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SetPublisherDataRequest * this_ptr))
}
