#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConsumeItemRequest.h>

namespace app::classes::PlayFab::ClientModels::ConsumeItemRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ConsumeItemRequest* this_ptr)
}
