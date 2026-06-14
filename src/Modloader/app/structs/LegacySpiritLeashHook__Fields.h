#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacySpiritLeashHook__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacySpiritLeashHook__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacySpiritLeashHook__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SpiritLeashMode__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpiritLeashMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_LegacySpiritLeashHook__Fields_DEFINED
struct ActionMethod;
struct MoonTimeline;
struct Transform;
struct EventTriggerAnimator;
struct Rigidbody;
struct IDamageReciever__Array;
struct LegacySpiritLeashHook__Fields {
    struct SaveSerialize__Fields _;
    struct ActionMethod* OnSpiritLeashAction;
    struct MoonTimeline* OnSpiritLeashTimeline;
    bool ActivatedOnStart;
    struct Transform* m_transform;
    struct Transform* m_parentTransform;
    bool m_awakeCalled;
    bool Horizontal;
    bool IsSticky;
    SpiritLeashMode__Enum SpiritLeashMode;

    bool _Activated_k__BackingField;
    float HookTargetOffset;
    struct Vector2 HookPositionOffset;
    bool m_oldActivated;
    struct EventTriggerAnimator* DeactivateTrigger;
    struct Rigidbody* PullPlatformRigidbody;
    float PullPlatformForce;
    struct Transform* BlockingCreep;
    bool CanTargetBeSustained;
    struct Vector3 m_localStartPosition;
    bool _StressTested_k__BackingField;
    bool m_isFrustumSuspended;
    bool m_timelineDeactivated;
    float _CameraTargetWeight_k__BackingField;
    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacySpiritLeashHook__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacySpiritLeashHook__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LegacySpiritLeashHook__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacySpiritLeashHook__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacySpiritLeashHook__Fields_FWDDECL)
#include <Modloader/app/structs/LegacySpiritLeashHook__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacySpiritLeashHook__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
