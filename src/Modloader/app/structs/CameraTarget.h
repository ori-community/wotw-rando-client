#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraTarget_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraTarget_DEFINED)
#include <Modloader/app/structs/CameraTarget__Fields.h>
#if defined(IL2CPP_STRUCT_CameraTarget__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraTarget_DEFINED
struct CameraTarget__Class;
struct CameraTarget {
    struct CameraTarget__Class* klass;
    MonitorData* monitor;
    struct CameraTarget__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraTarget_FWDDECL)
#define IL2CPP_STRUCT_CameraTarget_FWDDECL
#include <Modloader/app/structs/CameraTarget__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraTarget_DEFINED) && !defined(IL2CPP_STRUCT_CameraTarget_FWDDECL)
#include <Modloader/app/structs/CameraTarget.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraTarget.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
