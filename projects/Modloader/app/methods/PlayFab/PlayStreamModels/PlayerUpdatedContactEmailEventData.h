#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerUpdatedContactEmailEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerUpdatedContactEmailEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerUpdatedContactEmailEventData * this_ptr))
}
