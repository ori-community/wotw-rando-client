#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MasterTimelineCompleted.h>

namespace app::classes::MasterTimelineCompleted {
    IL2CPP_REGISTER_METHOD(0x00A11820, void, FixedUpdate, (app::MasterTimelineCompleted * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MasterTimelineCompleted * this_ptr))
} // namespace app::classes::MasterTimelineCompleted
