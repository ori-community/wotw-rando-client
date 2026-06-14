#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MaterialBasedResourceMap.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SeinGrabRope_HorizontalVFXPlayer.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>

namespace app::classes::SeinGrabRope_HorizontalVFXPlayer {
    IL2CPP_REGISTER_METHOD(
        0x014BE620,
        app::MoonTimeline*,
        GetVFXTimeline,
        app::SeinGrabRope_HorizontalVFXPlayer* this_ptr,
        app::MaterialBasedResourceMap* resource_map,
        app::SurfaceMaterialType__Enum surface_type
    )
    IL2CPP_REGISTER_METHOD(0x014BE6D0, void, ctor, app::SeinGrabRope_HorizontalVFXPlayer* this_ptr)
} // namespace app::classes::SeinGrabRope_HorizontalVFXPlayer
