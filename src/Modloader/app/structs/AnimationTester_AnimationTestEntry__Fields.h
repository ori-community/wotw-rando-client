#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationTester_AnimationTestEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationTester_AnimationTestEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationTester_AnimationTestEntry__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#if defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_AnimationTester_AnimationTestEntry__Fields_DEFINED
struct MoonAnimator;
struct List_1_Moon_MoonAnimation_;
struct __declspec(align(8)) AnimationTester_AnimationTestEntry__Fields {
    struct MoonAnimator* Animator;
    struct List_1_Moon_MoonAnimation_* Animations;
    struct ActiveAnimationHandle m_activeAnimation;
    int32_t m_index;
    bool _IsEnabled_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationTester_AnimationTestEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimationTester_AnimationTestEntry__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_MoonAnimation_.h>
#include <Modloader/app/structs/MoonAnimator.h>
#endif
#undef IL2CPP_STRUCT_AnimationTester_AnimationTestEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationTester_AnimationTestEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimationTester_AnimationTestEntry__Fields_FWDDECL)
#include <Modloader/app/structs/AnimationTester_AnimationTestEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationTester_AnimationTestEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
