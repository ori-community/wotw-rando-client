#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CatchBlock__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CatchBlock__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatchBlock__Fields_DEFINED)
#define IL2CPP_STRUCT_CatchBlock__Fields_DEFINED
struct ParameterExpression;
struct Type;
struct Expression;
struct __declspec(align(8)) CatchBlock__Fields {
    struct ParameterExpression* _Variable_k__BackingField;
    struct Type* _Test_k__BackingField;
    struct Expression* _Body_k__BackingField;
    struct Expression* _Filter_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_CatchBlock__Fields_FWDDECL)
#define IL2CPP_STRUCT_CatchBlock__Fields_FWDDECL
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ParameterExpression.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_CatchBlock__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatchBlock__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CatchBlock__Fields_FWDDECL)
#include <Modloader/app/structs/CatchBlock__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CatchBlock__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
