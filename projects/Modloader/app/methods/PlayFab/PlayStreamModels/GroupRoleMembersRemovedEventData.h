#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GroupRoleMembersRemovedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::GroupRoleMembersRemovedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GroupRoleMembersRemovedEventData * this_ptr))
}
