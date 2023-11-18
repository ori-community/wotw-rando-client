#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBossWallCrushBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBossWallCrushBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossWallCrushBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBossWallCrushBehaviour__Fields_DEFINED
struct Transform;
struct MoonTimeline;
struct FirewhirlBeamSpawner;
struct MoonAnimation;
struct Enum__Array;
struct PetrifiedOwlBossWallCrushBehaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct Transform* ShockwaveSpawnPosition;
    struct MoonTimeline* Timeline;
    struct FirewhirlBeamSpawner* FirewhirlSpawnerLeft;
    struct FirewhirlBeamSpawner* FirewhirlSpawnerRight;
    float OriginalAnimationDeltaX;
    struct MoonAnimation* CrushAnimation;
    bool m_isMirrored;
    float m_deltaX;
    struct Enum__Array* Entries;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossWallCrushBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBossWallCrushBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/FirewhirlBeamSpawner.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBossWallCrushBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossWallCrushBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBossWallCrushBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBossWallCrushBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBossWallCrushBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
