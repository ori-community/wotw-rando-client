#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BreakableWallAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BreakableWallAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BreakableWallAnimator__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_BreakableWallAnimator__Fields_DEFINED
struct DynamicDataResolver;
struct BreakableWallVisuals;
struct MoonTimeline;
struct BreakableWallAnimator__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct BreakableWallVisuals* Visuals;
    struct MoonTimeline* OnHitTimeline;
    struct MoonTimeline* BreakStage1Timeline;
    struct MoonTimeline* BreakStage2Timeline;
    struct MoonTimeline* OnDestroyTimeline;
    struct MoonTimeline* OnDestroyByFireTimeline;
    struct MoonTimeline* BreakStageA;
    struct MoonTimeline* BreakStageB;
    struct MoonTimeline* FadeoutTimeline;
    bool _InvalidateParentTimelineCache_k__BackingField;
    bool m_isSecret;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BreakableWallAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_BreakableWallAnimator__Fields_FWDDECL
#include <Modloader/app/structs/BreakableWallVisuals.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_BreakableWallAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BreakableWallAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BreakableWallAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/BreakableWallAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BreakableWallAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
