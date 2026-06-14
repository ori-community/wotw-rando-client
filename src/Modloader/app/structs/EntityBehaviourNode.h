#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityBehaviourNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityBehaviourNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityBehaviourNode_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityBehaviourNode_DEFINED
struct EntityBehaviourNode__Class;
struct EntityBehaviourNode {
    struct EntityBehaviourNode__Class* klass;
    MonitorData* monitor;
    struct EntityBehaviourNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityBehaviourNode_FWDDECL)
#define IL2CPP_STRUCT_EntityBehaviourNode_FWDDECL
#include <Modloader/app/structs/EntityBehaviourNode__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityBehaviourNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityBehaviourNode_DEFINED) && !defined(IL2CPP_STRUCT_EntityBehaviourNode_FWDDECL)
#include <Modloader/app/structs/EntityBehaviourNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityBehaviourNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
