#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneManagerScene_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneManagerScene_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneManagerScene_DEFINED)
#include <Modloader/app/structs/SceneManagerScene__Fields.h>
#if defined(IL2CPP_STRUCT_SceneManagerScene__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneManagerScene_DEFINED
struct SceneManagerScene__Class;
struct SceneManagerScene {
    struct SceneManagerScene__Class* klass;
    MonitorData* monitor;
    struct SceneManagerScene__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneManagerScene_FWDDECL)
#define IL2CPP_STRUCT_SceneManagerScene_FWDDECL
#include <Modloader/app/structs/SceneManagerScene__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneManagerScene_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneManagerScene_DEFINED) && !defined(IL2CPP_STRUCT_SceneManagerScene_FWDDECL)
#include <Modloader/app/structs/SceneManagerScene.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneManagerScene.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
