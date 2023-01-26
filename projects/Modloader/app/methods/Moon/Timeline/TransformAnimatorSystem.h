#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TransformAnimatorSystem.h>
#include <Modloader/app/structs/HandoverMode__Enum.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Space__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/TransformAnimatorSystem_ObjectState.h>
#include <Modloader/app/structs/TransformAnimatorSystem_PositionModification.h>
#include <Modloader/app/structs/UpdateCategory__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::Timeline::TransformAnimatorSystem {
    IL2CPP_REGISTER_METHOD(0x0311C670, app::TransformAnimatorSystem*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x0311C820, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x0311C8A0, app::TransformAnimatorSystem_PositionModification, CreatePositionModification, (app::TransformAnimatorSystem * this_ptr, app::Transform* t, app::Vector3 position, app::Space__Enum space))
    IL2CPP_REGISTER_METHOD(0x0311CB50, void, SubmitDynamicPosition, (app::TransformAnimatorSystem * this_ptr, app::Transform* t, app::Vector3 position, app::Space__Enum space, app::HandoverMode__Enum handover_mode, app::UpdateCategory__Enum category))
    IL2CPP_REGISTER_METHOD(0x0311CE70, void, SubmitStaticPosition, (app::TransformAnimatorSystem * this_ptr, app::Transform* t, app::Vector3 position, app::Space__Enum space, app::UpdateCategory__Enum category, bool immediately_apply))
    IL2CPP_REGISTER_METHOD(0x0311D030, void, SubmitDynamicScale, (app::TransformAnimatorSystem * this_ptr, app::Transform* t, app::Vector3 scale, app::HandoverMode__Enum handover_mode, app::UpdateCategory__Enum category))
    IL2CPP_REGISTER_METHOD(0x0311D270, void, SubmitStaticScale, (app::TransformAnimatorSystem * this_ptr, app::Transform* t, app::Vector3 scale, app::UpdateCategory__Enum category))
    IL2CPP_REGISTER_METHOD(0x0311D390, void, SubmitDynamicRotation, (app::TransformAnimatorSystem * this_ptr, app::Transform* t, app::Quaternion rotation, app::HandoverMode__Enum handover_mode, app::UpdateCategory__Enum category, app::Space__Enum space))
    IL2CPP_REGISTER_METHOD(0x0311D5F0, void, SubmitStaticRotation, (app::TransformAnimatorSystem * this_ptr, app::Transform* t, app::Quaternion rotation, app::UpdateCategory__Enum category, app::Space__Enum space, bool immediately_apply))
    IL2CPP_REGISTER_METHOD(0x0311D760, app::TransformAnimatorSystem_ObjectState*, GetObjectState, (app::TransformAnimatorSystem * this_ptr, app::Transform* t, app::UpdateCategory__Enum category, bool force_update))
    IL2CPP_REGISTER_METHOD(0x0311DCA0, app::Vector3, GetStaticPosition, (app::TransformAnimatorSystem * this_ptr, app::Transform* t, app::Space__Enum space))
    IL2CPP_REGISTER_METHOD(0x0311DE80, app::Vector3, GetStaticScale, (app::TransformAnimatorSystem * this_ptr, app::Transform* t))
    IL2CPP_REGISTER_METHOD(0x0311DFC0, app::Quaternion, GetStaticRotation, (app::TransformAnimatorSystem * this_ptr, app::Transform* t))
    IL2CPP_REGISTER_METHOD(0x0311E0F0, bool, GetHandoverPosition, (app::TransformAnimatorSystem * this_ptr, app::Transform* t, app::Vector3* value, app::Space__Enum space))
    IL2CPP_REGISTER_METHOD(0x0311E240, bool, GetHandoverScale, (app::TransformAnimatorSystem * this_ptr, app::Transform* t, app::Vector3* value))
    IL2CPP_REGISTER_METHOD(0x0311E350, bool, GetHandoverRotation, (app::TransformAnimatorSystem * this_ptr, app::Transform* t, app::Quaternion* value))
    IL2CPP_REGISTER_METHOD(0x0311E460, void, ApplyObjectState_1, (app::TransformAnimatorSystem * this_ptr, app::TransformAnimatorSystem_ObjectState* object_state, bool force_apply))
    IL2CPP_REGISTER_METHOD(0x0311E490, void, ApplyObjectState_2, (app::TransformAnimatorSystem * this_ptr, app::TransformAnimatorSystem_ObjectState* object_state, bool* state_can_be_removed, bool force_apply))
    IL2CPP_REGISTER_METHOD(0x0311E7F0, void, ClearStatesFor, (app::TransformAnimatorSystem * this_ptr, app::List_1_System_Int32_* objects))
    IL2CPP_REGISTER_METHOD(0x0311E8E0, void, ClearAllStates, (app::TransformAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0311E9F0, void, RestoreStateFor, (app::TransformAnimatorSystem * this_ptr, app::Transform* target))
    IL2CPP_REGISTER_METHOD(0x0311ECC0, void, ClearState, (app::TransformAnimatorSystem * this_ptr, app::TransformAnimatorSystem_ObjectState* object_state))
    IL2CPP_REGISTER_METHOD(0x0311EE90, void, UpdateTrackedObjects, (app::TransformAnimatorSystem * this_ptr, app::List_1_System_Int32_* objects, bool clear_state_holders))
    IL2CPP_REGISTER_METHOD(0x0311F1C0, void, OnFixedUpdate, (app::TransformAnimatorSystem * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0311F1D0, void, OnUpdate, (app::TransformAnimatorSystem * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x0311F1E0, app::TransformAnimatorSystem_ObjectState*, AcquireObjectStateFromPool, (app::TransformAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0311F400, void, ReturnObjectStateToPool, (app::TransformAnimatorSystem * this_ptr, app::TransformAnimatorSystem_ObjectState* os))
    IL2CPP_REGISTER_METHOD(0x0311F4A0, void, ctor, (app::TransformAnimatorSystem * this_ptr))
} // namespace app::classes::Moon::Timeline::TransformAnimatorSystem
