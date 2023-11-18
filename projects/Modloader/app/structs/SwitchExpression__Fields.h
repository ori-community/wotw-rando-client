#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwitchExpression__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwitchExpression__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_SwitchExpression__Fields_DEFINED
struct Type;
struct Expression;
struct ReadOnlyCollection_1_System_Linq_Expressions_SwitchCase_;
struct MethodInfo_1;
struct __declspec(align(8)) SwitchExpression__Fields {
    struct Type* _Type_k__BackingField;
    struct Expression* _SwitchValue_k__BackingField;
    struct ReadOnlyCollection_1_System_Linq_Expressions_SwitchCase_* _Cases_k__BackingField;
    struct Expression* _DefaultBody_k__BackingField;
    struct MethodInfo_1* _Comparison_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_SwitchExpression__Fields_FWDDECL)
#define IL2CPP_STRUCT_SwitchExpression__Fields_FWDDECL
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_SwitchCase_.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_SwitchExpression__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchExpression__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SwitchExpression__Fields_FWDDECL)
#include <Modloader/app/structs/SwitchExpression__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwitchExpression__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
