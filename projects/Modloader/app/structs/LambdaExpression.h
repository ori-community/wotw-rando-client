#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LambdaExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LambdaExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_LambdaExpression_DEFINED)
#include <Modloader/app/structs/LambdaExpression__Fields.h>
#if defined(IL2CPP_STRUCT_LambdaExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_LambdaExpression_DEFINED
struct LambdaExpression__Class;
struct LambdaExpression {
    struct LambdaExpression__Class* klass;
    MonitorData* monitor;
    struct LambdaExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LambdaExpression_FWDDECL)
#define IL2CPP_STRUCT_LambdaExpression_FWDDECL
#include <Modloader/app/structs/LambdaExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_LambdaExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_LambdaExpression_DEFINED) && !defined(IL2CPP_STRUCT_LambdaExpression_FWDDECL)
#include <Modloader/app/structs/LambdaExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LambdaExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
