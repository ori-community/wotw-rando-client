#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraChaseTarget_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraChaseTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraChaseTarget_DEFINED)
#include <Modloader/app/structs/CameraChaseTarget__Fields.h>
#if defined(IL2CPP_STRUCT_CameraChaseTarget__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraChaseTarget_DEFINED
struct CameraChaseTarget__Class;
struct CameraChaseTarget {
    struct CameraChaseTarget__Class* klass;
    MonitorData* monitor;
    struct CameraChaseTarget__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraChaseTarget_FWDDECL)
#define IL2CPP_STRUCT_CameraChaseTarget_FWDDECL
#include <Modloader/app/structs/CameraChaseTarget__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraChaseTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraChaseTarget_DEFINED) && !defined(IL2CPP_STRUCT_CameraChaseTarget_FWDDECL)
#include <Modloader/app/structs/CameraChaseTarget.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraChaseTarget.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
