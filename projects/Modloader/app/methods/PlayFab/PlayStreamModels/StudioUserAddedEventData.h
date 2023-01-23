#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StudioUserAddedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::StudioUserAddedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StudioUserAddedEventData * this_ptr))
}
