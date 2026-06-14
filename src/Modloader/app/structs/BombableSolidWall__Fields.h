#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BombableSolidWall__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BombableSolidWall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BombableSolidWall__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED)
#define IL2CPP_STRUCT_BombableSolidWall__Fields_DEFINED
struct SerializedBooleanUberState;
struct PrefabSpawner;
struct MoonReference_1_Moon_Timeline_MoonTimeline_;
struct IUberState__Array;
struct List_1_UnityEngine_GameObject_;
struct IDamageReciever__Array;
struct BombableSolidWall__Fields {
    struct MonoBehaviour__Fields _;
    struct SerializedBooleanUberState* SerializedState;
    struct PrefabSpawner* PrefabSpawner;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* OnDestroyTimeline;
    bool CreateCheckpointOnDestruction;
    struct CheckpointFunctionality Checkpoint;
    struct IUberState__Array* m_affectingUberStates;
    struct List_1_UnityEngine_GameObject_* m_allTargets;
    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BombableSolidWall__Fields_FWDDECL)
#define IL2CPP_STRUCT_BombableSolidWall__Fields_FWDDECL
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#endif
#undef IL2CPP_STRUCT_BombableSolidWall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BombableSolidWall__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BombableSolidWall__Fields_FWDDECL)
#include <Modloader/app/structs/BombableSolidWall__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BombableSolidWall__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
