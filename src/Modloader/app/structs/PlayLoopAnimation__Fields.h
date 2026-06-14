#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayLoopAnimation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayLoopAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayLoopAnimation__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_UpdateType__Enum_DEFINED)
#define IL2CPP_STRUCT_PlayLoopAnimation__Fields_DEFINED
struct MoonAnimator;
struct MoonAnimation;
struct PlayLoopAnimation__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonAnimator* Animator;
    struct MoonAnimation* Animation;
    int32_t Priority;
    struct ActiveAnimationHandle m_anim;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    UpdateType__Enum _UpdateType_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayLoopAnimation__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayLoopAnimation__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>
#endif
#undef IL2CPP_STRUCT_PlayLoopAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayLoopAnimation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayLoopAnimation__Fields_FWDDECL)
#include <Modloader/app/structs/PlayLoopAnimation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayLoopAnimation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
