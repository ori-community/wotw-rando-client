#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventLocation.h>

namespace app::classes::PlayFab::PlayStreamModels::EventLocation {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EventLocation* this_ptr)
}
