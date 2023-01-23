#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WorldEventsRuntime.h>
#include <Modloader/app/structs/Archive.h>

namespace app::classes::WorldEventsRuntime {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::WorldEventsRuntime * this_ptr, int32_t default_value))
    IL2CPP_REGISTER_METHOD(0x00582BD0, void, Serialize, (app::WorldEventsRuntime * this_ptr, app::Archive* ar))
} // namespace app::classes::WorldEventsRuntime
