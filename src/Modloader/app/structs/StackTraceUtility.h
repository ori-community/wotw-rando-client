#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StackTraceUtility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StackTraceUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackTraceUtility_DEFINED)
#define IL2CPP_STRUCT_StackTraceUtility_DEFINED
struct StackTraceUtility__Class;
struct StackTraceUtility {
    struct StackTraceUtility__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_StackTraceUtility_FWDDECL)
#define IL2CPP_STRUCT_StackTraceUtility_FWDDECL
#include <Modloader/app/structs/StackTraceUtility__Class.h>
#endif
#undef IL2CPP_STRUCT_StackTraceUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackTraceUtility_DEFINED) && !defined(IL2CPP_STRUCT_StackTraceUtility_FWDDECL)
#include <Modloader/app/structs/StackTraceUtility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StackTraceUtility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
