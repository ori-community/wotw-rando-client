#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtKitLink_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtKitLink_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtKitLink_DEFINED)
#include <Modloader/app/structs/ArtKitLink__Fields.h>
#if defined(IL2CPP_STRUCT_ArtKitLink__Fields_DEFINED)
#define IL2CPP_STRUCT_ArtKitLink_DEFINED
struct ArtKitLink__Class;
struct ArtKitLink {
    struct ArtKitLink__Class* klass;
    MonitorData* monitor;
    struct ArtKitLink__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArtKitLink_FWDDECL)
#define IL2CPP_STRUCT_ArtKitLink_FWDDECL
#include <Modloader/app/structs/ArtKitLink__Class.h>
#endif
#undef IL2CPP_STRUCT_ArtKitLink_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtKitLink_DEFINED) && !defined(IL2CPP_STRUCT_ArtKitLink_FWDDECL)
#include <Modloader/app/structs/ArtKitLink.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtKitLink.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
