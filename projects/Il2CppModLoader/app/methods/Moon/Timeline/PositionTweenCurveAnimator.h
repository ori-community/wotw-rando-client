#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Timeline::PositionTweenCurveAnimator {
    IL2CPP_REGISTER_METHOD(0x01E7C9B0, void, OnStartPlayback, (app::PositionTweenCurveAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (app::PositionTweenCurveAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7CA90, void, OnUpdateEntity, (app::PositionTweenCurveAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01E7D0F0, void, SynchronizeData, (app::PositionTweenCurveAnimator * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record))
    IL2CPP_REGISTER_METHOD(0x01E7D3D0, void, SynchronizePad, (app::PositionTweenCurveAnimator * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record, app::TimelineEntity* entity, app::Constraint__Enum type))
    IL2CPP_REGISTER_METHOD(0x01E7D4E0, void, ctor, (app::PositionTweenCurveAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::PositionTweenCurveAnimator
