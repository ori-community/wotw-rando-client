#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NetConfig_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NetConfig_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetConfig_DEFINED)
#include <Modloader/app/structs/NetConfig__Fields.h>
#if defined(IL2CPP_STRUCT_NetConfig__Fields_DEFINED)
#define IL2CPP_STRUCT_NetConfig_DEFINED
struct NetConfig__Class;
struct NetConfig {
    struct NetConfig__Class* klass;
    MonitorData* monitor;
    struct NetConfig__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NetConfig_FWDDECL)
#define IL2CPP_STRUCT_NetConfig_FWDDECL
#include <Modloader/app/structs/NetConfig__Class.h>
#endif
#undef IL2CPP_STRUCT_NetConfig_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetConfig_DEFINED) && !defined(IL2CPP_STRUCT_NetConfig_FWDDECL)
#include <Modloader/app/structs/NetConfig.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NetConfig.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
