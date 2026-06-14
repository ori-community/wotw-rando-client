#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnhandledExceptionEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnhandledExceptionEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnhandledExceptionEventArgs_DEFINED)
#include <Modloader/app/structs/UnhandledExceptionEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_UnhandledExceptionEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_UnhandledExceptionEventArgs_DEFINED
struct UnhandledExceptionEventArgs__Class;
struct UnhandledExceptionEventArgs {
    struct UnhandledExceptionEventArgs__Class* klass;
    MonitorData* monitor;
    struct UnhandledExceptionEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnhandledExceptionEventArgs_FWDDECL)
#define IL2CPP_STRUCT_UnhandledExceptionEventArgs_FWDDECL
#include <Modloader/app/structs/UnhandledExceptionEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_UnhandledExceptionEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnhandledExceptionEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_UnhandledExceptionEventArgs_FWDDECL)
#include <Modloader/app/structs/UnhandledExceptionEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnhandledExceptionEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
