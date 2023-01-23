#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EntityLoggedInEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::EntityLoggedInEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EntityLoggedInEventData * this_ptr))
}
