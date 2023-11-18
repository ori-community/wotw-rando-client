#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneUberStateCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneUberStateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneUberStateCondition_DEFINED)
#include <Modloader/app/structs/SceneUberStateCondition__Fields.h>
#if defined(IL2CPP_STRUCT_SceneUberStateCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneUberStateCondition_DEFINED
struct SceneUberStateCondition__Class;
struct SceneUberStateCondition {
    struct SceneUberStateCondition__Class* klass;
    MonitorData* monitor;
    struct SceneUberStateCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneUberStateCondition_FWDDECL)
#define IL2CPP_STRUCT_SceneUberStateCondition_FWDDECL
#include <Modloader/app/structs/SceneUberStateCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneUberStateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneUberStateCondition_DEFINED) && !defined(IL2CPP_STRUCT_SceneUberStateCondition_FWDDECL)
#include <Modloader/app/structs/SceneUberStateCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneUberStateCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
