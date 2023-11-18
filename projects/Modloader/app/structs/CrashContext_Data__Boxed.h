#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrashContext_Data__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrashContext_Data__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrashContext_Data__Boxed_DEFINED)
#include <Modloader/app/structs/CrashContext_Data.h>
#if defined(IL2CPP_STRUCT_CrashContext_Data_DEFINED)
#define IL2CPP_STRUCT_CrashContext_Data__Boxed_DEFINED
struct CrashContext_Data__Class;
struct CrashContext_Data__Boxed {
    struct CrashContext_Data__Class* klass;
    MonitorData* monitor;
    struct CrashContext_Data fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrashContext_Data__Boxed_FWDDECL)
#define IL2CPP_STRUCT_CrashContext_Data__Boxed_FWDDECL
#include <Modloader/app/structs/CrashContext_Data__Class.h>
#endif
#undef IL2CPP_STRUCT_CrashContext_Data__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrashContext_Data__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_CrashContext_Data__Boxed_FWDDECL)
#include <Modloader/app/structs/CrashContext_Data__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrashContext_Data__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
