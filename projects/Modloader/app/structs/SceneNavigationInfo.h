#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneNavigationInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneNavigationInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneNavigationInfo_DEFINED)
#include <Modloader/app/structs/SceneNavigationInfo__Fields.h>
#if defined(IL2CPP_STRUCT_SceneNavigationInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneNavigationInfo_DEFINED
struct SceneNavigationInfo__Class;
struct SceneNavigationInfo {
    struct SceneNavigationInfo__Class* klass;
    MonitorData* monitor;
    struct SceneNavigationInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneNavigationInfo_FWDDECL)
#define IL2CPP_STRUCT_SceneNavigationInfo_FWDDECL
#include <Modloader/app/structs/SceneNavigationInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneNavigationInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneNavigationInfo_DEFINED) && !defined(IL2CPP_STRUCT_SceneNavigationInfo_FWDDECL)
#include <Modloader/app/structs/SceneNavigationInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneNavigationInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
