#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SessionStartedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::SessionStartedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SessionStartedEventData* this_ptr)
}
