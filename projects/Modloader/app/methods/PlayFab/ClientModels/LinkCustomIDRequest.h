#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LinkCustomIDRequest.h>

namespace app::classes::PlayFab::ClientModels::LinkCustomIDRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LinkCustomIDRequest* this_ptr)
}
