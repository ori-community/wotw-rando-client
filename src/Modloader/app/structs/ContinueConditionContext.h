#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContinueConditionContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContinueConditionContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContinueConditionContext_DEFINED)
#include <Modloader/app/structs/ContinueConditionContext__Fields.h>
#if defined(IL2CPP_STRUCT_ContinueConditionContext__Fields_DEFINED)
#define IL2CPP_STRUCT_ContinueConditionContext_DEFINED
struct ContinueConditionContext__Class;
struct ContinueConditionContext {
    struct ContinueConditionContext__Class* klass;
    MonitorData* monitor;
    struct ContinueConditionContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContinueConditionContext_FWDDECL)
#define IL2CPP_STRUCT_ContinueConditionContext_FWDDECL
#include <Modloader/app/structs/ContinueConditionContext__Class.h>
#endif
#undef IL2CPP_STRUCT_ContinueConditionContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContinueConditionContext_DEFINED) && !defined(IL2CPP_STRUCT_ContinueConditionContext_FWDDECL)
#include <Modloader/app/structs/ContinueConditionContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContinueConditionContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
