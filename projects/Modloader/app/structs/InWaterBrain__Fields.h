#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InWaterBrain__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InWaterBrain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InWaterBrain__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_InWaterBrain__Fields_DEFINED
struct WaterInteraction;
struct Enum__Array;
struct InWaterBrain__Fields {
    struct MonoBehaviour__Fields _;
    struct WaterInteraction* WaterInteractionComponent;
    struct Enum__Array* Entries;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InWaterBrain__Fields_FWDDECL)
#define IL2CPP_STRUCT_InWaterBrain__Fields_FWDDECL
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/WaterInteraction.h>
#endif
#undef IL2CPP_STRUCT_InWaterBrain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InWaterBrain__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InWaterBrain__Fields_FWDDECL)
#include <Modloader/app/structs/InWaterBrain__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InWaterBrain__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
