#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExpressionNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExpressionNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpressionNode_DEFINED)
#include <Modloader/app/structs/ExpressionNode__Fields.h>
#if defined(IL2CPP_STRUCT_ExpressionNode__Fields_DEFINED)
#define IL2CPP_STRUCT_ExpressionNode_DEFINED
struct ExpressionNode__Class;
struct ExpressionNode {
    struct ExpressionNode__Class* klass;
    MonitorData* monitor;
    struct ExpressionNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExpressionNode_FWDDECL)
#define IL2CPP_STRUCT_ExpressionNode_FWDDECL
#include <Modloader/app/structs/ExpressionNode__Class.h>
#endif
#undef IL2CPP_STRUCT_ExpressionNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpressionNode_DEFINED) && !defined(IL2CPP_STRUCT_ExpressionNode_FWDDECL)
#include <Modloader/app/structs/ExpressionNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExpressionNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
