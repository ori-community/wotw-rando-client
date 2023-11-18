#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrashContext_HeaderData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrashContext_HeaderData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrashContext_HeaderData_DEFINED)
#include <Modloader/app/structs/CrashContext_DataState__Enum.h>
#include <Modloader/app/structs/Guid.h>
#if defined(IL2CPP_STRUCT_Guid_DEFINED) && defined(IL2CPP_STRUCT_CrashContext_DataState__Enum_DEFINED)
#define IL2CPP_STRUCT_CrashContext_HeaderData_DEFINED
struct CrashContext_HeaderData {
    uint32_t Signature;
    uint32_t Version;
    int32_t BuildNumber;
    int32_t SystemMemorySize;
    struct Guid TelemetrySessionID;
    CrashContext_DataState__Enum State;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrashContext_HeaderData_FWDDECL)
#define IL2CPP_STRUCT_CrashContext_HeaderData_FWDDECL
#endif
#undef IL2CPP_STRUCT_CrashContext_HeaderData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrashContext_HeaderData_DEFINED) && !defined(IL2CPP_STRUCT_CrashContext_HeaderData_FWDDECL)
#include <Modloader/app/structs/CrashContext_HeaderData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrashContext_HeaderData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
