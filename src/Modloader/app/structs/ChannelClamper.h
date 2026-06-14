#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChannelClamper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChannelClamper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChannelClamper_DEFINED)
#include <Modloader/app/structs/ChannelClamper__Fields.h>
#if defined(IL2CPP_STRUCT_ChannelClamper__Fields_DEFINED)
#define IL2CPP_STRUCT_ChannelClamper_DEFINED
struct ChannelClamper__Class;
struct ChannelClamper {
    struct ChannelClamper__Class* klass;
    MonitorData* monitor;
    struct ChannelClamper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChannelClamper_FWDDECL)
#define IL2CPP_STRUCT_ChannelClamper_FWDDECL
#include <Modloader/app/structs/ChannelClamper__Class.h>
#endif
#undef IL2CPP_STRUCT_ChannelClamper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChannelClamper_DEFINED) && !defined(IL2CPP_STRUCT_ChannelClamper_FWDDECL)
#include <Modloader/app/structs/ChannelClamper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChannelClamper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
