#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceRunState__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceRunState__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceRunState__VTable_DEFINED)
#define IL2CPP_STRUCT_RaceRunState__VTable_DEFINED
struct RaceRunState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnExit_1;
    VirtualInvokeData StartRaceRequested;
    VirtualInvokeData FinishRaceRequested;
    VirtualInvokeData RestartRaceRequested;
    VirtualInvokeData CancelRaceRequested;
    VirtualInvokeData SkipRequested;
};
#endif
#if !defined(IL2CPP_STRUCT_RaceRunState__VTable_FWDDECL)
#define IL2CPP_STRUCT_RaceRunState__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_RaceRunState__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceRunState__VTable_DEFINED) && !defined(IL2CPP_STRUCT_RaceRunState__VTable_FWDDECL)
#include <Modloader/app/structs/RaceRunState__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceRunState__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
