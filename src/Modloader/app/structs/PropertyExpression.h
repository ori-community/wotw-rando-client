#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PropertyExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PropertyExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyExpression_DEFINED)
#include <Modloader/app/structs/PropertyExpression__Fields.h>
#if defined(IL2CPP_STRUCT_PropertyExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_PropertyExpression_DEFINED
struct PropertyExpression__Class;
struct PropertyExpression {
    struct PropertyExpression__Class* klass;
    MonitorData* monitor;
    struct PropertyExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PropertyExpression_FWDDECL)
#define IL2CPP_STRUCT_PropertyExpression_FWDDECL
#include <Modloader/app/structs/PropertyExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_PropertyExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyExpression_DEFINED) && !defined(IL2CPP_STRUCT_PropertyExpression_FWDDECL)
#include <Modloader/app/structs/PropertyExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PropertyExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
