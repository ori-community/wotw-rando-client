#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtLayerProgress_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtLayerProgress_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtLayerProgress_DEFINED)
#include <Modloader/app/structs/ArtLayerProgress__Fields.h>
#if defined(IL2CPP_STRUCT_ArtLayerProgress__Fields_DEFINED)
#define IL2CPP_STRUCT_ArtLayerProgress_DEFINED
struct ArtLayerProgress__Class;
struct ArtLayerProgress {
    struct ArtLayerProgress__Class* klass;
    MonitorData* monitor;
    struct ArtLayerProgress__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArtLayerProgress_FWDDECL)
#define IL2CPP_STRUCT_ArtLayerProgress_FWDDECL
#include <Modloader/app/structs/ArtLayerProgress__Class.h>
#endif
#undef IL2CPP_STRUCT_ArtLayerProgress_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtLayerProgress_DEFINED) && !defined(IL2CPP_STRUCT_ArtLayerProgress_FWDDECL)
#include <Modloader/app/structs/ArtLayerProgress.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtLayerProgress.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
