#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpriteTransparencyAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpriteTransparencyAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteTransparencyAnimator__Fields_DEFINED)
#include <Modloader/app/structs/SpriteTransparencyAnimator_WrapMode__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpriteTransparencyAnimator_WrapMode__Enum_DEFINED)
#define IL2CPP_STRUCT_SpriteTransparencyAnimator__Fields_DEFINED
struct MoonReference_1_UnityEngine_GameObject_;
struct AnimationCurve;
struct GameObject;
struct SpriteRenderer;
struct SpriteTransparencyAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_UnityEngine_GameObject_* Target;
    struct AnimationCurve* Curve;
    SpriteTransparencyAnimator_WrapMode__Enum Mode;

    struct GameObject* m_targetGameObject;
    struct SpriteRenderer* m_spriteRenderer;
    float m_time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpriteTransparencyAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpriteTransparencyAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/SpriteRenderer.h>
#endif
#undef IL2CPP_STRUCT_SpriteTransparencyAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteTransparencyAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpriteTransparencyAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/SpriteTransparencyAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpriteTransparencyAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
