#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorTweenAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorTweenAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorTweenAnimator__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/ColorAnimator_ColorType__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_ColorAnimator_ColorType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_ColorTweenAnimator__Fields_DEFINED
struct MoonReference_1_UnityEngine_GameObject_;
struct MoonColor;
struct MoonFloat;
struct MoveTowardsColorTweenable;
struct Renderer;
struct ColorTweenAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_UnityEngine_GameObject_* Target;
    ColorAnimator_ColorType__Enum ColorProperty;

    struct MoonColor* StartColor;
    struct MoonColor* EndColor;
    struct MoonFloat* Speed;
    struct Color m_currentStartColor;
    struct Color m_currentEndColor;
    bool m_hasStarted;
    bool m_isFinished;
    struct MoveTowardsColorTweenable* m_tweener;
    struct Renderer* m_renderer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColorTweenAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ColorTweenAnimator__Fields_FWDDECL
#include <Modloader/app/structs/MoonColor.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoveTowardsColorTweenable.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_ColorTweenAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorTweenAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ColorTweenAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/ColorTweenAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorTweenAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
