#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GroupRoleCreatedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::GroupRoleCreatedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GroupRoleCreatedEventData* this_ptr)
}
