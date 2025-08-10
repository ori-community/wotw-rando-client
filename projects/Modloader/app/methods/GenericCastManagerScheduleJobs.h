#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GenericCastManagerScheduleJobs.h>

namespace app::classes::GenericCastManagerScheduleJobs {
    IL2CPP_REGISTER_METHOD(0x00E05F00, void, Update, app::GenericCastManagerScheduleJobs* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E06000, void, FixedUpdate, app::GenericCastManagerScheduleJobs* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::GenericCastManagerScheduleJobs* this_ptr)
} // namespace app::classes::GenericCastManagerScheduleJobs
