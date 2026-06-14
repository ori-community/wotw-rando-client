#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BombableWallAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BombableWallAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BombableWallAnimator__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_BombableWallAnimator__Fields_DEFINED
struct DynamicDataResolver;
struct BombableWallVisuals;
struct MoonTimeline;
struct BombableWallAnimator__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct BombableWallVisuals* Visuals;
    struct MoonTimeline* DestroyTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BombableWallAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_BombableWallAnimator__Fields_FWDDECL
#include <Modloader/app/structs/BombableWallVisuals.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_BombableWallAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BombableWallAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BombableWallAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/BombableWallAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BombableWallAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
