#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypedConstantExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypedConstantExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypedConstantExpression_DEFINED)
#include <Modloader/app/structs/TypedConstantExpression__Fields.h>
#if defined(IL2CPP_STRUCT_TypedConstantExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_TypedConstantExpression_DEFINED
struct TypedConstantExpression__Class;
struct TypedConstantExpression {
    struct TypedConstantExpression__Class* klass;
    MonitorData* monitor;
    struct TypedConstantExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypedConstantExpression_FWDDECL)
#define IL2CPP_STRUCT_TypedConstantExpression_FWDDECL
#include <Modloader/app/structs/TypedConstantExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_TypedConstantExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypedConstantExpression_DEFINED) && !defined(IL2CPP_STRUCT_TypedConstantExpression_FWDDECL)
#include <Modloader/app/structs/TypedConstantExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypedConstantExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
