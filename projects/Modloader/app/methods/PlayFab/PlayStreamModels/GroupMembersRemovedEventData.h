#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GroupMembersRemovedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::GroupMembersRemovedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GroupMembersRemovedEventData * this_ptr))
}
