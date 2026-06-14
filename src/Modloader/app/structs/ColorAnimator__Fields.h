#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorAnimator__Fields_DEFINED)
#include <Modloader/app/structs/ColorAnimator_ColorType__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_ColorAnimator_ColorType__Enum_DEFINED)
#define IL2CPP_STRUCT_ColorAnimator__Fields_DEFINED
struct MoonReference_1_UnityEngine_GameObject_;
struct MoonColor;
struct AnimationCurve;
struct Renderer__Array;
struct ColorAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_UnityEngine_GameObject_* Target;
    bool AnimateChildren;
    struct MoonColor* TargetColor;
    bool Red;
    bool Green;
    bool Blue;
    bool Alpha;
    struct AnimationCurve* Curve;
    ColorAnimator_ColorType__Enum ColorProperty;

    float m_time;
    struct Renderer__Array* m_entries;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColorAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ColorAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/MoonColor.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Renderer__Array.h>
#endif
#undef IL2CPP_STRUCT_ColorAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ColorAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/ColorAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
