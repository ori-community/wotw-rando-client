#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayAnimation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayAnimation__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_PlayAnimation__Fields_DEFINED
struct MoonAnimator;
struct MoonAnimation;
struct PlayAnimation__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonAnimator* Animator;
    struct MoonAnimation* Animation;
    int32_t Priority;
    struct ActiveAnimationHandle m_activeAnimation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayAnimation__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayAnimation__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>
#endif
#undef IL2CPP_STRUCT_PlayAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayAnimation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayAnimation__Fields_FWDDECL)
#include <Modloader/app/structs/PlayAnimation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayAnimation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
