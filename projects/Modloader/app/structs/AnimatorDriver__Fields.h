#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatorDriver__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatorDriver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorDriver__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimatorDriver__Fields_DEFINED
struct Action_1_Boolean_;
struct BaseAnimator;
struct __declspec(align(8)) AnimatorDriver__Fields {
    bool PlayOnStart;
    bool m_isPlaying;
    int32_t m_loopNumber;
    struct Action_1_Boolean_* OnPlayStateChanged;
    struct BaseAnimator* Animator;
    float Speed;
    float m_time;
    bool m_sampledThisFrame;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimatorDriver__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimatorDriver__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/BaseAnimator.h>
#endif
#undef IL2CPP_STRUCT_AnimatorDriver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorDriver__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimatorDriver__Fields_FWDDECL)
#include <Modloader/app/structs/AnimatorDriver__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatorDriver__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
