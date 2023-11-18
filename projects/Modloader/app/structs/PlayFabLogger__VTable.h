#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabLogger__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabLogger__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabLogger__VTable_DEFINED)
#define IL2CPP_STRUCT_PlayFabLogger__VTable_DEFINED
struct PlayFabLogger__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ip;
    VirtualInvokeData set_ip;
    VirtualInvokeData get_port;
    VirtualInvokeData set_port;
    VirtualInvokeData get_url;
    VirtualInvokeData set_url;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData OnEnable_1;
    VirtualInvokeData OnDisable_1;
    VirtualInvokeData OnDestroy_1;
    VirtualInvokeData BeginUploadLog;
    VirtualInvokeData UploadLog;
    VirtualInvokeData EndUploadLog;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabLogger__VTable_FWDDECL)
#define IL2CPP_STRUCT_PlayFabLogger__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_PlayFabLogger__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabLogger__VTable_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabLogger__VTable_FWDDECL)
#include <Modloader/app/structs/PlayFabLogger__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabLogger__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
