#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GroupCreatedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::GroupCreatedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GroupCreatedEventData * this_ptr))
}
