#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GroupRoleMembersAddedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::GroupRoleMembersAddedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GroupRoleMembersAddedEventData * this_ptr))
}
