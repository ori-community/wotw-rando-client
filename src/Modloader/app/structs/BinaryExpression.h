#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryExpression_DEFINED)
#include <Modloader/app/structs/BinaryExpression__Fields.h>
#if defined(IL2CPP_STRUCT_BinaryExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_BinaryExpression_DEFINED
struct BinaryExpression__Class;
struct BinaryExpression {
    struct BinaryExpression__Class* klass;
    MonitorData* monitor;
    struct BinaryExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryExpression_FWDDECL)
#define IL2CPP_STRUCT_BinaryExpression_FWDDECL
#include <Modloader/app/structs/BinaryExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_BinaryExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryExpression_DEFINED) && !defined(IL2CPP_STRUCT_BinaryExpression_FWDDECL)
#include <Modloader/app/structs/BinaryExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
