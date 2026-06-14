#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtKitVersionInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtKitVersionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtKitVersionInfo_DEFINED)
#include <Modloader/app/structs/ArtKitVersionInfo__Fields.h>
#if defined(IL2CPP_STRUCT_ArtKitVersionInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_ArtKitVersionInfo_DEFINED
struct ArtKitVersionInfo__Class;
struct ArtKitVersionInfo {
    struct ArtKitVersionInfo__Class* klass;
    MonitorData* monitor;
    struct ArtKitVersionInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArtKitVersionInfo_FWDDECL)
#define IL2CPP_STRUCT_ArtKitVersionInfo_FWDDECL
#include <Modloader/app/structs/ArtKitVersionInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_ArtKitVersionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtKitVersionInfo_DEFINED) && !defined(IL2CPP_STRUCT_ArtKitVersionInfo_FWDDECL)
#include <Modloader/app/structs/ArtKitVersionInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtKitVersionInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
