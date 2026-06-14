#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemberExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemberExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberExpression_DEFINED)
#include <Modloader/app/structs/MemberExpression__Fields.h>
#if defined(IL2CPP_STRUCT_MemberExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_MemberExpression_DEFINED
struct MemberExpression__Class;
struct MemberExpression {
    struct MemberExpression__Class* klass;
    MonitorData* monitor;
    struct MemberExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemberExpression_FWDDECL)
#define IL2CPP_STRUCT_MemberExpression_FWDDECL
#include <Modloader/app/structs/MemberExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_MemberExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberExpression_DEFINED) && !defined(IL2CPP_STRUCT_MemberExpression_FWDDECL)
#include <Modloader/app/structs/MemberExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemberExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
