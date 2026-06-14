#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TorchFirePedestal__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TorchFirePedestal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TorchFirePedestal__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TorchFirePedestal__Fields_DEFINED
struct SerializedBooleanUberState;
struct Flammable;
struct GameObject;
struct StickSpawner;
struct LegacyTimelineSequence;
struct IUberState__Array;
struct TorchFirePedestal__Fields {
    struct MonoBehaviour__Fields _;
    struct SerializedBooleanUberState* IsBurningUberState;
    bool CreateCheckpoint;
    struct Flammable* Flammable;
    struct GameObject* FlameActiveObject;
    struct StickSpawner* StickSpawner;
    struct LegacyTimelineSequence* BurningStartTimeline;
    struct IUberState__Array* m_affectingUberStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TorchFirePedestal__Fields_FWDDECL)
#define IL2CPP_STRUCT_TorchFirePedestal__Fields_FWDDECL
#include <Modloader/app/structs/Flammable.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/StickSpawner.h>
#endif
#undef IL2CPP_STRUCT_TorchFirePedestal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TorchFirePedestal__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TorchFirePedestal__Fields_FWDDECL)
#include <Modloader/app/structs/TorchFirePedestal__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TorchFirePedestal__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
