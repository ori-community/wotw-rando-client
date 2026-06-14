#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraManager_DEFINED)
#include <Modloader/app/structs/CameraManager__Fields.h>
#if defined(IL2CPP_STRUCT_CameraManager__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraManager_DEFINED
struct CameraManager__Class;
struct CameraManager {
    struct CameraManager__Class* klass;
    MonitorData* monitor;
    struct CameraManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraManager_FWDDECL)
#define IL2CPP_STRUCT_CameraManager_FWDDECL
#include <Modloader/app/structs/CameraManager__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraManager_DEFINED) && !defined(IL2CPP_STRUCT_CameraManager_FWDDECL)
#include <Modloader/app/structs/CameraManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
