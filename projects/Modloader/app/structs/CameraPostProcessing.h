#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraPostProcessing_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraPostProcessing_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPostProcessing_DEFINED)
#include <Modloader/app/structs/CameraPostProcessing__Fields.h>
#if defined(IL2CPP_STRUCT_CameraPostProcessing__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraPostProcessing_DEFINED
struct CameraPostProcessing__Class;
struct CameraPostProcessing {
    struct CameraPostProcessing__Class* klass;
    MonitorData* monitor;
    struct CameraPostProcessing__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraPostProcessing_FWDDECL)
#define IL2CPP_STRUCT_CameraPostProcessing_FWDDECL
#include <Modloader/app/structs/CameraPostProcessing__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraPostProcessing_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPostProcessing_DEFINED) && !defined(IL2CPP_STRUCT_CameraPostProcessing_FWDDECL)
#include <Modloader/app/structs/CameraPostProcessing.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraPostProcessing.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
