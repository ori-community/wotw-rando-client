#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MeshTrail.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MeshTrailAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>

namespace app::classes::MeshTrailAnimator {
    IL2CPP_REGISTER_METHOD(0x031119D0, app::MeshTrail*, get_MeshTrail, (app::MeshTrailAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03111A60, void, OnStartPlayback, (app::MeshTrailAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x03111BD0, void, OnUpdateEntity, (app::MeshTrailAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x03111CE0, void, OnStopPlayback, (app::MeshTrailAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03111DB0, void, SynchronizeData, (app::MeshTrailAnimator * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record))
    IL2CPP_REGISTER_METHOD(0x03111E40, void, ctor, (app::MeshTrailAnimator * this_ptr))
} // namespace app::classes::MeshTrailAnimator
