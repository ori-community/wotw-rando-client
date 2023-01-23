#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SessionEndedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::SessionEndedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SessionEndedEventData * this_ptr))
}
