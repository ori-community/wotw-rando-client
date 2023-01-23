#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PropertyChangedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PropertyChangedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyChangedEventArgs_DEFINED)
#include <Modloader/app/structs/PropertyChangedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_PropertyChangedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_PropertyChangedEventArgs_DEFINED
struct PropertyChangedEventArgs__Class;
struct PropertyChangedEventArgs {
    struct PropertyChangedEventArgs__Class* klass;
    MonitorData* monitor;
    struct PropertyChangedEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PropertyChangedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_PropertyChangedEventArgs_FWDDECL
#include <Modloader/app/structs/PropertyChangedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_PropertyChangedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyChangedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_PropertyChangedEventArgs_FWDDECL)
#include <Modloader/app/structs/PropertyChangedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PropertyChangedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
