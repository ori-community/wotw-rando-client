#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ModifyItemUsesRequest.h>

namespace app::classes::PlayFab::ServerModels::ModifyItemUsesRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ModifyItemUsesRequest* this_ptr)
}
