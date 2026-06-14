#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TargetIndicator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TargetIndicator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetIndicator__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_TargetIndicator__Fields_DEFINED
struct AnimationCurve;
struct Renderer__Array;
struct TargetIndicator__Fields {
    struct MonoBehaviour__Fields _;
    struct AnimationCurve* DistanceToScale;
    float RationMultiplier;
    struct Rect ViewportVisibilityBounds;
    struct Renderer__Array* m_renderers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TargetIndicator__Fields_FWDDECL)
#define IL2CPP_STRUCT_TargetIndicator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Renderer__Array.h>
#endif
#undef IL2CPP_STRUCT_TargetIndicator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetIndicator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TargetIndicator__Fields_FWDDECL)
#include <Modloader/app/structs/TargetIndicator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TargetIndicator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
