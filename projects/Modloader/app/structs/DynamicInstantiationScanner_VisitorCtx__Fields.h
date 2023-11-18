#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicInstantiationScanner_VisitorCtx__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicInstantiationScanner_VisitorCtx__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInstantiationScanner_VisitorCtx__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicInstantiationScanner_VisitorCtx__Fields_DEFINED
struct DynamicInstantiationScanner;
struct ParameterExpression;
struct HashSet_1_System_Type_;
struct List_1_System_Linq_Expressions_ParameterExpression_;
struct __declspec(align(8)) DynamicInstantiationScanner_VisitorCtx__Fields {
    struct DynamicInstantiationScanner* Scanner;
    struct ParameterExpression* EvaluationCtxExpr;
    struct ParameterExpression* DeclaringInstance;
    struct HashSet_1_System_Type_* TypesVisited;
    struct List_1_System_Linq_Expressions_ParameterExpression_* ArrayIndexExpression;
};
#endif
#if !defined(IL2CPP_STRUCT_DynamicInstantiationScanner_VisitorCtx__Fields_FWDDECL)
#define IL2CPP_STRUCT_DynamicInstantiationScanner_VisitorCtx__Fields_FWDDECL
#include <Modloader/app/structs/DynamicInstantiationScanner.h>
#include <Modloader/app/structs/HashSet_1_System_Type_.h>
#include <Modloader/app/structs/List_1_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/ParameterExpression.h>
#endif
#undef IL2CPP_STRUCT_DynamicInstantiationScanner_VisitorCtx__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInstantiationScanner_VisitorCtx__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DynamicInstantiationScanner_VisitorCtx__Fields_FWDDECL)
#include <Modloader/app/structs/DynamicInstantiationScanner_VisitorCtx__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicInstantiationScanner_VisitorCtx__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
