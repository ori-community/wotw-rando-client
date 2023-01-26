#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConsumePSNEntitlementsResult.h>

namespace app::classes::PlayFab::ClientModels::ConsumePSNEntitlementsResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ConsumePSNEntitlementsResult * this_ptr))
}
