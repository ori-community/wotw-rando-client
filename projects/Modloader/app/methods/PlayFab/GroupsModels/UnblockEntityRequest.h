#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UnblockEntityRequest.h>

namespace app::classes::PlayFab::GroupsModels::UnblockEntityRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnblockEntityRequest * this_ptr))
}
