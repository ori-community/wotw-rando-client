#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsConfig_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsConfig_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsConfig_DEFINED)
#include <Modloader/app/structs/fsConfig__Fields.h>
#if defined(IL2CPP_STRUCT_fsConfig__Fields_DEFINED)
#define IL2CPP_STRUCT_fsConfig_DEFINED
struct fsConfig__Class;
struct fsConfig {
    struct fsConfig__Class* klass;
    MonitorData* monitor;
    struct fsConfig__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsConfig_FWDDECL)
#define IL2CPP_STRUCT_fsConfig_FWDDECL
#include <Modloader/app/structs/fsConfig__Class.h>
#endif
#undef IL2CPP_STRUCT_fsConfig_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsConfig_DEFINED) && !defined(IL2CPP_STRUCT_fsConfig_FWDDECL)
#include <Modloader/app/structs/fsConfig.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsConfig.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
