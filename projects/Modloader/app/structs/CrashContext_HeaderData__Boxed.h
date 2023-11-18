#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrashContext_HeaderData__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrashContext_HeaderData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrashContext_HeaderData__Boxed_DEFINED)
#include <Modloader/app/structs/CrashContext_HeaderData.h>
#if defined(IL2CPP_STRUCT_CrashContext_HeaderData_DEFINED)
#define IL2CPP_STRUCT_CrashContext_HeaderData__Boxed_DEFINED
struct CrashContext_HeaderData__Class;
struct CrashContext_HeaderData__Boxed {
    struct CrashContext_HeaderData__Class* klass;
    MonitorData* monitor;
    struct CrashContext_HeaderData fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrashContext_HeaderData__Boxed_FWDDECL)
#define IL2CPP_STRUCT_CrashContext_HeaderData__Boxed_FWDDECL
#include <Modloader/app/structs/CrashContext_HeaderData__Class.h>
#endif
#undef IL2CPP_STRUCT_CrashContext_HeaderData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrashContext_HeaderData__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_CrashContext_HeaderData__Boxed_FWDDECL)
#include <Modloader/app/structs/CrashContext_HeaderData__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrashContext_HeaderData__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
