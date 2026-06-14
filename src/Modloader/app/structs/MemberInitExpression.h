#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemberInitExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemberInitExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberInitExpression_DEFINED)
#include <Modloader/app/structs/MemberInitExpression__Fields.h>
#if defined(IL2CPP_STRUCT_MemberInitExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_MemberInitExpression_DEFINED
struct MemberInitExpression__Class;
struct MemberInitExpression {
    struct MemberInitExpression__Class* klass;
    MonitorData* monitor;
    struct MemberInitExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemberInitExpression_FWDDECL)
#define IL2CPP_STRUCT_MemberInitExpression_FWDDECL
#include <Modloader/app/structs/MemberInitExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_MemberInitExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberInitExpression_DEFINED) && !defined(IL2CPP_STRUCT_MemberInitExpression_FWDDECL)
#include <Modloader/app/structs/MemberInitExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemberInitExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
