#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LinkPSNAccountRequest.h>

namespace app::classes::PlayFab::ClientModels::LinkPSNAccountRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LinkPSNAccountRequest* this_ptr)
}
