#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListInitExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListInitExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListInitExpression_DEFINED)
#include <Modloader/app/structs/ListInitExpression__Fields.h>
#if defined(IL2CPP_STRUCT_ListInitExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_ListInitExpression_DEFINED
struct ListInitExpression__Class;
struct ListInitExpression {
    struct ListInitExpression__Class* klass;
    MonitorData* monitor;
    struct ListInitExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListInitExpression_FWDDECL)
#define IL2CPP_STRUCT_ListInitExpression_FWDDECL
#include <Modloader/app/structs/ListInitExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_ListInitExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListInitExpression_DEFINED) && !defined(IL2CPP_STRUCT_ListInitExpression_FWDDECL)
#include <Modloader/app/structs/ListInitExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListInitExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
