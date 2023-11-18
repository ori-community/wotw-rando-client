#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StudioUserRemovedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::StudioUserRemovedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StudioUserRemovedEventData * this_ptr))
}
