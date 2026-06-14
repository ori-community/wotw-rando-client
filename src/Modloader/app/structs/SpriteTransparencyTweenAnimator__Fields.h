#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpriteTransparencyTweenAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpriteTransparencyTweenAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteTransparencyTweenAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SpriteTransparencyTweenAnimator__Fields_DEFINED
struct MoonReference_1_UnityEngine_GameObject_;
struct MoonFloat;
struct GameObject;
struct SpriteRenderer;
struct MoveTowardsFloatTweenable;
struct SpriteTransparencyTweenAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_UnityEngine_GameObject_* Target;
    struct MoonFloat* LocalStartAlpha;
    struct MoonFloat* LocalEndAlpha;
    struct MoonFloat* Speed;
    float m_currentStartAlpha;
    float m_currentEndAlpha;
    bool m_isFinished;
    struct GameObject* m_targetGameObject;
    struct SpriteRenderer* m_spriteRenderer;
    struct MoveTowardsFloatTweenable* m_tweenColorAlpha;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpriteTransparencyTweenAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpriteTransparencyTweenAnimator__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoveTowardsFloatTweenable.h>
#include <Modloader/app/structs/SpriteRenderer.h>
#endif
#undef IL2CPP_STRUCT_SpriteTransparencyTweenAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteTransparencyTweenAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpriteTransparencyTweenAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/SpriteTransparencyTweenAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpriteTransparencyTweenAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
