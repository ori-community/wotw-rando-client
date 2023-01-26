#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GroupRoleUpdatedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::GroupRoleUpdatedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GroupRoleUpdatedEventData * this_ptr))
}
