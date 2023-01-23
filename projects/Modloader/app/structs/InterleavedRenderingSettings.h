#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InterleavedRenderingSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InterleavedRenderingSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterleavedRenderingSettings_DEFINED)
#include <Modloader/app/structs/InterleavedRenderingSettings__Fields.h>
#if defined(IL2CPP_STRUCT_InterleavedRenderingSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_InterleavedRenderingSettings_DEFINED
struct InterleavedRenderingSettings__Class;
struct InterleavedRenderingSettings {
    struct InterleavedRenderingSettings__Class* klass;
    MonitorData* monitor;
    struct InterleavedRenderingSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InterleavedRenderingSettings_FWDDECL)
#define IL2CPP_STRUCT_InterleavedRenderingSettings_FWDDECL
#include <Modloader/app/structs/InterleavedRenderingSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_InterleavedRenderingSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterleavedRenderingSettings_DEFINED) && !defined(IL2CPP_STRUCT_InterleavedRenderingSettings_FWDDECL)
#include <Modloader/app/structs/InterleavedRenderingSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InterleavedRenderingSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
