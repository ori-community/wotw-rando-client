#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneDataCaptureAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneDataCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneDataCaptureAgent_DEFINED)
#include <Modloader/app/structs/SceneDataCaptureAgent__Fields.h>
#if defined(IL2CPP_STRUCT_SceneDataCaptureAgent__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneDataCaptureAgent_DEFINED
struct SceneDataCaptureAgent__Class;
struct SceneDataCaptureAgent {
    struct SceneDataCaptureAgent__Class* klass;
    MonitorData* monitor;
    struct SceneDataCaptureAgent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneDataCaptureAgent_FWDDECL)
#define IL2CPP_STRUCT_SceneDataCaptureAgent_FWDDECL
#include <Modloader/app/structs/SceneDataCaptureAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneDataCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneDataCaptureAgent_DEFINED) && !defined(IL2CPP_STRUCT_SceneDataCaptureAgent_FWDDECL)
#include <Modloader/app/structs/SceneDataCaptureAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneDataCaptureAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
