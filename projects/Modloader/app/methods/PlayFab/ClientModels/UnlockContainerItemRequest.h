#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnlockContainerItemRequest.h>

namespace app::classes::PlayFab::ClientModels::UnlockContainerItemRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UnlockContainerItemRequest* this_ptr)
}
