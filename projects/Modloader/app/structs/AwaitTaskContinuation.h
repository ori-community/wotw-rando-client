#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AwaitTaskContinuation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AwaitTaskContinuation_INITIALIZING
#if !defined(IL2CPP_STRUCT_AwaitTaskContinuation_DEFINED)
#include <Modloader/app/structs/AwaitTaskContinuation__Fields.h>
#if defined(IL2CPP_STRUCT_AwaitTaskContinuation__Fields_DEFINED)
#define IL2CPP_STRUCT_AwaitTaskContinuation_DEFINED
struct AwaitTaskContinuation__Class;
struct AwaitTaskContinuation {
    struct AwaitTaskContinuation__Class* klass;
    MonitorData* monitor;
    struct AwaitTaskContinuation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AwaitTaskContinuation_FWDDECL)
#define IL2CPP_STRUCT_AwaitTaskContinuation_FWDDECL
#include <Modloader/app/structs/AwaitTaskContinuation__Class.h>
#endif
#undef IL2CPP_STRUCT_AwaitTaskContinuation_INITIALIZING
#if !defined(IL2CPP_STRUCT_AwaitTaskContinuation_DEFINED) && !defined(IL2CPP_STRUCT_AwaitTaskContinuation_FWDDECL)
#include <Modloader/app/structs/AwaitTaskContinuation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AwaitTaskContinuation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
