#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TierUpdateEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TierUpdateEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TierUpdateEventData* this_ptr)
}
