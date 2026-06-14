#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BugReporter__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BugReporter__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugReporter__StaticFields_DEFINED)
#define IL2CPP_STRUCT_BugReporter__StaticFields_DEFINED
struct BugReporter;
struct HashSet_1_Moon_ISuspendable_;
struct ConcurrentQueue_1_System_String_;
struct BugReporter__StaticFields {
    struct BugReporter* Instance;
    struct HashSet_1_Moon_ISuspendable_* SuspendablesToIgnoreForGameplay;
    struct ConcurrentQueue_1_System_String_* s_screenshotQueue;
};
#endif
#if !defined(IL2CPP_STRUCT_BugReporter__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_BugReporter__StaticFields_FWDDECL
#include <Modloader/app/structs/BugReporter.h>
#include <Modloader/app/structs/ConcurrentQueue_1_System_String_.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#endif
#undef IL2CPP_STRUCT_BugReporter__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugReporter__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_BugReporter__StaticFields_FWDDECL)
#include <Modloader/app/structs/BugReporter__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BugReporter__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
