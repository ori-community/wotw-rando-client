#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IndexExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IndexExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_IndexExpression_DEFINED)
#include <Modloader/app/structs/IndexExpression__Fields.h>
#if defined(IL2CPP_STRUCT_IndexExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_IndexExpression_DEFINED
struct IndexExpression__Class;
struct IndexExpression {
    struct IndexExpression__Class* klass;
    MonitorData* monitor;
    struct IndexExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IndexExpression_FWDDECL)
#define IL2CPP_STRUCT_IndexExpression_FWDDECL
#include <Modloader/app/structs/IndexExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_IndexExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_IndexExpression_DEFINED) && !defined(IL2CPP_STRUCT_IndexExpression_FWDDECL)
#include <Modloader/app/structs/IndexExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IndexExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
