#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PhysicalSystemManager.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/PhysicalSystemState.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/RigidbodyState.h>
#include <Modloader/app/structs/IPhysicsUpdateHandler.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/RigidbodyState__Array.h>
#include <Modloader/app/structs/ApplyTurbulentForce__Array.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/ApplyForceToPhysicsSystem_ExplosionSettings.h>
#include <Modloader/app/structs/RecordableParsingGroup__Enum.h>
#include <Modloader/app/structs/Rigidbody__Array.h>

namespace app::classes::PhysicalSystemManager {
    IL2CPP_REGISTER_METHOD(0x014EF460, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x014EF540, bool, get_UseTimesliceEffective, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014EF600, void, set_UseTimesliceEffective, (app::PhysicalSystemManager * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x014EF610, bool, get_UseMoonFlags, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012399F0, bool, get_AreBodiesEnabled, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014EF6F0, app::Bounds, get_WorldSpaceBoundingBox, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014EF920, void, set_WorldSpaceBoundingBox, (app::PhysicalSystemManager * this_ptr, app::Bounds value))
    IL2CPP_REGISTER_METHOD(0x014EFB50, app::Bounds, get_LocalSpaceBoundingBox, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014EFBF0, void, set_LocalSpaceBoundingBox, (app::PhysicalSystemManager * this_ptr, app::Bounds value))
    IL2CPP_REGISTER_METHOD(0x014EFC90, void, RegisterInstanciatedRigidbody, (app::PhysicalSystemManager * this_ptr, app::Rigidbody* dynamic_rigidbody))
    IL2CPP_REGISTER_METHOD(0x014F01E0, app::PhysicalSystemState*, GetSystemState_1, (app::PhysicalSystemManager * this_ptr, int32_t state_g_u_i_d))
    IL2CPP_REGISTER_METHOD(0x014F0280, app::PhysicalSystemState*, GetSystemState_2, (app::PhysicalSystemManager * this_ptr, app::String* state_name))
    IL2CPP_REGISTER_METHOD(0x014F03E0, bool, HasSystemState, (app::PhysicalSystemManager * this_ptr, int32_t state_g_u_i_d))
    IL2CPP_REGISTER_METHOD(0x014F0460, void, ApplyState_1, (app::PhysicalSystemManager * this_ptr, int32_t state_g_u_i_d, bool apply_immediate, bool force_refresh_joints))
    IL2CPP_REGISTER_METHOD(0x014F0720, void, ApplyStateDynamic_1, (app::PhysicalSystemManager * this_ptr, app::PhysicalSystemState* state))
    IL2CPP_REGISTER_METHOD(0x014F0760, void, ApplyStateDynamic_2, (app::PhysicalSystemManager * this_ptr, app::String* state_name))
    IL2CPP_REGISTER_METHOD(0x014F08A0, void, ApplyState_2, (app::PhysicalSystemManager * this_ptr, app::PhysicalSystemState* state, bool timesliced, bool alter_active_state, bool force_refresh_joints))
    IL2CPP_REGISTER_METHOD(0x014F1030, void, ResetPhysicalSystemToTheOriginalState, (app::PhysicalSystemManager * this_ptr, bool alter_active_state))
    IL2CPP_REGISTER_METHOD(0x014F1290, void, ResetPhysicalSystemToTheLastState, (app::PhysicalSystemManager * this_ptr, bool alter_active_state))
    IL2CPP_REGISTER_METHOD(0x014F1450, void, ISceneRootPostEnableObserver_OnSceneRootPostEnable, (app::PhysicalSystemManager * this_ptr, app::SceneRoot* scene_root))
    IL2CPP_REGISTER_METHOD(0x014F1550, void, ISceneRootPreEnableObserver_OnSceneRootPreEnable, (app::PhysicalSystemManager * this_ptr, app::SceneRoot* scene_root))
    IL2CPP_REGISTER_METHOD(0x014F17C0, void, Awake, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F1B20, void, OnEnable, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F2030, void, Start, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F21E0, void, OnDisable, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F24C0, void, DisableBodies, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F29A0, void, ContinueSleeping, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F2BA0, void, PutRigidBodyToSleepNoCaching, (app::PhysicalSystemManager * this_ptr, app::RigidbodyState* rigidbody_state))
    IL2CPP_REGISTER_METHOD(0x014F2DB0, void, UpdateCachedBoundingBox, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F2DF0, void, OnDestroy, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F2FC0, void, SaveOldPosition, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00875720, bool, get_IsOldPositionSaved, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F30B0, bool, get_IsPositionChanged, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F3240, void, SaveOldInstanceId, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00603D60, bool, get_IsOldInstanceIdSaved, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F32D0, bool, get_IsInstanceIdChanged, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, AddUpdateHandler, (app::PhysicalSystemManager * this_ptr, app::IPhysicsUpdateHandler* update_handler))
    IL2CPP_REGISTER_METHOD(0x014F3320, void, BreakJoints, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F3640, void, Disable, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F3910, void, IFrustumOptimizable_OnFrustumEnter, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F3A80, void, IFrustumOptimizable_OnFrustumExit, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F3B60, void, FrustumDisable, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F3C10, void, FrustumEnable, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetSimulationEnabled, (app::PhysicalSystemManager * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x008519A0, bool, get_InsideFrustum, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F3CC0, app::Bounds, get_Bounds, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3CA60, bool, get_IsSuspended, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F3CE0, void, set_IsSuspended, (app::PhysicalSystemManager * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x014F3CF0, app::SuspendableMask__Enum, ISuspendable_get_Mask, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F3D00, void, ISuspendable_set_Mask, (app::PhysicalSystemManager * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x014F3D10, void, Suspend, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F4390, void, Resume, (app::PhysicalSystemManager * this_ptr, bool instant))
    IL2CPP_REGISTER_METHOD(0x014F4980, bool, ShouldActivateAsap, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F4B70, bool, IsTimesliceTaskSetUp, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F4BA0, void, SuspendRigidbody, (app::PhysicalSystemManager * this_ptr, app::RigidbodyState* rigidbody_state))
    IL2CPP_REGISTER_METHOD(0x014F4FD0, void, ResumeRigidbody, (app::PhysicalSystemManager * this_ptr, app::RigidbodyState* rigidbody_state))
    IL2CPP_REGISTER_METHOD(0x014F5370, app::RigidbodyState__Array*, GetRigidbodyStates, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::ApplyTurbulentForce__Array*, get_ApplyTurbulentForces, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065FBE0, app::RigidbodyState__Array*, get_CachedRigidbodyStates, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065FBF0, void, set_CachedRigidbodyStates, (app::PhysicalSystemManager * this_ptr, app::RigidbodyState__Array* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetOwnership, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F5390, void, OnLateUpdate, (app::PhysicalSystemManager * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x014F5590, void, VeryLateUpdate, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047466F0, PhysicalSystemManager_VeryLateUpdate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014F57A0, void, OnFixedUpdate, (app::PhysicalSystemManager * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x014F6610, app::PhysicalSystemState*, get_LastState, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F6650, void, FreezeRigidbodies, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F6870, void, UnfreezeRigidbodies, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F6920, void, OnSceneRootPreDisable, (app::PhysicalSystemManager * this_ptr, app::SceneRoot* scene_root))
    IL2CPP_REGISTER_METHOD(0x014F6BF0, void, SetRigidbodyInertiaOverride, (app::PhysicalSystemManager * this_ptr, app::Rigidbody* body, bool override_inertia, app::Vector3 inertia_tensor))
    IL2CPP_REGISTER_METHOD(0x014F6F60, void, ResetActivationTask, (app::PhysicalSystemManager * this_ptr, bool activate))
    IL2CPP_REGISTER_METHOD(0x014F74C0, void, NotifyPreDisableObservers, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F7660, app::IEnumerator*, TimeSliceDisablePhysics, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F77B0, void, RigidbodyResetKinematicOnTimeslice, (app::PhysicalSystemManager * this_ptr, app::RigidbodyState* state))
    IL2CPP_REGISTER_METHOD(0x014F7A90, app::IEnumerator*, TimeSliceActivatePhysics, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F7BE0, void, SetIsReady, (app::PhysicalSystemManager * this_ptr, bool is_ready))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IEnablingModifier_get_ShouldDisable, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IEnablingModifier_get_ShouldEnable, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IEnablingModifier_get_ShouldChildrenEnable, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IEnablingModifier_get_ShouldSetMoonReady, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F7E80, void, Explode, (app::PhysicalSystemManager * this_ptr, app::ApplyForceToPhysicsSystem_ExplosionSettings explosion, float multiply_force))
    IL2CPP_REGISTER_METHOD(0x014F8400, void, IFrustumEnabled_OnFrustumInstantEnabled, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::RecordableParsingGroup__Enum, IRecordable_get_ParsingGroup, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F84F0, void, SetIterations, (app::PhysicalSystemManager * this_ptr, app::Rigidbody__Array* bodies, int32_t iterations))
    IL2CPP_REGISTER_METHOD(0x014F85B0, void, Prewarm, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F8640, void, ctor, (app::PhysicalSystemManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014F8C80, void, cctor, ())
} // namespace app::classes::PhysicalSystemManager
