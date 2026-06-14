#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsGlobalConfig_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsGlobalConfig_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsGlobalConfig_DEFINED)
#define IL2CPP_STRUCT_fsGlobalConfig_DEFINED
struct fsGlobalConfig__Class;
struct fsGlobalConfig {
    struct fsGlobalConfig__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_fsGlobalConfig_FWDDECL)
#define IL2CPP_STRUCT_fsGlobalConfig_FWDDECL
#include <Modloader/app/structs/fsGlobalConfig__Class.h>
#endif
#undef IL2CPP_STRUCT_fsGlobalConfig_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsGlobalConfig_DEFINED) && !defined(IL2CPP_STRUCT_fsGlobalConfig_FWDDECL)
#include <Modloader/app/structs/fsGlobalConfig.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsGlobalConfig.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
