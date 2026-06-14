#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlaneUpdatedEventArgs__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlaneUpdatedEventArgs__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaneUpdatedEventArgs__Boxed_DEFINED)
#include <Modloader/app/structs/PlaneUpdatedEventArgs.h>
#if defined(IL2CPP_STRUCT_PlaneUpdatedEventArgs_DEFINED)
#define IL2CPP_STRUCT_PlaneUpdatedEventArgs__Boxed_DEFINED
struct PlaneUpdatedEventArgs__Class;
struct PlaneUpdatedEventArgs__Boxed {
    struct PlaneUpdatedEventArgs__Class* klass;
    MonitorData* monitor;
    struct PlaneUpdatedEventArgs fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlaneUpdatedEventArgs__Boxed_FWDDECL)
#define IL2CPP_STRUCT_PlaneUpdatedEventArgs__Boxed_FWDDECL
#include <Modloader/app/structs/PlaneUpdatedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_PlaneUpdatedEventArgs__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaneUpdatedEventArgs__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_PlaneUpdatedEventArgs__Boxed_FWDDECL)
#include <Modloader/app/structs/PlaneUpdatedEventArgs__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlaneUpdatedEventArgs__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
