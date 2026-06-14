#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DelayedLog_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DelayedLog_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedLog_DEFINED)
#define IL2CPP_STRUCT_DelayedLog_DEFINED
struct DelayedLog__Class;
struct DelayedLog {
    struct DelayedLog__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DelayedLog_FWDDECL)
#define IL2CPP_STRUCT_DelayedLog_FWDDECL
#include <Modloader/app/structs/DelayedLog__Class.h>
#endif
#undef IL2CPP_STRUCT_DelayedLog_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedLog_DEFINED) && !defined(IL2CPP_STRUCT_DelayedLog_FWDDECL)
#include <Modloader/app/structs/DelayedLog.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DelayedLog.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
