#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnreferencedObjectEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnreferencedObjectEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnreferencedObjectEventArgs_DEFINED)
#include <Modloader/app/structs/UnreferencedObjectEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_UnreferencedObjectEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_UnreferencedObjectEventArgs_DEFINED
struct UnreferencedObjectEventArgs__Class;
struct UnreferencedObjectEventArgs {
    struct UnreferencedObjectEventArgs__Class* klass;
    MonitorData* monitor;
    struct UnreferencedObjectEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnreferencedObjectEventArgs_FWDDECL)
#define IL2CPP_STRUCT_UnreferencedObjectEventArgs_FWDDECL
#include <Modloader/app/structs/UnreferencedObjectEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_UnreferencedObjectEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnreferencedObjectEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_UnreferencedObjectEventArgs_FWDDECL)
#include <Modloader/app/structs/UnreferencedObjectEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnreferencedObjectEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
