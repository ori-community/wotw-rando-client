#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EmptyInteractionNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EmptyInteractionNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmptyInteractionNode_DEFINED)
#include <Modloader/app/structs/EmptyInteractionNode__Fields.h>
#if defined(IL2CPP_STRUCT_EmptyInteractionNode__Fields_DEFINED)
#define IL2CPP_STRUCT_EmptyInteractionNode_DEFINED
struct EmptyInteractionNode__Class;
struct EmptyInteractionNode {
    struct EmptyInteractionNode__Class* klass;
    MonitorData* monitor;
    struct EmptyInteractionNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EmptyInteractionNode_FWDDECL)
#define IL2CPP_STRUCT_EmptyInteractionNode_FWDDECL
#include <Modloader/app/structs/EmptyInteractionNode__Class.h>
#endif
#undef IL2CPP_STRUCT_EmptyInteractionNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmptyInteractionNode_DEFINED) && !defined(IL2CPP_STRUCT_EmptyInteractionNode_FWDDECL)
#include <Modloader/app/structs/EmptyInteractionNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EmptyInteractionNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
