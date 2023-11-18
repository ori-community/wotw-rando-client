#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SurfaceMaterialTimelinePlayer.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>

namespace app::classes::SurfaceMaterialTimelinePlayer {
    IL2CPP_REGISTER_METHOD(0x00672AD0, void, Update_1, (app::SurfaceMaterialTimelinePlayer * this_ptr, bool is_moving))
    IL2CPP_REGISTER_METHOD(0x00672BD0, void, Update_2, (app::SurfaceMaterialTimelinePlayer * this_ptr, bool is_moving, app::SurfaceMaterialType__Enum surface_type))
    IL2CPP_REGISTER_METHOD(0x00672CD0, void, ForceStopAllEffects, (app::SurfaceMaterialTimelinePlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00672E80, app::MoonTimeline*, SpawnEffect, (app::SurfaceMaterialTimelinePlayer * this_ptr, app::SurfaceMaterialType__Enum surface_type))
    IL2CPP_REGISTER_METHOD(0x006732E0, void, StartEffect, (app::SurfaceMaterialTimelinePlayer * this_ptr, app::SurfaceMaterialType__Enum surface_type))
    IL2CPP_REGISTER_METHOD(0x00673440, void, StopEffect, (app::SurfaceMaterialTimelinePlayer * this_ptr, app::SurfaceMaterialType__Enum surface_type))
    IL2CPP_REGISTER_METHOD(0x00673540, void, ctor, (app::SurfaceMaterialTimelinePlayer * this_ptr))
} // namespace app::classes::SurfaceMaterialTimelinePlayer
