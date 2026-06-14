#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScopeExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScopeExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScopeExpression_DEFINED)
#include <Modloader/app/structs/ScopeExpression__Fields.h>
#if defined(IL2CPP_STRUCT_ScopeExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_ScopeExpression_DEFINED
struct ScopeExpression__Class;
struct ScopeExpression {
    struct ScopeExpression__Class* klass;
    MonitorData* monitor;
    struct ScopeExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScopeExpression_FWDDECL)
#define IL2CPP_STRUCT_ScopeExpression_FWDDECL
#include <Modloader/app/structs/ScopeExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_ScopeExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScopeExpression_DEFINED) && !defined(IL2CPP_STRUCT_ScopeExpression_FWDDECL)
#include <Modloader/app/structs/ScopeExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScopeExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
