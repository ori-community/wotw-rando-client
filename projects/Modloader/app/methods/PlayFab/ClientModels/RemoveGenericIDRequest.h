#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RemoveGenericIDRequest.h>

namespace app::classes::PlayFab::ClientModels::RemoveGenericIDRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RemoveGenericIDRequest * this_ptr))
}
