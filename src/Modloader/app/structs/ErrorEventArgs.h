#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ErrorEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ErrorEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_ErrorEventArgs_DEFINED)
#include <Modloader/app/structs/ErrorEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_ErrorEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_ErrorEventArgs_DEFINED
struct ErrorEventArgs__Class;
struct ErrorEventArgs {
    struct ErrorEventArgs__Class* klass;
    MonitorData* monitor;
    struct ErrorEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ErrorEventArgs_FWDDECL)
#define IL2CPP_STRUCT_ErrorEventArgs_FWDDECL
#include <Modloader/app/structs/ErrorEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_ErrorEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_ErrorEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_ErrorEventArgs_FWDDECL)
#include <Modloader/app/structs/ErrorEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ErrorEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
