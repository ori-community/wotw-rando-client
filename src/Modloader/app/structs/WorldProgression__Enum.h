#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldProgression__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldProgression__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldProgression__Enum_DEFINED)
#define IL2CPP_STRUCT_WorldProgression__Enum_DEFINED
enum class WorldProgression__Enum : int32_t {
    Prologue = 0x00000000,
    StartOfGame = 0x0000000a,
    SpiritTreeReached = 0x00000014,
    EnteredGinsoTree = 0x0000001e,
    FinishedGinsoTree = 0x00000028,
    MistLifted = 0x00000032,
    WindRestored = 0x0000003c,
    AfterNest = 0x00000046,
    WarmthReturned = 0x00000050,
    Finished = 0x0000005a,
};
#endif
#if !defined(IL2CPP_STRUCT_WorldProgression__Enum_FWDDECL)
#define IL2CPP_STRUCT_WorldProgression__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_WorldProgression__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldProgression__Enum_DEFINED) && !defined(IL2CPP_STRUCT_WorldProgression__Enum_FWDDECL)
#include <Modloader/app/structs/WorldProgression__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldProgression__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
