#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlaneAddedEventArgs__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlaneAddedEventArgs__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaneAddedEventArgs__Boxed_DEFINED)
#include <Modloader/app/structs/PlaneAddedEventArgs.h>
#if defined(IL2CPP_STRUCT_PlaneAddedEventArgs_DEFINED)
#define IL2CPP_STRUCT_PlaneAddedEventArgs__Boxed_DEFINED
struct PlaneAddedEventArgs__Class;
struct PlaneAddedEventArgs__Boxed {
    struct PlaneAddedEventArgs__Class* klass;
    MonitorData* monitor;
    struct PlaneAddedEventArgs fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlaneAddedEventArgs__Boxed_FWDDECL)
#define IL2CPP_STRUCT_PlaneAddedEventArgs__Boxed_FWDDECL
#include <Modloader/app/structs/PlaneAddedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_PlaneAddedEventArgs__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaneAddedEventArgs__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_PlaneAddedEventArgs__Boxed_FWDDECL)
#include <Modloader/app/structs/PlaneAddedEventArgs__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlaneAddedEventArgs__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
