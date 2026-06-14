#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ManifestBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ManifestBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_ManifestBuilder_DEFINED)
#include <Modloader/app/structs/ManifestBuilder__Fields.h>
#if defined(IL2CPP_STRUCT_ManifestBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_ManifestBuilder_DEFINED
struct ManifestBuilder__Class;
struct ManifestBuilder {
    struct ManifestBuilder__Class* klass;
    MonitorData* monitor;
    struct ManifestBuilder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ManifestBuilder_FWDDECL)
#define IL2CPP_STRUCT_ManifestBuilder_FWDDECL
#include <Modloader/app/structs/ManifestBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_ManifestBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_ManifestBuilder_DEFINED) && !defined(IL2CPP_STRUCT_ManifestBuilder_FWDDECL)
#include <Modloader/app/structs/ManifestBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ManifestBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
