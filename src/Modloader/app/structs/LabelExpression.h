#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LabelExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LabelExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_LabelExpression_DEFINED)
#include <Modloader/app/structs/LabelExpression__Fields.h>
#if defined(IL2CPP_STRUCT_LabelExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_LabelExpression_DEFINED
struct LabelExpression__Class;
struct LabelExpression {
    struct LabelExpression__Class* klass;
    MonitorData* monitor;
    struct LabelExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LabelExpression_FWDDECL)
#define IL2CPP_STRUCT_LabelExpression_FWDDECL
#include <Modloader/app/structs/LabelExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_LabelExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_LabelExpression_DEFINED) && !defined(IL2CPP_STRUCT_LabelExpression_FWDDECL)
#include <Modloader/app/structs/LabelExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LabelExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
