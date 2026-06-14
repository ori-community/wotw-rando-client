#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneRoot_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneRoot_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneRoot_DEFINED)
#include <Modloader/app/structs/SceneRoot__Fields.h>
#if defined(IL2CPP_STRUCT_SceneRoot__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneRoot_DEFINED
struct SceneRoot__Class;
struct SceneRoot {
    struct SceneRoot__Class* klass;
    MonitorData* monitor;
    struct SceneRoot__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneRoot_FWDDECL)
#define IL2CPP_STRUCT_SceneRoot_FWDDECL
#include <Modloader/app/structs/SceneRoot__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneRoot_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneRoot_DEFINED) && !defined(IL2CPP_STRUCT_SceneRoot_FWDDECL)
#include <Modloader/app/structs/SceneRoot.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneRoot.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
