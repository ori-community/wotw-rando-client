#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NotifyCollectionChangedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NotifyCollectionChangedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotifyCollectionChangedEventArgs_DEFINED)
#include <Modloader/app/structs/NotifyCollectionChangedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_NotifyCollectionChangedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_NotifyCollectionChangedEventArgs_DEFINED
struct NotifyCollectionChangedEventArgs__Class;
struct NotifyCollectionChangedEventArgs {
    struct NotifyCollectionChangedEventArgs__Class* klass;
    MonitorData* monitor;
    struct NotifyCollectionChangedEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NotifyCollectionChangedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_NotifyCollectionChangedEventArgs_FWDDECL
#include <Modloader/app/structs/NotifyCollectionChangedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_NotifyCollectionChangedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotifyCollectionChangedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_NotifyCollectionChangedEventArgs_FWDDECL)
#include <Modloader/app/structs/NotifyCollectionChangedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NotifyCollectionChangedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
