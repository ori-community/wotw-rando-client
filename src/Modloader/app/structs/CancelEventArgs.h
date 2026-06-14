#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CancelEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CancelEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancelEventArgs_DEFINED)
#include <Modloader/app/structs/CancelEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_CancelEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_CancelEventArgs_DEFINED
struct CancelEventArgs__Class;
struct CancelEventArgs {
    struct CancelEventArgs__Class* klass;
    MonitorData* monitor;
    struct CancelEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CancelEventArgs_FWDDECL)
#define IL2CPP_STRUCT_CancelEventArgs_FWDDECL
#include <Modloader/app/structs/CancelEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_CancelEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancelEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_CancelEventArgs_FWDDECL)
#include <Modloader/app/structs/CancelEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CancelEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
