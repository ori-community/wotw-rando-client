#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlueFlameVineDoorController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlueFlameVineDoorController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlueFlameVineDoorController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_BlueFlameVineDoorController__Fields_DEFINED
struct SerializedBooleanUberState;
struct Condition_1;
struct MoonTimeline;
struct PlayerInsideZoneChecker;
struct GameObject;
struct Renderer;
struct IUberState__Array;
struct BlueFlameVineDoorController__Fields {
    struct MonoBehaviour__Fields _;
    struct SerializedBooleanUberState* DoorOpenState;
    bool CreateCheckpoint;
    struct Condition_1* DoorOpenCondition;
    struct MoonTimeline* TransitionTimeline;
    struct PlayerInsideZoneChecker* SeinInsideZoneChecker;
    struct GameObject* Collider;
    struct Renderer* BoxRenderer;
    float OpenAlpha;
    float ClosedAlpha;
    struct IUberState__Array* m_affectingUberStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlueFlameVineDoorController__Fields_FWDDECL)
#define IL2CPP_STRUCT_BlueFlameVineDoorController__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#endif
#undef IL2CPP_STRUCT_BlueFlameVineDoorController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlueFlameVineDoorController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BlueFlameVineDoorController__Fields_FWDDECL)
#include <Modloader/app/structs/BlueFlameVineDoorController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlueFlameVineDoorController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
