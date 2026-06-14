#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NamespaceListNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NamespaceListNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamespaceListNode_DEFINED)
#include <Modloader/app/structs/NamespaceListNode__Fields.h>
#if defined(IL2CPP_STRUCT_NamespaceListNode__Fields_DEFINED)
#define IL2CPP_STRUCT_NamespaceListNode_DEFINED
struct NamespaceListNode__Class;
struct NamespaceListNode {
    struct NamespaceListNode__Class* klass;
    MonitorData* monitor;
    struct NamespaceListNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NamespaceListNode_FWDDECL)
#define IL2CPP_STRUCT_NamespaceListNode_FWDDECL
#include <Modloader/app/structs/NamespaceListNode__Class.h>
#endif
#undef IL2CPP_STRUCT_NamespaceListNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamespaceListNode_DEFINED) && !defined(IL2CPP_STRUCT_NamespaceListNode_FWDDECL)
#include <Modloader/app/structs/NamespaceListNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NamespaceListNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
