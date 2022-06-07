#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::PositionTweenAnimator {
    IL2CPP_REGISTER_METHOD(0x01E7AF70, app::Transform *, get_TransformTarget, (app::PositionTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7B090, app::GameObject *, get_ExternalTarget, (app::PositionTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7B120, app::Transform *, get_EffectiveTransform, (app::PositionTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7B2F0, void, OnStartPlayback, (app::PositionTweenAnimator * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01E7B3C0, void, SetupInitialValues, (app::PositionTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04746E90, PositionTweenAnimator_SetupInitialValues__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (app::PositionTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7B620, void, OnUpdateEntity, (app::PositionTweenAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00658AB0, bool, HasFinished, (app::PositionTweenAnimator * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::MoonReference_1_UnityEngine_GameObject_ *, GetGameObjectTarget, (app::PositionTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7BA90, float, GetTweenNormalizedValue, (app::PositionTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7BEE0, void, SynchronizeData, (app::PositionTweenAnimator * this_ptr, app::MoonTimeline * timeline, app::TimelineEntityRecord * record))
    IL2CPP_REGISTER_METHOD(0x01E7C1C0, void, SynchronizePad, (app::PositionTweenAnimator * this_ptr, app::MoonTimeline * timeline, app::TimelineEntityRecord * record, app::TimelineEntity * entity, app::Constraint__Enum type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::PositionTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7C310, app::GameObject *, GetDynamicGraphicTarget, (app::PositionTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7C3E0, bool, ApproximateEvent, (app::PositionTweenAnimator * this_ptr, int32_t evt, float * time))
    IL2CPP_REGISTER_METHOD(0x01E7C630, void, ctor, (app::PositionTweenAnimator * this_ptr))
}
