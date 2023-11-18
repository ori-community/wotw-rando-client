#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISceneRootPreDisableObserver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISceneRootPreDisableObserver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISceneRootPreDisableObserver_DEFINED)
#define IL2CPP_STRUCT_ISceneRootPreDisableObserver_DEFINED
struct ISceneRootPreDisableObserver__Class;
struct ISceneRootPreDisableObserver {
    struct ISceneRootPreDisableObserver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISceneRootPreDisableObserver_FWDDECL)
#define IL2CPP_STRUCT_ISceneRootPreDisableObserver_FWDDECL
#include <Modloader/app/structs/ISceneRootPreDisableObserver__Class.h>
#endif
#undef IL2CPP_STRUCT_ISceneRootPreDisableObserver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISceneRootPreDisableObserver_DEFINED) && !defined(IL2CPP_STRUCT_ISceneRootPreDisableObserver_FWDDECL)
#include <Modloader/app/structs/ISceneRootPreDisableObserver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISceneRootPreDisableObserver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
