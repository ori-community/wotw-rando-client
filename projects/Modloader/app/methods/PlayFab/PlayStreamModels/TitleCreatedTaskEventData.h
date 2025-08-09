#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TitleCreatedTaskEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TitleCreatedTaskEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TitleCreatedTaskEventData* this_ptr)
}
