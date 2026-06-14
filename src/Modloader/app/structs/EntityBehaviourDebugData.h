#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityBehaviourDebugData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityBehaviourDebugData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityBehaviourDebugData_DEFINED)
#include <Modloader/app/structs/EntityBehaviourDebugData__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourDebugData__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityBehaviourDebugData_DEFINED
struct EntityBehaviourDebugData__Class;
struct EntityBehaviourDebugData {
    struct EntityBehaviourDebugData__Class* klass;
    MonitorData* monitor;
    struct EntityBehaviourDebugData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityBehaviourDebugData_FWDDECL)
#define IL2CPP_STRUCT_EntityBehaviourDebugData_FWDDECL
#include <Modloader/app/structs/EntityBehaviourDebugData__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityBehaviourDebugData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityBehaviourDebugData_DEFINED) && !defined(IL2CPP_STRUCT_EntityBehaviourDebugData_FWDDECL)
#include <Modloader/app/structs/EntityBehaviourDebugData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityBehaviourDebugData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
