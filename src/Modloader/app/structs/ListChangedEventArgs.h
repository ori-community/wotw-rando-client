#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListChangedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListChangedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListChangedEventArgs_DEFINED)
#include <Modloader/app/structs/ListChangedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_ListChangedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_ListChangedEventArgs_DEFINED
struct ListChangedEventArgs__Class;
struct ListChangedEventArgs {
    struct ListChangedEventArgs__Class* klass;
    MonitorData* monitor;
    struct ListChangedEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListChangedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_ListChangedEventArgs_FWDDECL
#include <Modloader/app/structs/ListChangedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_ListChangedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListChangedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_ListChangedEventArgs_FWDDECL)
#include <Modloader/app/structs/ListChangedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListChangedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
