#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StandardTaskContinuation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StandardTaskContinuation_INITIALIZING
#if !defined(IL2CPP_STRUCT_StandardTaskContinuation_DEFINED)
#include <Modloader/app/structs/StandardTaskContinuation__Fields.h>
#if defined(IL2CPP_STRUCT_StandardTaskContinuation__Fields_DEFINED)
#define IL2CPP_STRUCT_StandardTaskContinuation_DEFINED
struct StandardTaskContinuation__Class;
struct StandardTaskContinuation {
    struct StandardTaskContinuation__Class* klass;
    MonitorData* monitor;
    struct StandardTaskContinuation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StandardTaskContinuation_FWDDECL)
#define IL2CPP_STRUCT_StandardTaskContinuation_FWDDECL
#include <Modloader/app/structs/StandardTaskContinuation__Class.h>
#endif
#undef IL2CPP_STRUCT_StandardTaskContinuation_INITIALIZING
#if !defined(IL2CPP_STRUCT_StandardTaskContinuation_DEFINED) && !defined(IL2CPP_STRUCT_StandardTaskContinuation_FWDDECL)
#include <Modloader/app/structs/StandardTaskContinuation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StandardTaskContinuation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
