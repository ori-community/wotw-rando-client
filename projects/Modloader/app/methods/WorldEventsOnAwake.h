#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WorldEventsOnAwake.h>

namespace app::classes::WorldEventsOnAwake {
    IL2CPP_REGISTER_METHOD(0x00582920, void, Apply, app::WorldEventsOnAwake* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00582A70, void, ctor, app::WorldEventsOnAwake* this_ptr)
} // namespace app::classes::WorldEventsOnAwake
