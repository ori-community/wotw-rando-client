#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AppDomain__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AppDomain__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppDomain__VTable_DEFINED)
#define IL2CPP_STRUCT_AppDomain__VTable_DEFINED
struct AppDomain__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CreateObjRef;
    VirtualInvokeData InitializeLifetimeService;
    VirtualInvokeData GetAssemblies;
    VirtualInvokeData GetData;
    VirtualInvokeData Load;
    VirtualInvokeData add_AssemblyLoad;
    VirtualInvokeData remove_AssemblyLoad;
    VirtualInvokeData add_DomainUnload;
    VirtualInvokeData remove_DomainUnload;
    VirtualInvokeData add_ProcessExit;
    VirtualInvokeData remove_ProcessExit;
    VirtualInvokeData add_UnhandledException;
    VirtualInvokeData remove_UnhandledException;
};
#endif
#if !defined(IL2CPP_STRUCT_AppDomain__VTable_FWDDECL)
#define IL2CPP_STRUCT_AppDomain__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_AppDomain__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppDomain__VTable_DEFINED) && !defined(IL2CPP_STRUCT_AppDomain__VTable_FWDDECL)
#include <Modloader/app/structs/AppDomain__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AppDomain__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
