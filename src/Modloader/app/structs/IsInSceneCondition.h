#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsInSceneCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsInSceneCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsInSceneCondition_DEFINED)
#include <Modloader/app/structs/IsInSceneCondition__Fields.h>
#if defined(IL2CPP_STRUCT_IsInSceneCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_IsInSceneCondition_DEFINED
struct IsInSceneCondition__Class;
struct IsInSceneCondition {
    struct IsInSceneCondition__Class* klass;
    MonitorData* monitor;
    struct IsInSceneCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IsInSceneCondition_FWDDECL)
#define IL2CPP_STRUCT_IsInSceneCondition_FWDDECL
#include <Modloader/app/structs/IsInSceneCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_IsInSceneCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsInSceneCondition_DEFINED) && !defined(IL2CPP_STRUCT_IsInSceneCondition_FWDDECL)
#include <Modloader/app/structs/IsInSceneCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsInSceneCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
