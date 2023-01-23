#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GroupRoleDeletedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::GroupRoleDeletedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GroupRoleDeletedEventData * this_ptr))
}
