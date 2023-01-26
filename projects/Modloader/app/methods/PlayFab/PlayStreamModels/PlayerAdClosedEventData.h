#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerAdClosedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerAdClosedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerAdClosedEventData * this_ptr))
}
