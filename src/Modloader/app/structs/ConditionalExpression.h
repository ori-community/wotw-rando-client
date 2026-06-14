#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConditionalExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConditionalExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionalExpression_DEFINED)
#include <Modloader/app/structs/ConditionalExpression__Fields.h>
#if defined(IL2CPP_STRUCT_ConditionalExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_ConditionalExpression_DEFINED
struct ConditionalExpression__Class;
struct ConditionalExpression {
    struct ConditionalExpression__Class* klass;
    MonitorData* monitor;
    struct ConditionalExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConditionalExpression_FWDDECL)
#define IL2CPP_STRUCT_ConditionalExpression_FWDDECL
#include <Modloader/app/structs/ConditionalExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_ConditionalExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionalExpression_DEFINED) && !defined(IL2CPP_STRUCT_ConditionalExpression_FWDDECL)
#include <Modloader/app/structs/ConditionalExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConditionalExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
