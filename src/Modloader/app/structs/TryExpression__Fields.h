#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TryExpression__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TryExpression__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TryExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_TryExpression__Fields_DEFINED
struct Type;
struct Expression;
struct ReadOnlyCollection_1_System_Linq_Expressions_CatchBlock_;
struct __declspec(align(8)) TryExpression__Fields {
    struct Type* _Type_k__BackingField;
    struct Expression* _Body_k__BackingField;
    struct ReadOnlyCollection_1_System_Linq_Expressions_CatchBlock_* _Handlers_k__BackingField;
    struct Expression* _Finally_k__BackingField;
    struct Expression* _Fault_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_TryExpression__Fields_FWDDECL)
#define IL2CPP_STRUCT_TryExpression__Fields_FWDDECL
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_CatchBlock_.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_TryExpression__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TryExpression__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TryExpression__Fields_FWDDECL)
#include <Modloader/app/structs/TryExpression__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TryExpression__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
