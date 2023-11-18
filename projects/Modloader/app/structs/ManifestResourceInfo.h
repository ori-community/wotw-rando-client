#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ManifestResourceInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ManifestResourceInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ManifestResourceInfo_DEFINED)
#include <Modloader/app/structs/ManifestResourceInfo__Fields.h>
#if defined(IL2CPP_STRUCT_ManifestResourceInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_ManifestResourceInfo_DEFINED
struct ManifestResourceInfo__Class;
struct ManifestResourceInfo {
    struct ManifestResourceInfo__Class* klass;
    MonitorData* monitor;
    struct ManifestResourceInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ManifestResourceInfo_FWDDECL)
#define IL2CPP_STRUCT_ManifestResourceInfo_FWDDECL
#include <Modloader/app/structs/ManifestResourceInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_ManifestResourceInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ManifestResourceInfo_DEFINED) && !defined(IL2CPP_STRUCT_ManifestResourceInfo_FWDDECL)
#include <Modloader/app/structs/ManifestResourceInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ManifestResourceInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
