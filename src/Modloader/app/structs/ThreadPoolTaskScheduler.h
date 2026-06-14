#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadPoolTaskScheduler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadPoolTaskScheduler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolTaskScheduler_DEFINED)
#include <Modloader/app/structs/ThreadPoolTaskScheduler__Fields.h>
#if defined(IL2CPP_STRUCT_ThreadPoolTaskScheduler__Fields_DEFINED)
#define IL2CPP_STRUCT_ThreadPoolTaskScheduler_DEFINED
struct ThreadPoolTaskScheduler__Class;
struct ThreadPoolTaskScheduler {
    struct ThreadPoolTaskScheduler__Class* klass;
    MonitorData* monitor;
    struct ThreadPoolTaskScheduler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ThreadPoolTaskScheduler_FWDDECL)
#define IL2CPP_STRUCT_ThreadPoolTaskScheduler_FWDDECL
#include <Modloader/app/structs/ThreadPoolTaskScheduler__Class.h>
#endif
#undef IL2CPP_STRUCT_ThreadPoolTaskScheduler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolTaskScheduler_DEFINED) && !defined(IL2CPP_STRUCT_ThreadPoolTaskScheduler_FWDDECL)
#include <Modloader/app/structs/ThreadPoolTaskScheduler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadPoolTaskScheduler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
