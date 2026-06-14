#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnobservedTaskExceptionEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnobservedTaskExceptionEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnobservedTaskExceptionEventArgs_DEFINED)
#include <Modloader/app/structs/UnobservedTaskExceptionEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_UnobservedTaskExceptionEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_UnobservedTaskExceptionEventArgs_DEFINED
struct UnobservedTaskExceptionEventArgs__Class;
struct UnobservedTaskExceptionEventArgs {
    struct UnobservedTaskExceptionEventArgs__Class* klass;
    MonitorData* monitor;
    struct UnobservedTaskExceptionEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnobservedTaskExceptionEventArgs_FWDDECL)
#define IL2CPP_STRUCT_UnobservedTaskExceptionEventArgs_FWDDECL
#include <Modloader/app/structs/UnobservedTaskExceptionEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_UnobservedTaskExceptionEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnobservedTaskExceptionEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_UnobservedTaskExceptionEventArgs_FWDDECL)
#include <Modloader/app/structs/UnobservedTaskExceptionEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnobservedTaskExceptionEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
