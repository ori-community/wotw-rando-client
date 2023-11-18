#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConsumeXboxEntitlementsRequest.h>

namespace app::classes::PlayFab::ClientModels::ConsumeXboxEntitlementsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ConsumeXboxEntitlementsRequest * this_ptr))
}
