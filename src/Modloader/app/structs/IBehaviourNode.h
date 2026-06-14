#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IBehaviourNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IBehaviourNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBehaviourNode_DEFINED)
#define IL2CPP_STRUCT_IBehaviourNode_DEFINED
struct IBehaviourNode__Class;
struct IBehaviourNode {
    struct IBehaviourNode__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IBehaviourNode_FWDDECL)
#define IL2CPP_STRUCT_IBehaviourNode_FWDDECL
#include <Modloader/app/structs/IBehaviourNode__Class.h>
#endif
#undef IL2CPP_STRUCT_IBehaviourNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBehaviourNode_DEFINED) && !defined(IL2CPP_STRUCT_IBehaviourNode_FWDDECL)
#include <Modloader/app/structs/IBehaviourNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IBehaviourNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
