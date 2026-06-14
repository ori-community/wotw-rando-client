#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryNode__Fields_DEFINED)
#include <Modloader/app/structs/ExpressionNode__Fields.h>
#if defined(IL2CPP_STRUCT_ExpressionNode__Fields_DEFINED)
#define IL2CPP_STRUCT_BinaryNode__Fields_DEFINED
struct ExpressionNode;
struct BinaryNode__Fields {
    struct ExpressionNode__Fields _;
    int32_t _op;
    struct ExpressionNode* _left;
    struct ExpressionNode* _right;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_BinaryNode__Fields_FWDDECL
#include <Modloader/app/structs/ExpressionNode.h>
#endif
#undef IL2CPP_STRUCT_BinaryNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BinaryNode__Fields_FWDDECL)
#include <Modloader/app/structs/BinaryNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
