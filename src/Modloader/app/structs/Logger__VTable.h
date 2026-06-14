#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Logger__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Logger__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Logger__VTable_DEFINED)
#define IL2CPP_STRUCT_Logger__VTable_DEFINED
struct Logger__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_logHandler;
    VirtualInvokeData set_logHandler;
    VirtualInvokeData Log;
    VirtualInvokeData Log_1;
    VirtualInvokeData LogFormat;
    VirtualInvokeData LogFormat_1;
    VirtualInvokeData LogException;
    VirtualInvokeData get_logEnabled;
    VirtualInvokeData set_logEnabled;
    VirtualInvokeData get_filterLogType;
    VirtualInvokeData set_filterLogType;
    VirtualInvokeData IsLogTypeAllowed;
};
#endif
#if !defined(IL2CPP_STRUCT_Logger__VTable_FWDDECL)
#define IL2CPP_STRUCT_Logger__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_Logger__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Logger__VTable_DEFINED) && !defined(IL2CPP_STRUCT_Logger__VTable_FWDDECL)
#include <Modloader/app/structs/Logger__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Logger__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
