#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChannelSwapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChannelSwapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChannelSwapper_DEFINED)
#include <Modloader/app/structs/ChannelSwapper__Fields.h>
#if defined(IL2CPP_STRUCT_ChannelSwapper__Fields_DEFINED)
#define IL2CPP_STRUCT_ChannelSwapper_DEFINED
struct ChannelSwapper__Class;
struct ChannelSwapper {
    struct ChannelSwapper__Class* klass;
    MonitorData* monitor;
    struct ChannelSwapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChannelSwapper_FWDDECL)
#define IL2CPP_STRUCT_ChannelSwapper_FWDDECL
#include <Modloader/app/structs/ChannelSwapper__Class.h>
#endif
#undef IL2CPP_STRUCT_ChannelSwapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChannelSwapper_DEFINED) && !defined(IL2CPP_STRUCT_ChannelSwapper_FWDDECL)
#include <Modloader/app/structs/ChannelSwapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChannelSwapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
