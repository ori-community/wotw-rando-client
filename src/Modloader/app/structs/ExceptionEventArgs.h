#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExceptionEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExceptionEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionEventArgs_DEFINED)
#include <Modloader/app/structs/ExceptionEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_ExceptionEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_ExceptionEventArgs_DEFINED
struct ExceptionEventArgs__Class;
struct ExceptionEventArgs {
    struct ExceptionEventArgs__Class* klass;
    MonitorData* monitor;
    struct ExceptionEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExceptionEventArgs_FWDDECL)
#define IL2CPP_STRUCT_ExceptionEventArgs_FWDDECL
#include <Modloader/app/structs/ExceptionEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_ExceptionEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_ExceptionEventArgs_FWDDECL)
#include <Modloader/app/structs/ExceptionEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExceptionEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
