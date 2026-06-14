#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneEntity_DEFINED)
#include <Modloader/app/structs/SceneEntity__Fields.h>
#if defined(IL2CPP_STRUCT_SceneEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneEntity_DEFINED
struct SceneEntity__Class;
struct SceneEntity {
    struct SceneEntity__Class* klass;
    MonitorData* monitor;
    struct SceneEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneEntity_FWDDECL)
#define IL2CPP_STRUCT_SceneEntity_FWDDECL
#include <Modloader/app/structs/SceneEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneEntity_DEFINED) && !defined(IL2CPP_STRUCT_SceneEntity_FWDDECL)
#include <Modloader/app/structs/SceneEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
