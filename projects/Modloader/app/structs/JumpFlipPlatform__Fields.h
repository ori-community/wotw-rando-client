#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumpFlipPlatform__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumpFlipPlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpFlipPlatform__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_JumpFlipPlatform__Fields_DEFINED
struct LegacyTransparancyAnimator;
struct List_1_LegacyAnimator_;
struct List_1_BaseAnimator_;
struct Collider;
struct ActionMethod;
struct SoundProvider;
struct FlipPlantLogic__Array;
struct JumpFlipPlatform__Fields {
    struct SaveSerialize__Fields _;
    bool ShowAtStart;
    bool ToggleOnJump;
    bool ToggleOnDoubleJump;
    bool ToggleOnWallJump;
    bool ToggleOnChargeJump;
    bool m_active;
    struct LegacyTransparancyAnimator* m_transparancyAnimator;
    struct List_1_LegacyAnimator_* Animators;
    struct List_1_BaseAnimator_* BaseAnimators;
    struct Collider* m_collider;
    struct ActionMethod* OnActivateAction;
    struct ActionMethod* OnDeactivateAction;
    struct SoundProvider* OnActivateSoundProvider;
    struct SoundProvider* OnDeactivateSoundProvider;
    struct FlipPlantLogic__Array* m_flipPlants;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JumpFlipPlatform__Fields_FWDDECL)
#define IL2CPP_STRUCT_JumpFlipPlatform__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/FlipPlantLogic__Array.h>
#include <Modloader/app/structs/LegacyTransparancyAnimator.h>
#include <Modloader/app/structs/List_1_BaseAnimator_.h>
#include <Modloader/app/structs/List_1_LegacyAnimator_.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_JumpFlipPlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpFlipPlatform__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JumpFlipPlatform__Fields_FWDDECL)
#include <Modloader/app/structs/JumpFlipPlatform__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumpFlipPlatform__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
