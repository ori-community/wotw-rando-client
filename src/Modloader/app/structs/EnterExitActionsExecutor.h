#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnterExitActionsExecutor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnterExitActionsExecutor_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnterExitActionsExecutor_DEFINED)
#include <Modloader/app/structs/EnterExitActionsExecutor__Fields.h>
#if defined(IL2CPP_STRUCT_EnterExitActionsExecutor__Fields_DEFINED)
#define IL2CPP_STRUCT_EnterExitActionsExecutor_DEFINED
struct EnterExitActionsExecutor__Class;
struct EnterExitActionsExecutor {
    struct EnterExitActionsExecutor__Class* klass;
    MonitorData* monitor;
    struct EnterExitActionsExecutor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnterExitActionsExecutor_FWDDECL)
#define IL2CPP_STRUCT_EnterExitActionsExecutor_FWDDECL
#include <Modloader/app/structs/EnterExitActionsExecutor__Class.h>
#endif
#undef IL2CPP_STRUCT_EnterExitActionsExecutor_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnterExitActionsExecutor_DEFINED) && !defined(IL2CPP_STRUCT_EnterExitActionsExecutor_FWDDECL)
#include <Modloader/app/structs/EnterExitActionsExecutor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnterExitActionsExecutor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
