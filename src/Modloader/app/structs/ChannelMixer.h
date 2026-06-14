#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChannelMixer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChannelMixer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChannelMixer_DEFINED)
#include <Modloader/app/structs/ChannelMixer__Fields.h>
#if defined(IL2CPP_STRUCT_ChannelMixer__Fields_DEFINED)
#define IL2CPP_STRUCT_ChannelMixer_DEFINED
struct ChannelMixer__Class;
struct ChannelMixer {
    struct ChannelMixer__Class* klass;
    MonitorData* monitor;
    struct ChannelMixer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChannelMixer_FWDDECL)
#define IL2CPP_STRUCT_ChannelMixer_FWDDECL
#include <Modloader/app/structs/ChannelMixer__Class.h>
#endif
#undef IL2CPP_STRUCT_ChannelMixer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChannelMixer_DEFINED) && !defined(IL2CPP_STRUCT_ChannelMixer_FWDDECL)
#include <Modloader/app/structs/ChannelMixer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChannelMixer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
