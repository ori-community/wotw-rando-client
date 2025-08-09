#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerAdStartedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerAdStartedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayerAdStartedEventData* this_ptr)
}
