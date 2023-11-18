#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConsumeXboxEntitlementsResult.h>

namespace app::classes::PlayFab::ClientModels::ConsumeXboxEntitlementsResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ConsumeXboxEntitlementsResult * this_ptr))
}
