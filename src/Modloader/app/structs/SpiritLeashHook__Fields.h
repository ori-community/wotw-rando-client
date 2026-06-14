#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritLeashHook__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritLeashHook__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLeashHook__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SpiritLeashMode__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpiritLeashMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SpiritLeashHook__Fields_DEFINED
struct Transform;
struct EventTriggerAnimator;
struct IDamageReciever__Array;
struct SpiritLeashHook__Fields {
    struct MonoBehaviour__Fields _;
    bool ActivatedOnStart;
    struct Transform* m_transform;
    bool Horizontal;
    bool IsSticky;
    SpiritLeashMode__Enum SpiritLeashMode;

    bool _Activated_k__BackingField;
    float HookTargetOffset;
    struct Vector2 HookPositionOffset;
    bool m_oldActivated;
    struct EventTriggerAnimator* DeactivateTrigger;
    bool CanTargetBeSustained;
    struct Vector3 m_localStartPosition;
    bool m_registered;
    bool _StressTested_k__BackingField;
    float _CameraTargetWeight_k__BackingField;
    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritLeashHook__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritLeashHook__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiritLeashHook__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLeashHook__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritLeashHook__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritLeashHook__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritLeashHook__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
