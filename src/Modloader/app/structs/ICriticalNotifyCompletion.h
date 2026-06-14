#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICriticalNotifyCompletion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICriticalNotifyCompletion_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICriticalNotifyCompletion_DEFINED)
#define IL2CPP_STRUCT_ICriticalNotifyCompletion_DEFINED
struct ICriticalNotifyCompletion__Class;
struct ICriticalNotifyCompletion {
    struct ICriticalNotifyCompletion__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICriticalNotifyCompletion_FWDDECL)
#define IL2CPP_STRUCT_ICriticalNotifyCompletion_FWDDECL
#include <Modloader/app/structs/ICriticalNotifyCompletion__Class.h>
#endif
#undef IL2CPP_STRUCT_ICriticalNotifyCompletion_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICriticalNotifyCompletion_DEFINED) && !defined(IL2CPP_STRUCT_ICriticalNotifyCompletion_FWDDECL)
#include <Modloader/app/structs/ICriticalNotifyCompletion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICriticalNotifyCompletion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
