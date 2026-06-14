#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneLoadingCaptureAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneLoadingCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingCaptureAgent_DEFINED)
#include <Modloader/app/structs/SceneLoadingCaptureAgent__Fields.h>
#if defined(IL2CPP_STRUCT_SceneLoadingCaptureAgent__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneLoadingCaptureAgent_DEFINED
struct SceneLoadingCaptureAgent__Class;
struct SceneLoadingCaptureAgent {
    struct SceneLoadingCaptureAgent__Class* klass;
    MonitorData* monitor;
    struct SceneLoadingCaptureAgent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneLoadingCaptureAgent_FWDDECL)
#define IL2CPP_STRUCT_SceneLoadingCaptureAgent_FWDDECL
#include <Modloader/app/structs/SceneLoadingCaptureAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneLoadingCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingCaptureAgent_DEFINED) && !defined(IL2CPP_STRUCT_SceneLoadingCaptureAgent_FWDDECL)
#include <Modloader/app/structs/SceneLoadingCaptureAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneLoadingCaptureAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
