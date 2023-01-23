#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SnapTrapEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SnapTrapEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapEntity__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SnapTrapEntity_SnapTrapParameters.h>
#include <Modloader/app/structs/SnapTrapEntity_State__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/TrackingExclusions.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SnapTrapEntity_SnapTrapParameters_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_SnapTrapEntity_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_TrackingExclusions_DEFINED)
#define IL2CPP_STRUCT_SnapTrapEntity__Fields_DEFINED
struct SoundBankEntry;
struct DesiredUberStateBool;
struct GameObject;
struct MoonTimeline;
struct EventTriggerAnimator;
struct BoxCollider;
struct Transform;
struct Rigidbody;
struct List_1_UnityEngine_GameObject_;
struct PhysicalSystemManager;
struct AttachJointSettings;
struct ConfigurableJoint;
struct Collider__Array;
struct IDamageReciever;
struct SoundHost;
struct SnapTrapEntity__Fields {
    struct MonoBehaviour__Fields _;
    struct SoundBankEntry* SoundBank;
    struct DesiredUberStateBool* ThawedUberState;
    bool CanBeFrozen;
    struct GameObject* FrozenObj;
    struct GameObject* ThawedObj;
    struct MoonTimeline* IdleTimeline;
    struct MoonTimeline* WarnTimeline;
    struct MoonTimeline* ClosingTimeline;
    struct MoonTimeline* ClosedLoopTimeline;
    struct MoonTimeline* ChewingTimeline;
    struct MoonTimeline* OpeningAfterMissedTimeline;
    struct MoonTimeline* OpeningAfterCaughtTimeline;
    struct EventTriggerAnimator* CheckTrapTrigger;
    struct EventTriggerAnimator* ChewingDoDamageEvent;
    struct EventTriggerAnimator* ActivateOriAfterCaughtEvent;
    struct EventTriggerAnimator* FullyOpenedEvent;
    struct BoxCollider* CatchBoundsCollider;
    struct BoxCollider* ActivationTrigger;
    struct Transform* AfterCatchSeinPosition;
    struct Rigidbody* ThawedRigidBody;
    struct SnapTrapEntity_SnapTrapParameters Parameters;
    struct List_1_UnityEngine_GameObject_* CrushPlayerTriggers;
    struct PhysicalSystemManager* PhysicalSystemManager;
    struct Rigidbody* AttachToBody;
    struct AttachJointSettings* JointSettings;
    struct ConfigurableJoint* AttachmentJoint;
    struct Vector3 m_connectedAnchor;
    struct GameObject* ThawingEffect;
    struct GameObject* FreezingEffect;
    bool m_reattached;
    SuspendableMask__Enum m_suspensionMask;

    SnapTrapEntity_State__Enum m_state;

    float m_closedDuration;
    float m_restDuration;
    struct Collider__Array* m_catchResultsColliders;
    struct IDamageReciever* m_caughtDamageReceiver;
    bool m_isSuspended;
    struct Vector3 m_suspendedVelocity;
    struct SoundHost* m_soundHost;
    bool m_isScenarioInstance;
    bool m_crushDetectorsEnabled;
    struct TrackingExclusions _TrackingExclusions_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SnapTrapEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_SnapTrapEntity__Fields_FWDDECL
#include <Modloader/app/structs/AttachJointSettings.h>
#include <Modloader/app/structs/BoxCollider.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/ConfigurableJoint.h>
#include <Modloader/app/structs/DesiredUberStateBool.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDamageReciever.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PhysicalSystemManager.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SoundBankEntry.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SnapTrapEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SnapTrapEntity__Fields_FWDDECL)
#include <Modloader/app/structs/SnapTrapEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SnapTrapEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
