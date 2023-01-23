#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITrialHandler__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITrialHandler__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITrialHandler__VTable_DEFINED)
#define IL2CPP_STRUCT_ITrialHandler__VTable_DEFINED
struct ITrialHandler__VTable {
    VirtualInvokeData OnGhostFinished;
    VirtualInvokeData OnPlayerFinished;
    VirtualInvokeData OnRaceFinished;
    VirtualInvokeData OnRaceFailed;
    VirtualInvokeData SetRaceInProgressState;
    VirtualInvokeData IsInsideRaceArea;
    VirtualInvokeData StartMenuRace;
    VirtualInvokeData PlaceOriAtStart;
};
#endif
#if !defined(IL2CPP_STRUCT_ITrialHandler__VTable_FWDDECL)
#define IL2CPP_STRUCT_ITrialHandler__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ITrialHandler__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITrialHandler__VTable_DEFINED) && !defined(IL2CPP_STRUCT_ITrialHandler__VTable_FWDDECL)
#include <Modloader/app/structs/ITrialHandler__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITrialHandler__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
