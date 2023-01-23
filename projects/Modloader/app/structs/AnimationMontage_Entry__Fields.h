#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationMontage_Entry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationMontage_Entry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMontage_Entry__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationMontage_Entry__Fields_DEFINED
struct BaseAnimator;
struct __declspec(align(8)) AnimationMontage_Entry__Fields {
    bool IsPlaying;
    float m_startTime;
    struct BaseAnimator* m_animator;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimationMontage_Entry__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimationMontage_Entry__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#endif
#undef IL2CPP_STRUCT_AnimationMontage_Entry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMontage_Entry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimationMontage_Entry__Fields_FWDDECL)
#include <Modloader/app/structs/AnimationMontage_Entry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationMontage_Entry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
