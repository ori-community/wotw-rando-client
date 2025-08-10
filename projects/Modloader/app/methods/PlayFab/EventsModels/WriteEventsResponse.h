#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WriteEventsResponse.h>

namespace app::classes::PlayFab::EventsModels::WriteEventsResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::WriteEventsResponse* this_ptr)
}
