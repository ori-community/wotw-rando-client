#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyMaterialColorGradientAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyMaterialColorGradientAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyMaterialColorGradientAnimator__Fields_DEFINED)
#include <Modloader/app/structs/LegacyAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyMaterialColorGradientAnimator__Fields_DEFINED
struct Texture2D;
struct AnimationCurve;
struct String;
struct List_1_LegacyMaterialColorGradientAnimator_RendererData_;
struct Color__Array;
struct LegacyMaterialColorGradientAnimator__Fields {
    struct LegacyAnimator__Fields _;
    bool AnimateChildren;
    struct Texture2D* Gradient;
    struct AnimationCurve* GradientCurve;
    bool Red;
    bool Green;
    bool Blue;
    bool Alpha;
    bool Half;
    struct String* Property;
    int32_t _PropertyID;
    struct List_1_LegacyMaterialColorGradientAnimator_RendererData_* m_rendererData;
    struct Color__Array* GradientPixels;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyMaterialColorGradientAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyMaterialColorGradientAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Color__Array.h>
#include <Modloader/app/structs/List_1_LegacyMaterialColorGradientAnimator_RendererData_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_LegacyMaterialColorGradientAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyMaterialColorGradientAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyMaterialColorGradientAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyMaterialColorGradientAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyMaterialColorGradientAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
