#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PropertyChangingEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PropertyChangingEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyChangingEventArgs_DEFINED)
#include <Modloader/app/structs/PropertyChangingEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_PropertyChangingEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_PropertyChangingEventArgs_DEFINED
struct PropertyChangingEventArgs__Class;
struct PropertyChangingEventArgs {
    struct PropertyChangingEventArgs__Class* klass;
    MonitorData* monitor;
    struct PropertyChangingEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PropertyChangingEventArgs_FWDDECL)
#define IL2CPP_STRUCT_PropertyChangingEventArgs_FWDDECL
#include <Modloader/app/structs/PropertyChangingEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_PropertyChangingEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyChangingEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_PropertyChangingEventArgs_FWDDECL)
#include <Modloader/app/structs/PropertyChangingEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PropertyChangingEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
