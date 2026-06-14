#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeletePlayerRequest.h>

namespace app::classes::PlayFab::ServerModels::DeletePlayerRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DeletePlayerRequest* this_ptr)
}
