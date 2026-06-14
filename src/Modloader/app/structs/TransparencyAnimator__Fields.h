#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransparencyAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransparencyAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransparencyAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#include <Modloader/app/structs/TransparencyAnimator_AnimateMode__Enum.h>
#include <Modloader/app/structs/TransparencyMode__Enum.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_TransparencyAnimator_AnimateMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_TransparencyMode__Enum_DEFINED)
#define IL2CPP_STRUCT_TransparencyAnimator__Fields_DEFINED
struct MoonReference_1_UnityEngine_GameObject_;
struct GameObject__Array;
struct AnimationCurve;
struct GameObject;
struct List_1_UnityEngine_Transform_;
struct List_1_UnityEngine_Renderer_;
struct TransparencyAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_UnityEngine_GameObject_* Target;
    struct GameObject__Array* AdditionalTargets;
    bool AnimateChildren;
    TransparencyAnimator_AnimateMode__Enum Mode;

    struct AnimationCurve* Curve;
    bool AutoEnableDisable;
    bool Allow0AlphaHierarchyOptimization;
    TransparencyMode__Enum TransparencyMode;

    bool ClampTopValue;
    float m_time;
    struct GameObject* m_target;
    struct List_1_UnityEngine_Transform_* m_earlyZTransforms;
    struct List_1_UnityEngine_Renderer_* m_renderers;
    bool m_initialized;
    bool m_isPooled;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransparencyAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_TransparencyAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_Renderer_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#endif
#undef IL2CPP_STRUCT_TransparencyAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransparencyAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TransparencyAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/TransparencyAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransparencyAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
