#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConsumeItemRequest_1.h>

namespace app::classes::PlayFab::ServerModels::ConsumeItemRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ConsumeItemRequest_1* this_ptr)
}
