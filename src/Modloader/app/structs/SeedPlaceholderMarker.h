#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeedPlaceholderMarker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeedPlaceholderMarker_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeedPlaceholderMarker_DEFINED)
#include <Modloader/app/structs/SeedPlaceholderMarker__Fields.h>
#if defined(IL2CPP_STRUCT_SeedPlaceholderMarker__Fields_DEFINED)
#define IL2CPP_STRUCT_SeedPlaceholderMarker_DEFINED
struct SeedPlaceholderMarker__Class;
struct SeedPlaceholderMarker {
    struct SeedPlaceholderMarker__Class* klass;
    MonitorData* monitor;
    struct SeedPlaceholderMarker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeedPlaceholderMarker_FWDDECL)
#define IL2CPP_STRUCT_SeedPlaceholderMarker_FWDDECL
#include <Modloader/app/structs/SeedPlaceholderMarker__Class.h>
#endif
#undef IL2CPP_STRUCT_SeedPlaceholderMarker_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeedPlaceholderMarker_DEFINED) && !defined(IL2CPP_STRUCT_SeedPlaceholderMarker_FWDDECL)
#include <Modloader/app/structs/SeedPlaceholderMarker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeedPlaceholderMarker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
