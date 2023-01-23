#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ForceGrabReleaseZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ForceGrabReleaseZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_ForceGrabReleaseZone_DEFINED)
#include <Modloader/app/structs/ForceGrabReleaseZone__Fields.h>
#if defined(IL2CPP_STRUCT_ForceGrabReleaseZone__Fields_DEFINED)
#define IL2CPP_STRUCT_ForceGrabReleaseZone_DEFINED
struct ForceGrabReleaseZone__Class;
struct ForceGrabReleaseZone {
    struct ForceGrabReleaseZone__Class* klass;
    MonitorData* monitor;
    struct ForceGrabReleaseZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ForceGrabReleaseZone_FWDDECL)
#define IL2CPP_STRUCT_ForceGrabReleaseZone_FWDDECL
#include <Modloader/app/structs/ForceGrabReleaseZone__Class.h>
#endif
#undef IL2CPP_STRUCT_ForceGrabReleaseZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_ForceGrabReleaseZone_DEFINED) && !defined(IL2CPP_STRUCT_ForceGrabReleaseZone_FWDDECL)
#include <Modloader/app/structs/ForceGrabReleaseZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ForceGrabReleaseZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
