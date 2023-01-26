#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Constraint__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/QuaternionRotationAnimatorEntity.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimelineEntity.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>

namespace app::classes::Moon::Timeline::QuaternionRotationAnimatorEntity {
    IL2CPP_REGISTER_METHOD(0x01E7D4F0, app::Transform*, get_TransformTarget, (app::QuaternionRotationAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7D590, app::GameObject*, get_ExternalTarget, (app::QuaternionRotationAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7D640, app::Transform*, get_EffectiveTransform, (app::QuaternionRotationAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7D750, void, OnStartPlayback, (app::QuaternionRotationAnimatorEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01E7D7B0, void, SetupInitialValues, (app::QuaternionRotationAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (app::QuaternionRotationAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7D850, void, OnUpdateEntity, (app::QuaternionRotationAnimatorEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01E7D8B0, void, OnStartTimelineSample, (app::QuaternionRotationAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7D8E0, void, OnEndTimelineSample, (app::QuaternionRotationAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7D990, void, OnTimelineSample, (app::QuaternionRotationAnimatorEntity * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01E7DB20, float, GetAnimationCurveDuration, (app::QuaternionRotationAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7DD60, app::Quaternion, GetRotationAtValue, (app::QuaternionRotationAnimatorEntity * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::MoonReference_1_UnityEngine_Transform_*, GetTransformTarget, (app::QuaternionRotationAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7DE70, bool, GetCurrentValueAssociatedWithCurve, (app::QuaternionRotationAnimatorEntity * this_ptr, app::String* curve, float* value))
    IL2CPP_REGISTER_METHOD(0x01E7E130, void, SynchronizePad, (app::QuaternionRotationAnimatorEntity * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record, app::TimelineEntity* entity, app::Constraint__Enum type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::QuaternionRotationAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7E670, void, ctor, (app::QuaternionRotationAnimatorEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::QuaternionRotationAnimatorEntity
