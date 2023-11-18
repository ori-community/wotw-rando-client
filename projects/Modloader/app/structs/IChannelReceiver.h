#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IChannelReceiver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IChannelReceiver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IChannelReceiver_DEFINED)
#define IL2CPP_STRUCT_IChannelReceiver_DEFINED
struct IChannelReceiver__Class;
struct IChannelReceiver {
    struct IChannelReceiver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IChannelReceiver_FWDDECL)
#define IL2CPP_STRUCT_IChannelReceiver_FWDDECL
#include <Modloader/app/structs/IChannelReceiver__Class.h>
#endif
#undef IL2CPP_STRUCT_IChannelReceiver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IChannelReceiver_DEFINED) && !defined(IL2CPP_STRUCT_IChannelReceiver_FWDDECL)
#include <Modloader/app/structs/IChannelReceiver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IChannelReceiver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
