#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISceneRootPostEnableObserver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISceneRootPostEnableObserver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISceneRootPostEnableObserver_DEFINED)
#define IL2CPP_STRUCT_ISceneRootPostEnableObserver_DEFINED
struct ISceneRootPostEnableObserver__Class;
struct ISceneRootPostEnableObserver {
    struct ISceneRootPostEnableObserver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISceneRootPostEnableObserver_FWDDECL)
#define IL2CPP_STRUCT_ISceneRootPostEnableObserver_FWDDECL
#include <Modloader/app/structs/ISceneRootPostEnableObserver__Class.h>
#endif
#undef IL2CPP_STRUCT_ISceneRootPostEnableObserver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISceneRootPostEnableObserver_DEFINED) && !defined(IL2CPP_STRUCT_ISceneRootPostEnableObserver_FWDDECL)
#include <Modloader/app/structs/ISceneRootPostEnableObserver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISceneRootPostEnableObserver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
