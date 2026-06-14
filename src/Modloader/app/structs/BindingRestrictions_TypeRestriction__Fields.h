#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BindingRestrictions_TypeRestriction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BindingRestrictions_TypeRestriction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BindingRestrictions_TypeRestriction__Fields_DEFINED)
#define IL2CPP_STRUCT_BindingRestrictions_TypeRestriction__Fields_DEFINED
struct Expression;
struct Type;
struct __declspec(align(8)) BindingRestrictions_TypeRestriction__Fields {
    struct Expression* _expression;
    struct Type* _type;
};
#endif
#if !defined(IL2CPP_STRUCT_BindingRestrictions_TypeRestriction__Fields_FWDDECL)
#define IL2CPP_STRUCT_BindingRestrictions_TypeRestriction__Fields_FWDDECL
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_BindingRestrictions_TypeRestriction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BindingRestrictions_TypeRestriction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BindingRestrictions_TypeRestriction__Fields_FWDDECL)
#include <Modloader/app/structs/BindingRestrictions_TypeRestriction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BindingRestrictions_TypeRestriction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
