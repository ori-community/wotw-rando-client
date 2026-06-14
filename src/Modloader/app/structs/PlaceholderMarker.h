#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlaceholderMarker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlaceholderMarker_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaceholderMarker_DEFINED)
#include <Modloader/app/structs/PlaceholderMarker__Fields.h>
#if defined(IL2CPP_STRUCT_PlaceholderMarker__Fields_DEFINED)
#define IL2CPP_STRUCT_PlaceholderMarker_DEFINED
struct PlaceholderMarker__Class;
struct PlaceholderMarker {
    struct PlaceholderMarker__Class* klass;
    MonitorData* monitor;
    struct PlaceholderMarker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlaceholderMarker_FWDDECL)
#define IL2CPP_STRUCT_PlaceholderMarker_FWDDECL
#include <Modloader/app/structs/PlaceholderMarker__Class.h>
#endif
#undef IL2CPP_STRUCT_PlaceholderMarker_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaceholderMarker_DEFINED) && !defined(IL2CPP_STRUCT_PlaceholderMarker_FWDDECL)
#include <Modloader/app/structs/PlaceholderMarker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlaceholderMarker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
