#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISceneWarningSource_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISceneWarningSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISceneWarningSource_DEFINED)
#define IL2CPP_STRUCT_ISceneWarningSource_DEFINED
struct ISceneWarningSource__Class;
struct ISceneWarningSource {
    struct ISceneWarningSource__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISceneWarningSource_FWDDECL)
#define IL2CPP_STRUCT_ISceneWarningSource_FWDDECL
#include <Modloader/app/structs/ISceneWarningSource__Class.h>
#endif
#undef IL2CPP_STRUCT_ISceneWarningSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISceneWarningSource_DEFINED) && !defined(IL2CPP_STRUCT_ISceneWarningSource_FWDDECL)
#include <Modloader/app/structs/ISceneWarningSource.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISceneWarningSource.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
