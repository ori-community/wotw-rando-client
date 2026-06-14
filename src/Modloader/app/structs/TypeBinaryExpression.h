#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeBinaryExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeBinaryExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeBinaryExpression_DEFINED)
#include <Modloader/app/structs/TypeBinaryExpression__Fields.h>
#if defined(IL2CPP_STRUCT_TypeBinaryExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeBinaryExpression_DEFINED
struct TypeBinaryExpression__Class;
struct TypeBinaryExpression {
    struct TypeBinaryExpression__Class* klass;
    MonitorData* monitor;
    struct TypeBinaryExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeBinaryExpression_FWDDECL)
#define IL2CPP_STRUCT_TypeBinaryExpression_FWDDECL
#include <Modloader/app/structs/TypeBinaryExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeBinaryExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeBinaryExpression_DEFINED) && !defined(IL2CPP_STRUCT_TypeBinaryExpression_FWDDECL)
#include <Modloader/app/structs/TypeBinaryExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeBinaryExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
