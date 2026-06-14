#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISceneRootPreEnableObserver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISceneRootPreEnableObserver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISceneRootPreEnableObserver_DEFINED)
#define IL2CPP_STRUCT_ISceneRootPreEnableObserver_DEFINED
struct ISceneRootPreEnableObserver__Class;
struct ISceneRootPreEnableObserver {
    struct ISceneRootPreEnableObserver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISceneRootPreEnableObserver_FWDDECL)
#define IL2CPP_STRUCT_ISceneRootPreEnableObserver_FWDDECL
#include <Modloader/app/structs/ISceneRootPreEnableObserver__Class.h>
#endif
#undef IL2CPP_STRUCT_ISceneRootPreEnableObserver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISceneRootPreEnableObserver_DEFINED) && !defined(IL2CPP_STRUCT_ISceneRootPreEnableObserver_FWDDECL)
#include <Modloader/app/structs/ISceneRootPreEnableObserver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISceneRootPreEnableObserver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
