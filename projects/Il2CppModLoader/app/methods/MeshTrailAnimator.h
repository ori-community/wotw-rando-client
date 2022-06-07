#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MeshTrailAnimator {
    IL2CPP_REGISTER_METHOD(0x031119D0, app::MeshTrail *, get_MeshTrail, (app::MeshTrailAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03111A60, void, OnStartPlayback, (app::MeshTrailAnimator * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x03111BD0, void, OnUpdateEntity, (app::MeshTrailAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x03111CE0, void, OnStopPlayback, (app::MeshTrailAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03111DB0, void, SynchronizeData, (app::MeshTrailAnimator * this_ptr, app::MoonTimeline * timeline, app::TimelineEntityRecord * record))
    IL2CPP_REGISTER_METHOD(0x03111E40, void, ctor, (app::MeshTrailAnimator * this_ptr))
}
