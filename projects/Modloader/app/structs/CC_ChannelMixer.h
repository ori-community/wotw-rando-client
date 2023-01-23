#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CC_ChannelMixer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CC_ChannelMixer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_ChannelMixer_DEFINED)
#include <Modloader/app/structs/CC_ChannelMixer__Fields.h>
#if defined(IL2CPP_STRUCT_CC_ChannelMixer__Fields_DEFINED)
#define IL2CPP_STRUCT_CC_ChannelMixer_DEFINED
struct CC_ChannelMixer__Class;
struct CC_ChannelMixer {
    struct CC_ChannelMixer__Class* klass;
    MonitorData* monitor;
    struct CC_ChannelMixer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CC_ChannelMixer_FWDDECL)
#define IL2CPP_STRUCT_CC_ChannelMixer_FWDDECL
#include <Modloader/app/structs/CC_ChannelMixer__Class.h>
#endif
#undef IL2CPP_STRUCT_CC_ChannelMixer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_ChannelMixer_DEFINED) && !defined(IL2CPP_STRUCT_CC_ChannelMixer_FWDDECL)
#include <Modloader/app/structs/CC_ChannelMixer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CC_ChannelMixer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
