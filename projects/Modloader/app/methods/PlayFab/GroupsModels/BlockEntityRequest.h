#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BlockEntityRequest.h>

namespace app::classes::PlayFab::GroupsModels::BlockEntityRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::BlockEntityRequest* this_ptr)
}
