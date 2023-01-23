#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataExpression_DEFINED)
#include <Modloader/app/structs/DataExpression__Fields.h>
#if defined(IL2CPP_STRUCT_DataExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_DataExpression_DEFINED
struct DataExpression__Class;
struct DataExpression {
    struct DataExpression__Class* klass;
    MonitorData* monitor;
    struct DataExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataExpression_FWDDECL)
#define IL2CPP_STRUCT_DataExpression_FWDDECL
#include <Modloader/app/structs/DataExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_DataExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataExpression_DEFINED) && !defined(IL2CPP_STRUCT_DataExpression_FWDDECL)
#include <Modloader/app/structs/DataExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
