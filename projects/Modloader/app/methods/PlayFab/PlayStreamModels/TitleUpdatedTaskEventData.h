#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TitleUpdatedTaskEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TitleUpdatedTaskEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TitleUpdatedTaskEventData * this_ptr))
}
