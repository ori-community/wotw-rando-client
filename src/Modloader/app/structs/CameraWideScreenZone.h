#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraWideScreenZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraWideScreenZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraWideScreenZone_DEFINED)
#include <Modloader/app/structs/CameraWideScreenZone__Fields.h>
#if defined(IL2CPP_STRUCT_CameraWideScreenZone__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraWideScreenZone_DEFINED
struct CameraWideScreenZone__Class;
struct CameraWideScreenZone {
    struct CameraWideScreenZone__Class* klass;
    MonitorData* monitor;
    struct CameraWideScreenZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraWideScreenZone_FWDDECL)
#define IL2CPP_STRUCT_CameraWideScreenZone_FWDDECL
#include <Modloader/app/structs/CameraWideScreenZone__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraWideScreenZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraWideScreenZone_DEFINED) && !defined(IL2CPP_STRUCT_CameraWideScreenZone_FWDDECL)
#include <Modloader/app/structs/CameraWideScreenZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraWideScreenZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
