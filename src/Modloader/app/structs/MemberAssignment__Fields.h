#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemberAssignment__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemberAssignment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberAssignment__Fields_DEFINED)
#include <Modloader/app/structs/MemberBinding__Fields.h>
#if defined(IL2CPP_STRUCT_MemberBinding__Fields_DEFINED)
#define IL2CPP_STRUCT_MemberAssignment__Fields_DEFINED
struct Expression;
struct MemberAssignment__Fields {
    struct MemberBinding__Fields _;
    struct Expression* _expression;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemberAssignment__Fields_FWDDECL)
#define IL2CPP_STRUCT_MemberAssignment__Fields_FWDDECL
#include <Modloader/app/structs/Expression.h>
#endif
#undef IL2CPP_STRUCT_MemberAssignment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberAssignment__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MemberAssignment__Fields_FWDDECL)
#include <Modloader/app/structs/MemberAssignment__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemberAssignment__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
