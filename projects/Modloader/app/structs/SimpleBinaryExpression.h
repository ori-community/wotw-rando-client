#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleBinaryExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleBinaryExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleBinaryExpression_DEFINED)
#include <Modloader/app/structs/SimpleBinaryExpression__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleBinaryExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_SimpleBinaryExpression_DEFINED
struct SimpleBinaryExpression__Class;
struct SimpleBinaryExpression {
    struct SimpleBinaryExpression__Class* klass;
    MonitorData* monitor;
    struct SimpleBinaryExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleBinaryExpression_FWDDECL)
#define IL2CPP_STRUCT_SimpleBinaryExpression_FWDDECL
#include <Modloader/app/structs/SimpleBinaryExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_SimpleBinaryExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleBinaryExpression_DEFINED) && !defined(IL2CPP_STRUCT_SimpleBinaryExpression_FWDDECL)
#include <Modloader/app/structs/SimpleBinaryExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleBinaryExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
