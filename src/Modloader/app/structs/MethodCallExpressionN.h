#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MethodCallExpressionN_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MethodCallExpressionN_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodCallExpressionN_DEFINED)
#include <Modloader/app/structs/MethodCallExpressionN__Fields.h>
#if defined(IL2CPP_STRUCT_MethodCallExpressionN__Fields_DEFINED)
#define IL2CPP_STRUCT_MethodCallExpressionN_DEFINED
struct MethodCallExpressionN__Class;
struct MethodCallExpressionN {
    struct MethodCallExpressionN__Class* klass;
    MonitorData* monitor;
    struct MethodCallExpressionN__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MethodCallExpressionN_FWDDECL)
#define IL2CPP_STRUCT_MethodCallExpressionN_FWDDECL
#include <Modloader/app/structs/MethodCallExpressionN__Class.h>
#endif
#undef IL2CPP_STRUCT_MethodCallExpressionN_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodCallExpressionN_DEFINED) && !defined(IL2CPP_STRUCT_MethodCallExpressionN_FWDDECL)
#include <Modloader/app/structs/MethodCallExpressionN.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MethodCallExpressionN.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
