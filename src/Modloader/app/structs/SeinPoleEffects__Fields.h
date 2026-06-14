#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinPoleEffects__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinPoleEffects__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPoleEffects__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinPoleEffects__Fields_DEFINED
struct MoonTimeline;
struct GameObject;
struct __declspec(align(8)) SeinPoleEffects__Fields {
    struct MoonTimeline* MoveVerticaly;
    struct MoonTimeline* MoveHorizontaly;
    struct MoonTimeline* Swing;
    struct GameObject* DashToVertical;
    struct GameObject* SwitchingSideVertical;
    struct GameObject* JumpingUpPole;
    struct GameObject* HandStandJump;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinPoleEffects__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinPoleEffects__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_SeinPoleEffects__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPoleEffects__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinPoleEffects__Fields_FWDDECL)
#include <Modloader/app/structs/SeinPoleEffects__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinPoleEffects__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
