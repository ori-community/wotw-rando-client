#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlockExpressionList__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlockExpressionList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlockExpressionList__Fields_DEFINED)
#define IL2CPP_STRUCT_BlockExpressionList__Fields_DEFINED
struct BlockExpression;
struct Expression;
struct __declspec(align(8)) BlockExpressionList__Fields {
    struct BlockExpression* _block;
    struct Expression* _arg0;
};
#endif
#if !defined(IL2CPP_STRUCT_BlockExpressionList__Fields_FWDDECL)
#define IL2CPP_STRUCT_BlockExpressionList__Fields_FWDDECL
#include <Modloader/app/structs/BlockExpression.h>
#include <Modloader/app/structs/Expression.h>
#endif
#undef IL2CPP_STRUCT_BlockExpressionList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlockExpressionList__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BlockExpressionList__Fields_FWDDECL)
#include <Modloader/app/structs/BlockExpressionList__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlockExpressionList__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
