#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstanceMethodCallExpressionN_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstanceMethodCallExpressionN_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstanceMethodCallExpressionN_DEFINED)
#include <Modloader/app/structs/InstanceMethodCallExpressionN__Fields.h>
#if defined(IL2CPP_STRUCT_InstanceMethodCallExpressionN__Fields_DEFINED)
#define IL2CPP_STRUCT_InstanceMethodCallExpressionN_DEFINED
struct InstanceMethodCallExpressionN__Class;
struct InstanceMethodCallExpressionN {
    struct InstanceMethodCallExpressionN__Class* klass;
    MonitorData* monitor;
    struct InstanceMethodCallExpressionN__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstanceMethodCallExpressionN_FWDDECL)
#define IL2CPP_STRUCT_InstanceMethodCallExpressionN_FWDDECL
#include <Modloader/app/structs/InstanceMethodCallExpressionN__Class.h>
#endif
#undef IL2CPP_STRUCT_InstanceMethodCallExpressionN_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstanceMethodCallExpressionN_DEFINED) && !defined(IL2CPP_STRUCT_InstanceMethodCallExpressionN_FWDDECL)
#include <Modloader/app/structs/InstanceMethodCallExpressionN.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstanceMethodCallExpressionN.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
