#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GroupDeletedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::GroupDeletedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GroupDeletedEventData* this_ptr)
}
