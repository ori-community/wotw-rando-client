#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlaneRemovedEventArgs__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlaneRemovedEventArgs__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaneRemovedEventArgs__Boxed_DEFINED)
#include <Modloader/app/structs/PlaneRemovedEventArgs.h>
#if defined(IL2CPP_STRUCT_PlaneRemovedEventArgs_DEFINED)
#define IL2CPP_STRUCT_PlaneRemovedEventArgs__Boxed_DEFINED
struct PlaneRemovedEventArgs__Class;
struct PlaneRemovedEventArgs__Boxed {
    struct PlaneRemovedEventArgs__Class* klass;
    MonitorData* monitor;
    struct PlaneRemovedEventArgs fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlaneRemovedEventArgs__Boxed_FWDDECL)
#define IL2CPP_STRUCT_PlaneRemovedEventArgs__Boxed_FWDDECL
#include <Modloader/app/structs/PlaneRemovedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_PlaneRemovedEventArgs__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaneRemovedEventArgs__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_PlaneRemovedEventArgs__Boxed_FWDDECL)
#include <Modloader/app/structs/PlaneRemovedEventArgs__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlaneRemovedEventArgs__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
