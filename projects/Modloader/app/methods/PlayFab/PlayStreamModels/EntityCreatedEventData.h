#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityCreatedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::EntityCreatedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EntityCreatedEventData * this_ptr))
}
