#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChannelServices_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChannelServices_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChannelServices_DEFINED)
#define IL2CPP_STRUCT_ChannelServices_DEFINED
struct ChannelServices__Class;
struct ChannelServices {
    struct ChannelServices__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ChannelServices_FWDDECL)
#define IL2CPP_STRUCT_ChannelServices_FWDDECL
#include <Modloader/app/structs/ChannelServices__Class.h>
#endif
#undef IL2CPP_STRUCT_ChannelServices_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChannelServices_DEFINED) && !defined(IL2CPP_STRUCT_ChannelServices_FWDDECL)
#include <Modloader/app/structs/ChannelServices.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChannelServices.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
