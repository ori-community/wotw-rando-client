#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GroupMembersAddedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::GroupMembersAddedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GroupMembersAddedEventData * this_ptr))
}
