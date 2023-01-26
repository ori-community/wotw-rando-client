#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConsumePSNEntitlementsRequest.h>

namespace app::classes::PlayFab::ClientModels::ConsumePSNEntitlementsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ConsumePSNEntitlementsRequest * this_ptr))
}
