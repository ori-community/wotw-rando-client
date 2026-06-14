#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraProperties__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraProperties__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraProperties__Boxed_DEFINED)
#include <Modloader/app/structs/CameraProperties.h>
#if defined(IL2CPP_STRUCT_CameraProperties_DEFINED)
#define IL2CPP_STRUCT_CameraProperties__Boxed_DEFINED
struct CameraProperties__Class;
struct CameraProperties__Boxed {
    struct CameraProperties__Class* klass;
    MonitorData* monitor;
    struct CameraProperties fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraProperties__Boxed_FWDDECL)
#define IL2CPP_STRUCT_CameraProperties__Boxed_FWDDECL
#include <Modloader/app/structs/CameraProperties__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraProperties__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraProperties__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_CameraProperties__Boxed_FWDDECL)
#include <Modloader/app/structs/CameraProperties__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraProperties__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
