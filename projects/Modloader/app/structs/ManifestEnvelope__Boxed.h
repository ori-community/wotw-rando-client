#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ManifestEnvelope__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ManifestEnvelope__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ManifestEnvelope__Boxed_DEFINED)
#include <Modloader/app/structs/ManifestEnvelope.h>
#if defined(IL2CPP_STRUCT_ManifestEnvelope_DEFINED)
#define IL2CPP_STRUCT_ManifestEnvelope__Boxed_DEFINED
struct ManifestEnvelope__Class;
struct ManifestEnvelope__Boxed {
    struct ManifestEnvelope__Class* klass;
    MonitorData* monitor;
    struct ManifestEnvelope fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ManifestEnvelope__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ManifestEnvelope__Boxed_FWDDECL
#include <Modloader/app/structs/ManifestEnvelope__Class.h>
#endif
#undef IL2CPP_STRUCT_ManifestEnvelope__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ManifestEnvelope__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ManifestEnvelope__Boxed_FWDDECL)
#include <Modloader/app/structs/ManifestEnvelope__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ManifestEnvelope__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
