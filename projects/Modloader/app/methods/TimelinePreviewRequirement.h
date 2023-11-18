#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TimelinePreviewRequirement.h>
#include <Modloader/app/structs/IDesiredUberState.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::TimelinePreviewRequirement {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::TimelinePreviewRequirement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F7700, app::IDesiredUberState*, GetRequirementsForTimeline, (app::TimelinePreviewRequirement * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TimelinePreviewRequirement * this_ptr))
} // namespace app::classes::TimelinePreviewRequirement
