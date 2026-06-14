#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScaleAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScaleAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScaleAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ScaleAnimator__Fields_DEFINED
struct AnimationCurve;
struct Transform;
struct Renderer;
struct ScaleAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct AnimationCurve* AnimationCurve;
    struct Transform* Target;
    struct Vector3 m_originalScale;
    struct Renderer* m_renderer;
    struct Transform* m_transform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScaleAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScaleAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_ScaleAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScaleAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScaleAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/ScaleAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScaleAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
