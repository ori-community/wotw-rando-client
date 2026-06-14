#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CLRConfig_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CLRConfig_INITIALIZING
#if !defined(IL2CPP_STRUCT_CLRConfig_DEFINED)
#define IL2CPP_STRUCT_CLRConfig_DEFINED
struct CLRConfig__Class;
struct CLRConfig {
    struct CLRConfig__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CLRConfig_FWDDECL)
#define IL2CPP_STRUCT_CLRConfig_FWDDECL
#include <Modloader/app/structs/CLRConfig__Class.h>
#endif
#undef IL2CPP_STRUCT_CLRConfig_INITIALIZING
#if !defined(IL2CPP_STRUCT_CLRConfig_DEFINED) && !defined(IL2CPP_STRUCT_CLRConfig_FWDDECL)
#include <Modloader/app/structs/CLRConfig.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CLRConfig.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
