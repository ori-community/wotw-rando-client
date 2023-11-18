#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WriteTitleEventRequest_1.h>

namespace app::classes::PlayFab::ServerModels::WriteTitleEventRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WriteTitleEventRequest_1 * this_ptr))
}
