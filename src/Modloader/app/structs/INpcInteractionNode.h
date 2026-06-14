#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_INpcInteractionNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_INpcInteractionNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_INpcInteractionNode_DEFINED)
#define IL2CPP_STRUCT_INpcInteractionNode_DEFINED
struct INpcInteractionNode__Class;
struct INpcInteractionNode {
    struct INpcInteractionNode__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_INpcInteractionNode_FWDDECL)
#define IL2CPP_STRUCT_INpcInteractionNode_FWDDECL
#include <Modloader/app/structs/INpcInteractionNode__Class.h>
#endif
#undef IL2CPP_STRUCT_INpcInteractionNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_INpcInteractionNode_DEFINED) && !defined(IL2CPP_STRUCT_INpcInteractionNode_FWDDECL)
#include <Modloader/app/structs/INpcInteractionNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/INpcInteractionNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
