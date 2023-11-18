#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMonoSslStream__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMonoSslStream__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMonoSslStream__VTable_DEFINED)
#define IL2CPP_STRUCT_IMonoSslStream__VTable_DEFINED
struct IMonoSslStream__VTable {
    VirtualInvokeData AuthenticateAsClient;
    VirtualInvokeData AuthenticateAsServer;
    VirtualInvokeData Read;
    VirtualInvokeData Write;
    VirtualInvokeData BeginRead;
    VirtualInvokeData EndRead;
    VirtualInvokeData BeginWrite;
    VirtualInvokeData EndWrite;
    VirtualInvokeData get_IsAuthenticated;
    VirtualInvokeData get_CanRead;
    VirtualInvokeData get_CanWrite;
    VirtualInvokeData get_Length;
    VirtualInvokeData get_Position;
    VirtualInvokeData SetLength;
    VirtualInvokeData get_AuthenticatedStream;
    VirtualInvokeData get_ReadTimeout;
    VirtualInvokeData set_ReadTimeout;
    VirtualInvokeData get_WriteTimeout;
    VirtualInvokeData set_WriteTimeout;
    VirtualInvokeData get_InternalLocalCertificate;
};
#endif
#if !defined(IL2CPP_STRUCT_IMonoSslStream__VTable_FWDDECL)
#define IL2CPP_STRUCT_IMonoSslStream__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IMonoSslStream__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMonoSslStream__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IMonoSslStream__VTable_FWDDECL)
#include <Modloader/app/structs/IMonoSslStream__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMonoSslStream__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
