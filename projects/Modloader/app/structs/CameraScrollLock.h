#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraScrollLock_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraScrollLock_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraScrollLock_DEFINED)
#include <Modloader/app/structs/CameraScrollLock__Fields.h>
#if defined(IL2CPP_STRUCT_CameraScrollLock__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraScrollLock_DEFINED
struct CameraScrollLock__Class;
struct CameraScrollLock {
    struct CameraScrollLock__Class* klass;
    MonitorData* monitor;
    struct CameraScrollLock__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraScrollLock_FWDDECL)
#define IL2CPP_STRUCT_CameraScrollLock_FWDDECL
#include <Modloader/app/structs/CameraScrollLock__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraScrollLock_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraScrollLock_DEFINED) && !defined(IL2CPP_STRUCT_CameraScrollLock_FWDDECL)
#include <Modloader/app/structs/CameraScrollLock.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraScrollLock.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
