#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstantExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstantExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstantExpression_DEFINED)
#include <Modloader/app/structs/ConstantExpression__Fields.h>
#if defined(IL2CPP_STRUCT_ConstantExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_ConstantExpression_DEFINED
struct ConstantExpression__Class;
struct ConstantExpression {
    struct ConstantExpression__Class* klass;
    MonitorData* monitor;
    struct ConstantExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConstantExpression_FWDDECL)
#define IL2CPP_STRUCT_ConstantExpression_FWDDECL
#include <Modloader/app/structs/ConstantExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_ConstantExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstantExpression_DEFINED) && !defined(IL2CPP_STRUCT_ConstantExpression_FWDDECL)
#include <Modloader/app/structs/ConstantExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstantExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
