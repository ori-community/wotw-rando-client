#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneRootRecruiter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneRootRecruiter_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneRootRecruiter_DEFINED)
#include <Modloader/app/structs/SceneRootRecruiter__Fields.h>
#if defined(IL2CPP_STRUCT_SceneRootRecruiter__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneRootRecruiter_DEFINED
struct SceneRootRecruiter__Class;
struct SceneRootRecruiter {
    struct SceneRootRecruiter__Class* klass;
    MonitorData* monitor;
    struct SceneRootRecruiter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneRootRecruiter_FWDDECL)
#define IL2CPP_STRUCT_SceneRootRecruiter_FWDDECL
#include <Modloader/app/structs/SceneRootRecruiter__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneRootRecruiter_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneRootRecruiter_DEFINED) && !defined(IL2CPP_STRUCT_SceneRootRecruiter_FWDDECL)
#include <Modloader/app/structs/SceneRootRecruiter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneRootRecruiter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
