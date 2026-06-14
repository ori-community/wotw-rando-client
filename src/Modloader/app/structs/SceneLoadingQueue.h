#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneLoadingQueue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneLoadingQueue_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingQueue_DEFINED)
#include <Modloader/app/structs/SceneLoadingQueue__Fields.h>
#if defined(IL2CPP_STRUCT_SceneLoadingQueue__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneLoadingQueue_DEFINED
struct SceneLoadingQueue__Class;
struct SceneLoadingQueue {
    struct SceneLoadingQueue__Class* klass;
    MonitorData* monitor;
    struct SceneLoadingQueue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneLoadingQueue_FWDDECL)
#define IL2CPP_STRUCT_SceneLoadingQueue_FWDDECL
#include <Modloader/app/structs/SceneLoadingQueue__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneLoadingQueue_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingQueue_DEFINED) && !defined(IL2CPP_STRUCT_SceneLoadingQueue_FWDDECL)
#include <Modloader/app/structs/SceneLoadingQueue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneLoadingQueue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
