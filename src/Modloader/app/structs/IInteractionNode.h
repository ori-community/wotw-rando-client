#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IInteractionNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IInteractionNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInteractionNode_DEFINED)
#define IL2CPP_STRUCT_IInteractionNode_DEFINED
struct IInteractionNode__Class;
struct IInteractionNode {
    struct IInteractionNode__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IInteractionNode_FWDDECL)
#define IL2CPP_STRUCT_IInteractionNode_FWDDECL
#include <Modloader/app/structs/IInteractionNode__Class.h>
#endif
#undef IL2CPP_STRUCT_IInteractionNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInteractionNode_DEFINED) && !defined(IL2CPP_STRUCT_IInteractionNode_FWDDECL)
#include <Modloader/app/structs/IInteractionNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IInteractionNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
