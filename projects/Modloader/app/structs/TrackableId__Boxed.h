#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TrackableId__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TrackableId__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrackableId__Boxed_DEFINED)
#include <Modloader/app/structs/TrackableId.h>
#if defined(IL2CPP_STRUCT_TrackableId_DEFINED)
#define IL2CPP_STRUCT_TrackableId__Boxed_DEFINED
struct TrackableId__Class;
struct TrackableId__Boxed {
    struct TrackableId__Class* klass;
    MonitorData* monitor;
    struct TrackableId fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TrackableId__Boxed_FWDDECL)
#define IL2CPP_STRUCT_TrackableId__Boxed_FWDDECL
#include <Modloader/app/structs/TrackableId__Class.h>
#endif
#undef IL2CPP_STRUCT_TrackableId__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrackableId__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_TrackableId__Boxed_FWDDECL)
#include <Modloader/app/structs/TrackableId__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TrackableId__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
