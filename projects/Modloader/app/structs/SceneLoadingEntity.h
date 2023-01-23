#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneLoadingEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneLoadingEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingEntity_DEFINED)
#include <Modloader/app/structs/SceneLoadingEntity__Fields.h>
#if defined(IL2CPP_STRUCT_SceneLoadingEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneLoadingEntity_DEFINED
struct SceneLoadingEntity__Class;
struct SceneLoadingEntity {
    struct SceneLoadingEntity__Class* klass;
    MonitorData* monitor;
    struct SceneLoadingEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneLoadingEntity_FWDDECL)
#define IL2CPP_STRUCT_SceneLoadingEntity_FWDDECL
#include <Modloader/app/structs/SceneLoadingEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneLoadingEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingEntity_DEFINED) && !defined(IL2CPP_STRUCT_SceneLoadingEntity_FWDDECL)
#include <Modloader/app/structs/SceneLoadingEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneLoadingEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
