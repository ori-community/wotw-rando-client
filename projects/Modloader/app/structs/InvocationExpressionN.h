#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InvocationExpressionN_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InvocationExpressionN_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvocationExpressionN_DEFINED)
#include <Modloader/app/structs/InvocationExpressionN__Fields.h>
#if defined(IL2CPP_STRUCT_InvocationExpressionN__Fields_DEFINED)
#define IL2CPP_STRUCT_InvocationExpressionN_DEFINED
struct InvocationExpressionN__Class;
struct InvocationExpressionN {
    struct InvocationExpressionN__Class* klass;
    MonitorData* monitor;
    struct InvocationExpressionN__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InvocationExpressionN_FWDDECL)
#define IL2CPP_STRUCT_InvocationExpressionN_FWDDECL
#include <Modloader/app/structs/InvocationExpressionN__Class.h>
#endif
#undef IL2CPP_STRUCT_InvocationExpressionN_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvocationExpressionN_DEFINED) && !defined(IL2CPP_STRUCT_InvocationExpressionN_FWDDECL)
#include <Modloader/app/structs/InvocationExpressionN.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InvocationExpressionN.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
