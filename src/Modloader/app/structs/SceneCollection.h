#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneCollection_DEFINED)
#include <Modloader/app/structs/SceneCollection__Fields.h>
#if defined(IL2CPP_STRUCT_SceneCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneCollection_DEFINED
struct SceneCollection__Class;
struct SceneCollection {
    struct SceneCollection__Class* klass;
    MonitorData* monitor;
    struct SceneCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneCollection_FWDDECL)
#define IL2CPP_STRUCT_SceneCollection_FWDDECL
#include <Modloader/app/structs/SceneCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneCollection_DEFINED) && !defined(IL2CPP_STRUCT_SceneCollection_FWDDECL)
#include <Modloader/app/structs/SceneCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
