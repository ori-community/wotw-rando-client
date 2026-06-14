#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MaterialBasedResourceMap.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SeinGrabRope_VerticalVFXPlayer.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>

namespace app::classes::SeinGrabRope_VerticalVFXPlayer {
    IL2CPP_REGISTER_METHOD(
        0x014BE790,
        app::MoonTimeline*,
        GetVFXTimeline,
        app::SeinGrabRope_VerticalVFXPlayer* this_ptr,
        app::MaterialBasedResourceMap* resource_map,
        app::SurfaceMaterialType__Enum surface_type
    )
    IL2CPP_REGISTER_METHOD(0x014BE6D0, void, ctor, app::SeinGrabRope_VerticalVFXPlayer* this_ptr)
} // namespace app::classes::SeinGrabRope_VerticalVFXPlayer
