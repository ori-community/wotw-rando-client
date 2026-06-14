#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrabbableSurfaceSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrabbableSurfaceSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrabbableSurfaceSettings_DEFINED)
#include <Modloader/app/structs/GrabbableSurfaceSettings__Fields.h>
#if defined(IL2CPP_STRUCT_GrabbableSurfaceSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_GrabbableSurfaceSettings_DEFINED
struct GrabbableSurfaceSettings__Class;
struct GrabbableSurfaceSettings {
    struct GrabbableSurfaceSettings__Class* klass;
    MonitorData* monitor;
    struct GrabbableSurfaceSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrabbableSurfaceSettings_FWDDECL)
#define IL2CPP_STRUCT_GrabbableSurfaceSettings_FWDDECL
#include <Modloader/app/structs/GrabbableSurfaceSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_GrabbableSurfaceSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrabbableSurfaceSettings_DEFINED) && !defined(IL2CPP_STRUCT_GrabbableSurfaceSettings_FWDDECL)
#include <Modloader/app/structs/GrabbableSurfaceSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrabbableSurfaceSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
