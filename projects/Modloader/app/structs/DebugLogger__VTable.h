#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugLogger__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugLogger__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugLogger__VTable_DEFINED)
#define IL2CPP_STRUCT_DebugLogger__VTable_DEFINED
struct DebugLogger__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Log;
    VirtualInvokeData Trace;
    VirtualInvokeData Debug;
    VirtualInvokeData Information;
    VirtualInvokeData Warning;
    VirtualInvokeData Error;
    VirtualInvokeData Critical;
};
#endif
#if !defined(IL2CPP_STRUCT_DebugLogger__VTable_FWDDECL)
#define IL2CPP_STRUCT_DebugLogger__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_DebugLogger__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugLogger__VTable_DEFINED) && !defined(IL2CPP_STRUCT_DebugLogger__VTable_FWDDECL)
#include <Modloader/app/structs/DebugLogger__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugLogger__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
