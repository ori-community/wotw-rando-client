#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/EulerXYZRotationTweenAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>
#include <Modloader/app/structs/TimelineEntity.h>
#include <Modloader/app/structs/Constraint__Enum.h>

namespace app::classes::Moon::Timeline::EulerXYZRotationTweenAnimator {
    IL2CPP_REGISTER_METHOD(0x01BBA1A0, app::Transform*, get_TransformTarget, (app::EulerXYZRotationTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BBA230, app::GameObject*, get_ExternalTarget, (app::EulerXYZRotationTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::EulerXYZRotationTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BBA2E0, app::Transform*, get_EffectiveTransform, (app::EulerXYZRotationTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BBA3B0, void, OnStartPlayback, (app::EulerXYZRotationTweenAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01BBA3C0, void, SetupInitialValues, (app::EulerXYZRotationTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471FBA0, EulerXYZRotationTweenAnimator_SetupInitialValues__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (app::EulerXYZRotationTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BBA7B0, void, OnUpdateEntity, (app::EulerXYZRotationTweenAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01BBAA50, app::Quaternion, GetCurrentRotation, (app::EulerXYZRotationTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BBACB0, bool, TweenHasFinished, (app::EulerXYZRotationTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BBACD0, void, OnDrawGizmos, (app::EulerXYZRotationTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB6AB0, bool, HasFinished, (app::EulerXYZRotationTweenAnimator * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::MoonReference_1_UnityEngine_Transform_*, GetTransformTarget, (app::EulerXYZRotationTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BBB530, void, SynchronizePad, (app::EulerXYZRotationTweenAnimator * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record, app::TimelineEntity* entity, app::Constraint__Enum type))
    IL2CPP_REGISTER_METHOD(0x01BBB640, bool, ApproximateEvent, (app::EulerXYZRotationTweenAnimator * this_ptr, int32_t evt, float* time))
    IL2CPP_REGISTER_METHOD(0x01BBB890, void, ctor, (app::EulerXYZRotationTweenAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::EulerXYZRotationTweenAnimator
