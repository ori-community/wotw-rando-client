#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberColorAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberColorAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberColorAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/UberColorAnimator_ColorName__Enum.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_UberColorAnimator_ColorName__Enum_DEFINED)
#define IL2CPP_STRUCT_UberColorAnimator__Fields_DEFINED
struct UberShaderProperty_Color__Enum__Array;
struct GameObject;
struct AnimationCurve;
struct Renderer;
struct UberColorAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct UberShaderProperty_Color__Enum__Array* ColorProperties;
    struct GameObject* ExternalTarget;
    struct Color Color;
    bool Red;
    bool Green;
    bool Blue;
    bool Alpha;
    struct AnimationCurve* AnimationCurve;
    UberColorAnimator_ColorName__Enum ColorTarget;

    struct Color m_originalColor;
    struct Renderer* m_renderer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberColorAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberColorAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/UberShaderProperty_Color__Enum__Array.h>
#endif
#undef IL2CPP_STRUCT_UberColorAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberColorAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberColorAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/UberColorAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberColorAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
