#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FallingRockSetup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FallingRockSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallingRockSetup__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_FallingRockSetup__Fields_DEFINED
struct MoonTimeline;
struct DamageDealer;
struct GameObject;
struct Transform;
struct FallingRockSetup__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline* MainTimeline;
    struct MoonTimeline* DestroyTimeline;
    struct DamageDealer* DamageDealer;
    struct GameObject* RockRoot;
    struct Transform* RockObject;
    bool DestoryRockOnCollision;
    float SpeedReductionPenalty;
    bool m_insideFrustum;
    struct Bounds m_bounds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FallingRockSetup__Fields_FWDDECL)
#define IL2CPP_STRUCT_FallingRockSetup__Fields_FWDDECL
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_FallingRockSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallingRockSetup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FallingRockSetup__Fields_FWDDECL)
#include <Modloader/app/structs/FallingRockSetup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FallingRockSetup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
