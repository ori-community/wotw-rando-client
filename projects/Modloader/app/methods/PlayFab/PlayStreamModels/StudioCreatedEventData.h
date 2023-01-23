#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StudioCreatedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::StudioCreatedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StudioCreatedEventData * this_ptr))
}
