#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSystem_DEFINED)
#include <Modloader/app/structs/CameraSystem__Fields.h>
#if defined(IL2CPP_STRUCT_CameraSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraSystem_DEFINED
struct CameraSystem__Class;
struct CameraSystem {
    struct CameraSystem__Class* klass;
    MonitorData* monitor;
    struct CameraSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraSystem_FWDDECL)
#define IL2CPP_STRUCT_CameraSystem_FWDDECL
#include <Modloader/app/structs/CameraSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSystem_DEFINED) && !defined(IL2CPP_STRUCT_CameraSystem_FWDDECL)
#include <Modloader/app/structs/CameraSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
