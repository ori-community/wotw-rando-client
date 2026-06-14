#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeepSceneLoadedEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeepSceneLoadedEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeepSceneLoadedEntity_DEFINED)
#include <Modloader/app/structs/KeepSceneLoadedEntity__Fields.h>
#if defined(IL2CPP_STRUCT_KeepSceneLoadedEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_KeepSceneLoadedEntity_DEFINED
struct KeepSceneLoadedEntity__Class;
struct KeepSceneLoadedEntity {
    struct KeepSceneLoadedEntity__Class* klass;
    MonitorData* monitor;
    struct KeepSceneLoadedEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KeepSceneLoadedEntity_FWDDECL)
#define IL2CPP_STRUCT_KeepSceneLoadedEntity_FWDDECL
#include <Modloader/app/structs/KeepSceneLoadedEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_KeepSceneLoadedEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeepSceneLoadedEntity_DEFINED) && !defined(IL2CPP_STRUCT_KeepSceneLoadedEntity_FWDDECL)
#include <Modloader/app/structs/KeepSceneLoadedEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeepSceneLoadedEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
