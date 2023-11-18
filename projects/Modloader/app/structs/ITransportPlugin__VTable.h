#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITransportPlugin__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITransportPlugin__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITransportPlugin__VTable_DEFINED)
#define IL2CPP_STRUCT_ITransportPlugin__VTable_DEFINED
struct ITransportPlugin__VTable {
    VirtualInvokeData get_IsInitialized;
    VirtualInvokeData Initialize;
    VirtualInvokeData Update;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SimpleGetCall;
    VirtualInvokeData SimplePutCall;
    VirtualInvokeData SimplePostCall;
    VirtualInvokeData MakeApiCall;
    VirtualInvokeData GetPendingMessages;
};
#endif
#if !defined(IL2CPP_STRUCT_ITransportPlugin__VTable_FWDDECL)
#define IL2CPP_STRUCT_ITransportPlugin__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ITransportPlugin__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITransportPlugin__VTable_DEFINED) && !defined(IL2CPP_STRUCT_ITransportPlugin__VTable_FWDDECL)
#include <Modloader/app/structs/ITransportPlugin__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITransportPlugin__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
