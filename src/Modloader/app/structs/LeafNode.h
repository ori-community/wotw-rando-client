#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeafNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeafNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeafNode_DEFINED)
#include <Modloader/app/structs/LeafNode__Fields.h>
#if defined(IL2CPP_STRUCT_LeafNode__Fields_DEFINED)
#define IL2CPP_STRUCT_LeafNode_DEFINED
struct LeafNode__Class;
struct LeafNode {
    struct LeafNode__Class* klass;
    MonitorData* monitor;
    struct LeafNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeafNode_FWDDECL)
#define IL2CPP_STRUCT_LeafNode_FWDDECL
#include <Modloader/app/structs/LeafNode__Class.h>
#endif
#undef IL2CPP_STRUCT_LeafNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeafNode_DEFINED) && !defined(IL2CPP_STRUCT_LeafNode_FWDDECL)
#include <Modloader/app/structs/LeafNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeafNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
