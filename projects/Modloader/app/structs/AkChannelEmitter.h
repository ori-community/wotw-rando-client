#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkChannelEmitter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkChannelEmitter_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkChannelEmitter_DEFINED)
#include <Modloader/app/structs/AkChannelEmitter__Fields.h>
#if defined(IL2CPP_STRUCT_AkChannelEmitter__Fields_DEFINED)
#define IL2CPP_STRUCT_AkChannelEmitter_DEFINED
struct AkChannelEmitter__Class;
struct AkChannelEmitter {
    struct AkChannelEmitter__Class* klass;
    MonitorData* monitor;
    struct AkChannelEmitter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkChannelEmitter_FWDDECL)
#define IL2CPP_STRUCT_AkChannelEmitter_FWDDECL
#include <Modloader/app/structs/AkChannelEmitter__Class.h>
#endif
#undef IL2CPP_STRUCT_AkChannelEmitter_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkChannelEmitter_DEFINED) && !defined(IL2CPP_STRUCT_AkChannelEmitter_FWDDECL)
#include <Modloader/app/structs/AkChannelEmitter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkChannelEmitter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
