#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventContents.h>

namespace app::classes::PlayFab::EventsModels::EventContents {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EventContents * this_ptr))
}
