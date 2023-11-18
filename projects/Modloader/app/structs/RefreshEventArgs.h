#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RefreshEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RefreshEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_RefreshEventArgs_DEFINED)
#include <Modloader/app/structs/RefreshEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_RefreshEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_RefreshEventArgs_DEFINED
struct RefreshEventArgs__Class;
struct RefreshEventArgs {
    struct RefreshEventArgs__Class* klass;
    MonitorData* monitor;
    struct RefreshEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RefreshEventArgs_FWDDECL)
#define IL2CPP_STRUCT_RefreshEventArgs_FWDDECL
#include <Modloader/app/structs/RefreshEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_RefreshEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_RefreshEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_RefreshEventArgs_FWDDECL)
#include <Modloader/app/structs/RefreshEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RefreshEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
