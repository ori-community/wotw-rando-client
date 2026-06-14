#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileStreamAsyncResult__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileStreamAsyncResult__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileStreamAsyncResult__VTable_DEFINED)
#define IL2CPP_STRUCT_FileStreamAsyncResult__VTable_DEFINED
struct FileStreamAsyncResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_IsCompleted;
    VirtualInvokeData get_AsyncWaitHandle;
    VirtualInvokeData get_AsyncState;
    VirtualInvokeData get_CompletedSynchronously;
};
#endif
#if !defined(IL2CPP_STRUCT_FileStreamAsyncResult__VTable_FWDDECL)
#define IL2CPP_STRUCT_FileStreamAsyncResult__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_FileStreamAsyncResult__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileStreamAsyncResult__VTable_DEFINED) && !defined(IL2CPP_STRUCT_FileStreamAsyncResult__VTable_FWDDECL)
#include <Modloader/app/structs/FileStreamAsyncResult__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileStreamAsyncResult__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
