#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinPlatformingEffects__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinPlatformingEffects__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPlatformingEffects__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinPlatformingEffects__Fields_DEFINED
struct MoonTimeline;
struct GameObject;
struct __declspec(align(8)) SeinPlatformingEffects__Fields {
    struct MoonTimeline* FootstepDust;
    struct GameObject* Clamber;
    struct GameObject* Jump;
    struct GameObject* CrouchJump;
    struct GameObject* JumpDownPlatform;
    struct GameObject* Land;
    struct GameObject* LongLand;
    struct GameObject* WallClimbEnter;
    struct GameObject* WallClimbExit;
    struct MoonTimeline* GrabSurface;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinPlatformingEffects__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinPlatformingEffects__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_SeinPlatformingEffects__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPlatformingEffects__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinPlatformingEffects__Fields_FWDDECL)
#include <Modloader/app/structs/SeinPlatformingEffects__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinPlatformingEffects__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
