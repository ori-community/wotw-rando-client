#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransparencyTweenAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransparencyTweenAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransparencyTweenAnimator__Fields_DEFINED)
#include <Modloader/app/structs/HandoverMode__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#include <Modloader/app/structs/TransparencyMode__Enum.h>
#include <Modloader/app/structs/TransparencyTweenAnimator_AnimateMode__Enum.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_TransparencyTweenAnimator_AnimateMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_TransparencyMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_HandoverMode__Enum_DEFINED)
#define IL2CPP_STRUCT_TransparencyTweenAnimator__Fields_DEFINED
struct MoonReference_1_UnityEngine_GameObject_;
struct MoonFloat;
struct GameObject;
struct List_1_UnityEngine_Renderer_;
struct Single__Array;
struct TransparencyTweenAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_UnityEngine_GameObject_* Target;
    bool AnimateChildren;
    TransparencyTweenAnimator_AnimateMode__Enum Mode;

    struct MoonFloat* StartValue;
    struct MoonFloat* EndValue;
    struct MoonFloat* Speed;
    bool AutoEnableDisable;
    TransparencyMode__Enum TransparencyMode;

    HandoverMode__Enum HandoverWrite;

    HandoverMode__Enum HandoverReadStart;

    HandoverMode__Enum HandoverReadEnd;

    float m_time;
    float m_delay;
    struct GameObject* m_target;
    struct List_1_UnityEngine_Renderer_* m_renderers;
    struct Single__Array* m_initialAlphas;
    bool m_isFinished;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransparencyTweenAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_TransparencyTweenAnimator__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_UnityEngine_Renderer_.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Single__Array.h>
#endif
#undef IL2CPP_STRUCT_TransparencyTweenAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransparencyTweenAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TransparencyTweenAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/TransparencyTweenAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransparencyTweenAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
