#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneComponent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneComponent_DEFINED)
#include <Modloader/app/structs/SceneComponent__Fields.h>
#if defined(IL2CPP_STRUCT_SceneComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneComponent_DEFINED
struct SceneComponent__Class;
struct SceneComponent {
    struct SceneComponent__Class* klass;
    MonitorData* monitor;
    struct SceneComponent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneComponent_FWDDECL)
#define IL2CPP_STRUCT_SceneComponent_FWDDECL
#include <Modloader/app/structs/SceneComponent__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneComponent_DEFINED) && !defined(IL2CPP_STRUCT_SceneComponent_FWDDECL)
#include <Modloader/app/structs/SceneComponent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneComponent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
