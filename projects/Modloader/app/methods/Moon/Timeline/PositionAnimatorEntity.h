#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/PositionAnimatorEntity.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>
#include <Modloader/app/structs/TimelineEntity.h>
#include <Modloader/app/structs/Constraint__Enum.h>
#include <Modloader/app/structs/SetupStateModifierDataType__Enum.h>
#include <Modloader/app/structs/SetupControllerStateHolder.h>
#include <Modloader/app/structs/SetupStateModifier.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>

namespace app::classes::Moon::Timeline::PositionAnimatorEntity {
    IL2CPP_REGISTER_METHOD(0x01E794A0, app::Transform*, get_TransformTarget, (app::PositionAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E79530, app::GameObject*, get_ExternalTarget, (app::PositionAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E795E0, app::Transform*, get_EffectiveTransform, (app::PositionAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FDD20, float, get_DeltaTimeScale, (app::PositionAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FDD30, void, set_DeltaTimeScale, (app::PositionAnimatorEntity * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnValidate, (app::PositionAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E79730, void, OnStartPlayback, (app::PositionAnimatorEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01E79880, void, OnStopPlayback, (app::PositionAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (app::PositionAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E79890, void, OnUpdateEntity, (app::PositionAnimatorEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01E79B80, app::Vector3, GetOffsetAtValue, (app::PositionAnimatorEntity * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01E79CF0, bool, GetCurrentValueAssociatedWithCurve, (app::PositionAnimatorEntity * this_ptr, app::String* curve, float* value))
    IL2CPP_REGISTER_METHOD(0x01E79F60, void, OnBeforeSerialize, (app::PositionAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::MoonReference_1_UnityEngine_Transform_*, GetTransformTarget, (app::PositionAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7A890, void, SynchronizeData, (app::PositionAnimatorEntity * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record))
    IL2CPP_REGISTER_METHOD(0x01E7A9D0, void, SynchronizePad, (app::PositionAnimatorEntity * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record, app::TimelineEntity* entity, app::Constraint__Enum type))
    IL2CPP_REGISTER_METHOD(0x01BB9E30, app::GameObject*, get_ObservedTarget, (app::PositionAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00910BD0, app::SetupStateModifierDataType__Enum, get_ObservedModifierType, (app::PositionAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00855600, int32_t, get_FromStateGuid, (app::PositionAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A15650, void, set_FromStateGuid, (app::PositionAnimatorEntity * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x008519C0, int32_t, get_ToStateGuid, (app::PositionAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008519D0, void, set_ToStateGuid, (app::PositionAnimatorEntity * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartObserving, (app::PositionAnimatorEntity * this_ptr, app::SetupControllerStateHolder* controller, app::SetupStateModifier* modifier))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopObserving, (app::PositionAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSetupChanged, (app::PositionAnimatorEntity * this_ptr, app::SetupControllerStateHolder* controller, app::SetupStateModifier* modifier))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetSerializedKeys, (app::PositionAnimatorEntity * this_ptr, app::SetupControllerStateHolder* controller, app::SetupStateModifier* modifier))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::PositionAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7ADD0, void, GetManagedEarlyZDynamicGraphicTargets, (app::PositionAnimatorEntity * this_ptr, app::List_1_UnityEngine_GameObject_* targets))
    IL2CPP_REGISTER_METHOD(0x01E7AED0, void, ctor, (app::PositionAnimatorEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::PositionAnimatorEntity
