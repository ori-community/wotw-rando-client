#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitUntil__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitUntil__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitUntil__VTable_DEFINED)
#define IL2CPP_STRUCT_WaitUntil__VTable_DEFINED
struct WaitUntil__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData MoveNext;
    VirtualInvokeData get_Current;
    VirtualInvokeData Reset;
    VirtualInvokeData get_keepWaiting;
};
#endif
#if !defined(IL2CPP_STRUCT_WaitUntil__VTable_FWDDECL)
#define IL2CPP_STRUCT_WaitUntil__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_WaitUntil__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitUntil__VTable_DEFINED) && !defined(IL2CPP_STRUCT_WaitUntil__VTable_FWDDECL)
#include <Modloader/app/structs/WaitUntil__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitUntil__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
