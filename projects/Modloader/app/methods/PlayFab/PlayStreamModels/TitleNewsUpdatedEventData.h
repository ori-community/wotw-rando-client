#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TitleNewsUpdatedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TitleNewsUpdatedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TitleNewsUpdatedEventData* this_ptr)
}
