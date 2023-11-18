#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ScaleAnimatorEntity.h>
#include <Modloader/app/structs/SetupControllerStateHolder.h>
#include <Modloader/app/structs/SetupStateModifier.h>
#include <Modloader/app/structs/SetupStateModifierDataType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::Timeline::ScaleAnimatorEntity {
    IL2CPP_REGISTER_METHOD(0x01E7E8B0, app::Transform*, get_TransformTarget, (app::ScaleAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7E940, app::GameObject*, get_ExternalTarget, (app::ScaleAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::ScaleAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7E9F0, app::Transform*, get_EffectiveTransform, (app::ScaleAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7EB00, void, OnStartPlayback, (app::ScaleAnimatorEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (app::ScaleAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7EC80, void, OnUpdateEntity, (app::ScaleAnimatorEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01E7EFF0, float, GetAnimationCurveDuration, (app::ScaleAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7F190, app::Vector3, GetOffsetAtValue, (app::ScaleAnimatorEntity * this_ptr, float value, app::Vector3 starting_scale))
    IL2CPP_REGISTER_METHOD(0x01E7F2A0, app::Vector3, GetMultiplyAtValue, (app::ScaleAnimatorEntity * this_ptr, float value, app::Vector3 starting_scale))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmos, (app::ScaleAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7F390, bool, GetCurrentValueAssociatedWithCurve, (app::ScaleAnimatorEntity * this_ptr, app::String* curve, float* value))
    IL2CPP_REGISTER_METHOD(0x01E7F600, void, SynchronizeData, (app::ScaleAnimatorEntity * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record))
    IL2CPP_REGISTER_METHOD(0x01BB9E30, app::GameObject*, get_ObservedTarget, (app::ScaleAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB4D20, app::SetupStateModifierDataType__Enum, get_ObservedModifierType, (app::ScaleAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008519C0, int32_t, get_FromStateGuid, (app::ScaleAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008519D0, void, set_FromStateGuid, (app::ScaleAnimatorEntity * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x003FFCE0, int32_t, get_ToStateGuid, (app::ScaleAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D4DBA0, void, set_ToStateGuid, (app::ScaleAnimatorEntity * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartObserving, (app::ScaleAnimatorEntity * this_ptr, app::SetupControllerStateHolder* controller, app::SetupStateModifier* modifier))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopObserving, (app::ScaleAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSetupChanged, (app::ScaleAnimatorEntity * this_ptr, app::SetupControllerStateHolder* controller, app::SetupStateModifier* modifier))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetSerializedKeys, (app::ScaleAnimatorEntity * this_ptr, app::SetupControllerStateHolder* controller, app::SetupStateModifier* modifier))
    IL2CPP_REGISTER_METHOD(0x01E7F7C0, void, ctor, (app::ScaleAnimatorEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::ScaleAnimatorEntity
