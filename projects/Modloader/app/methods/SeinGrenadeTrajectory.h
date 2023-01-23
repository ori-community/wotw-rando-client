#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinGrenadeTrajectory.h>

namespace app::classes::SeinGrenadeTrajectory {
    IL2CPP_REGISTER_METHOD(0x014D9200, void, Awake, (app::SeinGrenadeTrajectory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014D9210, void, Start, (app::SeinGrenadeTrajectory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443C10, void, HideTrajectory, (app::SeinGrenadeTrajectory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014D92F0, void, ShowTrajectory, (app::SeinGrenadeTrajectory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006514B0, bool, IsShowingTrajectory, (app::SeinGrenadeTrajectory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014D93F0, void, Update, (app::SeinGrenadeTrajectory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014D9410, void, CalculateTrajectory, (app::SeinGrenadeTrajectory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014D9880, void, UpdateLineRendererPoints, (app::SeinGrenadeTrajectory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014D9A50, void, ctor, (app::SeinGrenadeTrajectory * this_ptr))
} // namespace app::classes::SeinGrenadeTrajectory
