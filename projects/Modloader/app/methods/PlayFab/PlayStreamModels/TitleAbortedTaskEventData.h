#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TitleAbortedTaskEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TitleAbortedTaskEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TitleAbortedTaskEventData * this_ptr))
}
