#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TitleQueueConfigUpdatedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TitleQueueConfigUpdatedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TitleQueueConfigUpdatedEventData * this_ptr))
}
