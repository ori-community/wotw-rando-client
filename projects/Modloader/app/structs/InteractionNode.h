#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionNode_DEFINED)
#include <Modloader/app/structs/InteractionNode__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionNode__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionNode_DEFINED
struct InteractionNode__Class;
struct InteractionNode {
    struct InteractionNode__Class* klass;
    MonitorData* monitor;
    struct InteractionNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionNode_FWDDECL)
#define IL2CPP_STRUCT_InteractionNode_FWDDECL
#include <Modloader/app/structs/InteractionNode__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractionNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionNode_DEFINED) && !defined(IL2CPP_STRUCT_InteractionNode_FWDDECL)
#include <Modloader/app/structs/InteractionNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
