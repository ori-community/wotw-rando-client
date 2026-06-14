#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IChannelSender_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IChannelSender_INITIALIZING
#if !defined(IL2CPP_STRUCT_IChannelSender_DEFINED)
#define IL2CPP_STRUCT_IChannelSender_DEFINED
struct IChannelSender__Class;
struct IChannelSender {
    struct IChannelSender__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IChannelSender_FWDDECL)
#define IL2CPP_STRUCT_IChannelSender_FWDDECL
#include <Modloader/app/structs/IChannelSender__Class.h>
#endif
#undef IL2CPP_STRUCT_IChannelSender_INITIALIZING
#if !defined(IL2CPP_STRUCT_IChannelSender_DEFINED) && !defined(IL2CPP_STRUCT_IChannelSender_FWDDECL)
#include <Modloader/app/structs/IChannelSender.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IChannelSender.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
