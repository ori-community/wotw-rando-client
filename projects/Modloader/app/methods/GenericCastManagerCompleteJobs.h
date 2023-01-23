#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GenericCastManagerCompleteJobs.h>

namespace app::classes::GenericCastManagerCompleteJobs {
    IL2CPP_REGISTER_METHOD(0x00E05DE0, void, FixedUpdate, (app::GenericCastManagerCompleteJobs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AED40, void, Update, (app::GenericCastManagerCompleteJobs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::GenericCastManagerCompleteJobs * this_ptr))
} // namespace app::classes::GenericCastManagerCompleteJobs
