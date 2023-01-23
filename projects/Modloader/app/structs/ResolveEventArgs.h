#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResolveEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResolveEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResolveEventArgs_DEFINED)
#include <Modloader/app/structs/ResolveEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_ResolveEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_ResolveEventArgs_DEFINED
struct ResolveEventArgs__Class;
struct ResolveEventArgs {
    struct ResolveEventArgs__Class* klass;
    MonitorData* monitor;
    struct ResolveEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ResolveEventArgs_FWDDECL)
#define IL2CPP_STRUCT_ResolveEventArgs_FWDDECL
#include <Modloader/app/structs/ResolveEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_ResolveEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResolveEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_ResolveEventArgs_FWDDECL)
#include <Modloader/app/structs/ResolveEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResolveEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
