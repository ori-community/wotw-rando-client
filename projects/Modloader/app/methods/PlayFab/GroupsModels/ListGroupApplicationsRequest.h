#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListGroupApplicationsRequest.h>

namespace app::classes::PlayFab::GroupsModels::ListGroupApplicationsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ListGroupApplicationsRequest * this_ptr))
}
