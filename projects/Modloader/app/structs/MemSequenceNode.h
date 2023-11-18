#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemSequenceNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemSequenceNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemSequenceNode_DEFINED)
#include <Modloader/app/structs/MemSequenceNode__Fields.h>
#if defined(IL2CPP_STRUCT_MemSequenceNode__Fields_DEFINED)
#define IL2CPP_STRUCT_MemSequenceNode_DEFINED
struct MemSequenceNode__Class;
struct MemSequenceNode {
    struct MemSequenceNode__Class* klass;
    MonitorData* monitor;
    struct MemSequenceNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemSequenceNode_FWDDECL)
#define IL2CPP_STRUCT_MemSequenceNode_FWDDECL
#include <Modloader/app/structs/MemSequenceNode__Class.h>
#endif
#undef IL2CPP_STRUCT_MemSequenceNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemSequenceNode_DEFINED) && !defined(IL2CPP_STRUCT_MemSequenceNode_FWDDECL)
#include <Modloader/app/structs/MemSequenceNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemSequenceNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
