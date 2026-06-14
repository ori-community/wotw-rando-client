#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateNode_DEFINED)
#include <Modloader/app/structs/StateNode__Fields.h>
#if defined(IL2CPP_STRUCT_StateNode__Fields_DEFINED)
#define IL2CPP_STRUCT_StateNode_DEFINED
struct StateNode__Class;
struct StateNode {
    struct StateNode__Class* klass;
    MonitorData* monitor;
    struct StateNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StateNode_FWDDECL)
#define IL2CPP_STRUCT_StateNode_FWDDECL
#include <Modloader/app/structs/StateNode__Class.h>
#endif
#undef IL2CPP_STRUCT_StateNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateNode_DEFINED) && !defined(IL2CPP_STRUCT_StateNode_FWDDECL)
#include <Modloader/app/structs/StateNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
