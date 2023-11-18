#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FieldExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FieldExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_FieldExpression_DEFINED)
#include <Modloader/app/structs/FieldExpression__Fields.h>
#if defined(IL2CPP_STRUCT_FieldExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_FieldExpression_DEFINED
struct FieldExpression__Class;
struct FieldExpression {
    struct FieldExpression__Class* klass;
    MonitorData* monitor;
    struct FieldExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FieldExpression_FWDDECL)
#define IL2CPP_STRUCT_FieldExpression_FWDDECL
#include <Modloader/app/structs/FieldExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_FieldExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_FieldExpression_DEFINED) && !defined(IL2CPP_STRUCT_FieldExpression_FWDDECL)
#include <Modloader/app/structs/FieldExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FieldExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
