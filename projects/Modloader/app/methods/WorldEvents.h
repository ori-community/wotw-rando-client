#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WorldEvents.h>

namespace app::classes::WorldEvents {
    IL2CPP_REGISTER_METHOD(0x00581340, app::String*, GetNameFromID, (app::WorldEvents * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x005815A0, int32_t, GetIDFromName, (app::WorldEvents * this_ptr, app::String* event_name))
    IL2CPP_REGISTER_METHOD(0x00581850, void, ctor, (app::WorldEvents * this_ptr))
} // namespace app::classes::WorldEvents
