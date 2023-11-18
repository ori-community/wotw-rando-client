#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IStressTest__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IStressTest__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IStressTest__VTable_DEFINED)
#define IL2CPP_STRUCT_IStressTest__VTable_DEFINED
struct IStressTest__VTable {
    VirtualInvokeData get_StressTestName;
    VirtualInvokeData StartStressTest;
    VirtualInvokeData StressTestUpdate;
    VirtualInvokeData EndStressTest;
    VirtualInvokeData get_StressTestStatus;
    VirtualInvokeData set_StressTestStatus;
    VirtualInvokeData get_CanExecuteStressTest;
    VirtualInvokeData get_StopMovingPlayerWhilePerforming;
};
#endif
#if !defined(IL2CPP_STRUCT_IStressTest__VTable_FWDDECL)
#define IL2CPP_STRUCT_IStressTest__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IStressTest__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IStressTest__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IStressTest__VTable_FWDDECL)
#include <Modloader/app/structs/IStressTest__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IStressTest__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
