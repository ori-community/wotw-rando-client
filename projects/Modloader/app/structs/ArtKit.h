#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtKit_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtKit_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtKit_DEFINED)
#include <Modloader/app/structs/ArtKit__Fields.h>
#if defined(IL2CPP_STRUCT_ArtKit__Fields_DEFINED)
#define IL2CPP_STRUCT_ArtKit_DEFINED
struct ArtKit__Class;
struct ArtKit {
    struct ArtKit__Class* klass;
    MonitorData* monitor;
    struct ArtKit__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArtKit_FWDDECL)
#define IL2CPP_STRUCT_ArtKit_FWDDECL
#include <Modloader/app/structs/ArtKit__Class.h>
#endif
#undef IL2CPP_STRUCT_ArtKit_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtKit_DEFINED) && !defined(IL2CPP_STRUCT_ArtKit_FWDDECL)
#include <Modloader/app/structs/ArtKit.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtKit.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
