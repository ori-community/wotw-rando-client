#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IChannelInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IChannelInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IChannelInfo_DEFINED)
#define IL2CPP_STRUCT_IChannelInfo_DEFINED
struct IChannelInfo__Class;
struct IChannelInfo {
    struct IChannelInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IChannelInfo_FWDDECL)
#define IL2CPP_STRUCT_IChannelInfo_FWDDECL
#include <Modloader/app/structs/IChannelInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_IChannelInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IChannelInfo_DEFINED) && !defined(IL2CPP_STRUCT_IChannelInfo_FWDDECL)
#include <Modloader/app/structs/IChannelInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IChannelInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
