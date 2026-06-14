#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MaterialBasedResourceMap.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SeinGrabRope_SwingVFXPlayer.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>

namespace app::classes::SeinGrabRope_SwingVFXPlayer {
    IL2CPP_REGISTER_METHOD(
        0x014BE6E0,
        app::MoonTimeline*,
        GetVFXTimeline,
        app::SeinGrabRope_SwingVFXPlayer* this_ptr,
        app::MaterialBasedResourceMap* resource_map,
        app::SurfaceMaterialType__Enum surface_type
    )
    IL2CPP_REGISTER_METHOD(0x014BE6D0, void, ctor, app::SeinGrabRope_SwingVFXPlayer* this_ptr)
} // namespace app::classes::SeinGrabRope_SwingVFXPlayer
