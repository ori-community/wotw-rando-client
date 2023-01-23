#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChannelInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChannelInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChannelInfo_DEFINED)
#include <Modloader/app/structs/ChannelInfo__Fields.h>
#if defined(IL2CPP_STRUCT_ChannelInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_ChannelInfo_DEFINED
struct ChannelInfo__Class;
struct ChannelInfo {
    struct ChannelInfo__Class* klass;
    MonitorData* monitor;
    struct ChannelInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChannelInfo_FWDDECL)
#define IL2CPP_STRUCT_ChannelInfo_FWDDECL
#include <Modloader/app/structs/ChannelInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_ChannelInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChannelInfo_DEFINED) && !defined(IL2CPP_STRUCT_ChannelInfo_FWDDECL)
#include <Modloader/app/structs/ChannelInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChannelInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
