#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChannelBinding_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChannelBinding_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChannelBinding_DEFINED)
#include <Modloader/app/structs/ChannelBinding__Fields.h>
#if defined(IL2CPP_STRUCT_ChannelBinding__Fields_DEFINED)
#define IL2CPP_STRUCT_ChannelBinding_DEFINED
struct ChannelBinding__Class;
struct ChannelBinding {
    struct ChannelBinding__Class* klass;
    MonitorData* monitor;
    struct ChannelBinding__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChannelBinding_FWDDECL)
#define IL2CPP_STRUCT_ChannelBinding_FWDDECL
#include <Modloader/app/structs/ChannelBinding__Class.h>
#endif
#undef IL2CPP_STRUCT_ChannelBinding_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChannelBinding_DEFINED) && !defined(IL2CPP_STRUCT_ChannelBinding_FWDDECL)
#include <Modloader/app/structs/ChannelBinding.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChannelBinding.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
