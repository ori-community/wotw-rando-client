#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActionNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActionNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionNode_DEFINED)
#include <Modloader/app/structs/ActionNode__Fields.h>
#if defined(IL2CPP_STRUCT_ActionNode__Fields_DEFINED)
#define IL2CPP_STRUCT_ActionNode_DEFINED
struct ActionNode__Class;
struct ActionNode {
    struct ActionNode__Class* klass;
    MonitorData* monitor;
    struct ActionNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActionNode_FWDDECL)
#define IL2CPP_STRUCT_ActionNode_FWDDECL
#include <Modloader/app/structs/ActionNode__Class.h>
#endif
#undef IL2CPP_STRUCT_ActionNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionNode_DEFINED) && !defined(IL2CPP_STRUCT_ActionNode_FWDDECL)
#include <Modloader/app/structs/ActionNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActionNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
