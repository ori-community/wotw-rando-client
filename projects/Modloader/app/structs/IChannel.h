#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IChannel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IChannel_INITIALIZING
#if !defined(IL2CPP_STRUCT_IChannel_DEFINED)
#define IL2CPP_STRUCT_IChannel_DEFINED
struct IChannel__Class;
struct IChannel {
    struct IChannel__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IChannel_FWDDECL)
#define IL2CPP_STRUCT_IChannel_FWDDECL
#include <Modloader/app/structs/IChannel__Class.h>
#endif
#undef IL2CPP_STRUCT_IChannel_INITIALIZING
#if !defined(IL2CPP_STRUCT_IChannel_DEFINED) && !defined(IL2CPP_STRUCT_IChannel_FWDDECL)
#include <Modloader/app/structs/IChannel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IChannel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
