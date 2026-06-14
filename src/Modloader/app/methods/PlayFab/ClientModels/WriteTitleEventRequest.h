#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WriteTitleEventRequest.h>

namespace app::classes::PlayFab::ClientModels::WriteTitleEventRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::WriteTitleEventRequest* this_ptr)
}
