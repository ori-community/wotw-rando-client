#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPromise__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPromise__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPromise__VTable_DEFINED)
#define IL2CPP_STRUCT_IPromise__VTable_DEFINED
struct IPromise__VTable {
    VirtualInvokeData WithName;
    VirtualInvokeData Done;
    VirtualInvokeData Done_1;
    VirtualInvokeData Done_2;
    VirtualInvokeData Catch;
    VirtualInvokeData Then;
    VirtualInvokeData Then_1;
    VirtualInvokeData Then_2;
    VirtualInvokeData Then_3;
    VirtualInvokeData Then_4;
    VirtualInvokeData Then_5;
    VirtualInvokeData ThenAll;
    VirtualInvokeData ThenAll_1;
    VirtualInvokeData ThenSequence;
    VirtualInvokeData ThenRace;
    VirtualInvokeData ThenRace_1;
    VirtualInvokeData ToWaitFor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPromise__VTable_FWDDECL)
#define IL2CPP_STRUCT_IPromise__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IPromise__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPromise__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IPromise__VTable_FWDDECL)
#include <Modloader/app/structs/IPromise__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPromise__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
