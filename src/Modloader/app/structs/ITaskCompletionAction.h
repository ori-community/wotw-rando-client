#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITaskCompletionAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITaskCompletionAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITaskCompletionAction_DEFINED)
#define IL2CPP_STRUCT_ITaskCompletionAction_DEFINED
struct ITaskCompletionAction__Class;
struct ITaskCompletionAction {
    struct ITaskCompletionAction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITaskCompletionAction_FWDDECL)
#define IL2CPP_STRUCT_ITaskCompletionAction_FWDDECL
#include <Modloader/app/structs/ITaskCompletionAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ITaskCompletionAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITaskCompletionAction_DEFINED) && !defined(IL2CPP_STRUCT_ITaskCompletionAction_FWDDECL)
#include <Modloader/app/structs/ITaskCompletionAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITaskCompletionAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
