#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TitleDeletedTaskEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TitleDeletedTaskEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TitleDeletedTaskEventData * this_ptr))
}
