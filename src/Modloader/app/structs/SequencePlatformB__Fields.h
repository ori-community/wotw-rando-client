#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SequencePlatformB__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SequencePlatformB__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SequencePlatformB__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_SequencePlatformB__Fields_DEFINED
struct SequencePlatformB_SequencePlatformOnTouchSettings;
struct SequencePlatformB_SequencePlatformOnActivatedSettings;
struct SequencePlatformB_SequencePlatformColliderSettings;
struct SequencePlatformB;
struct SoundProvider;
struct FlipPlantLogic__Array;
struct BaseAnimator__Array;
struct Collider__Array;
struct AnimatingFloat;
struct SequencePlatformB__Fields {
    struct SaveSerialize__Fields _;
    bool VisibleAtStart;
    struct SequencePlatformB_SequencePlatformOnTouchSettings* OnTouchSettings;
    struct SequencePlatformB_SequencePlatformOnActivatedSettings* OnActivatedSettings;
    struct SequencePlatformB_SequencePlatformColliderSettings* ColliderSettings;
    struct SequencePlatformB* NextPlatform;
    struct SoundProvider* OnActivateSoundProvider;
    struct SoundProvider* OnDeactivateSoundProvider;
    struct FlipPlantLogic__Array* m_flipPlants;
    struct BaseAnimator__Array* BaseAnimators;
    struct Collider__Array* m_colliders;
    struct AnimatingFloat* m_animatingFloat;
    bool m_touched;
    bool m_activated;
    float m_activatedTime;
    float m_touchedTime;
    float m_delayTillVisible;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SequencePlatformB__Fields_FWDDECL)
#define IL2CPP_STRUCT_SequencePlatformB__Fields_FWDDECL
#include <Modloader/app/structs/AnimatingFloat.h>
#include <Modloader/app/structs/BaseAnimator__Array.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/FlipPlantLogic__Array.h>
#include <Modloader/app/structs/SequencePlatformB.h>
#include <Modloader/app/structs/SequencePlatformB_SequencePlatformColliderSettings.h>
#include <Modloader/app/structs/SequencePlatformB_SequencePlatformOnActivatedSettings.h>
#include <Modloader/app/structs/SequencePlatformB_SequencePlatformOnTouchSettings.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SequencePlatformB__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SequencePlatformB__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SequencePlatformB__Fields_FWDDECL)
#include <Modloader/app/structs/SequencePlatformB__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SequencePlatformB__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
