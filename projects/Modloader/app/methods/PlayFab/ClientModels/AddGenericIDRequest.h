#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AddGenericIDRequest.h>

namespace app::classes::PlayFab::ClientModels::AddGenericIDRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AddGenericIDRequest* this_ptr)
}
