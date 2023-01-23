#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkChannelConfig_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkChannelConfig_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkChannelConfig_DEFINED)
#include <Modloader/app/structs/AkChannelConfig__Fields.h>
#if defined(IL2CPP_STRUCT_AkChannelConfig__Fields_DEFINED)
#define IL2CPP_STRUCT_AkChannelConfig_DEFINED
struct AkChannelConfig__Class;
struct AkChannelConfig {
    struct AkChannelConfig__Class* klass;
    MonitorData* monitor;
    struct AkChannelConfig__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkChannelConfig_FWDDECL)
#define IL2CPP_STRUCT_AkChannelConfig_FWDDECL
#include <Modloader/app/structs/AkChannelConfig__Class.h>
#endif
#undef IL2CPP_STRUCT_AkChannelConfig_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkChannelConfig_DEFINED) && !defined(IL2CPP_STRUCT_AkChannelConfig_FWDDECL)
#include <Modloader/app/structs/AkChannelConfig.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkChannelConfig.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
