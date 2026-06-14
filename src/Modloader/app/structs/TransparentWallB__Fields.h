#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransparentWallB__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransparentWallB__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransparentWallB__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_TransparentWallB__Fields_DEFINED
struct DynamicDataResolver;
struct SoundProvider;
struct BaseAnimator;
struct Collider;
struct TransparentWallB__Fields {
    struct SaveSerialize__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct SoundProvider* EnterTransparentWallSoundProvider;
    struct SoundProvider* EnterTransparentWallFirstTimeSoundProvider;
    struct SoundProvider* LeaveTransparentWallSoundProvider;
    struct BaseAnimator* Animator;
    bool m_hasBeenShown;
    float m_senseCheckTimer;
    bool m_lastFrameVisible;
    bool m_beingTriggered;
    struct Collider* m_collider;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    bool m_highlighted;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransparentWallB__Fields_FWDDECL)
#define IL2CPP_STRUCT_TransparentWallB__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_TransparentWallB__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransparentWallB__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TransparentWallB__Fields_FWDDECL)
#include <Modloader/app/structs/TransparentWallB__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransparentWallB__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
