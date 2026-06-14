#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollectionChangeEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollectionChangeEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollectionChangeEventArgs_DEFINED)
#include <Modloader/app/structs/CollectionChangeEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_CollectionChangeEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_CollectionChangeEventArgs_DEFINED
struct CollectionChangeEventArgs__Class;
struct CollectionChangeEventArgs {
    struct CollectionChangeEventArgs__Class* klass;
    MonitorData* monitor;
    struct CollectionChangeEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollectionChangeEventArgs_FWDDECL)
#define IL2CPP_STRUCT_CollectionChangeEventArgs_FWDDECL
#include <Modloader/app/structs/CollectionChangeEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_CollectionChangeEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollectionChangeEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_CollectionChangeEventArgs_FWDDECL)
#include <Modloader/app/structs/CollectionChangeEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollectionChangeEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
