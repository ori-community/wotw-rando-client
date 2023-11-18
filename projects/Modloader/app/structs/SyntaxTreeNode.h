#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SyntaxTreeNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SyntaxTreeNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_SyntaxTreeNode_DEFINED)
#define IL2CPP_STRUCT_SyntaxTreeNode_DEFINED
struct SyntaxTreeNode__Class;
struct SyntaxTreeNode {
    struct SyntaxTreeNode__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SyntaxTreeNode_FWDDECL)
#define IL2CPP_STRUCT_SyntaxTreeNode_FWDDECL
#include <Modloader/app/structs/SyntaxTreeNode__Class.h>
#endif
#undef IL2CPP_STRUCT_SyntaxTreeNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_SyntaxTreeNode_DEFINED) && !defined(IL2CPP_STRUCT_SyntaxTreeNode_FWDDECL)
#include <Modloader/app/structs/SyntaxTreeNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SyntaxTreeNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
