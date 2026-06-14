#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AstNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AstNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_AstNode_DEFINED)
#define IL2CPP_STRUCT_AstNode_DEFINED
struct AstNode__Class;
struct AstNode {
    struct AstNode__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AstNode_FWDDECL)
#define IL2CPP_STRUCT_AstNode_FWDDECL
#include <Modloader/app/structs/AstNode__Class.h>
#endif
#undef IL2CPP_STRUCT_AstNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_AstNode_DEFINED) && !defined(IL2CPP_STRUCT_AstNode_FWDDECL)
#include <Modloader/app/structs/AstNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AstNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
