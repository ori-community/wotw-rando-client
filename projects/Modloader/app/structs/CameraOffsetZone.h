#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraOffsetZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraOffsetZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraOffsetZone_DEFINED)
#include <Modloader/app/structs/CameraOffsetZone__Fields.h>
#if defined(IL2CPP_STRUCT_CameraOffsetZone__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraOffsetZone_DEFINED
struct CameraOffsetZone__Class;
struct CameraOffsetZone {
    struct CameraOffsetZone__Class* klass;
    MonitorData* monitor;
    struct CameraOffsetZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraOffsetZone_FWDDECL)
#define IL2CPP_STRUCT_CameraOffsetZone_FWDDECL
#include <Modloader/app/structs/CameraOffsetZone__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraOffsetZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraOffsetZone_DEFINED) && !defined(IL2CPP_STRUCT_CameraOffsetZone_FWDDECL)
#include <Modloader/app/structs/CameraOffsetZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraOffsetZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
