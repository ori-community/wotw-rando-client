#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BombableWallVisuals__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BombableWallVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BombableWallVisuals__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_BombableWallVisuals__Fields_DEFINED
struct MoonTimeline;
struct GameObject;
struct MeshCollider;
struct BombableWallVisuals__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline* DestroyTimeline;
    struct GameObject* VisualsToDeactivate;
    struct MeshCollider* Collider;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BombableWallVisuals__Fields_FWDDECL)
#define IL2CPP_STRUCT_BombableWallVisuals__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MeshCollider.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_BombableWallVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BombableWallVisuals__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BombableWallVisuals__Fields_FWDDECL)
#include <Modloader/app/structs/BombableWallVisuals__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BombableWallVisuals__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
