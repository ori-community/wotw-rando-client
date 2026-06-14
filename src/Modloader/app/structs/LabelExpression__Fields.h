#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LabelExpression__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LabelExpression__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LabelExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_LabelExpression__Fields_DEFINED
struct LabelTarget;
struct Expression;
struct __declspec(align(8)) LabelExpression__Fields {
    struct LabelTarget* _Target_k__BackingField;
    struct Expression* _DefaultValue_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_LabelExpression__Fields_FWDDECL)
#define IL2CPP_STRUCT_LabelExpression__Fields_FWDDECL
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/LabelTarget.h>
#endif
#undef IL2CPP_STRUCT_LabelExpression__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LabelExpression__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LabelExpression__Fields_FWDDECL)
#include <Modloader/app/structs/LabelExpression__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LabelExpression__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
