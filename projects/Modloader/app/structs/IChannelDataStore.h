#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IChannelDataStore_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IChannelDataStore_INITIALIZING
#if !defined(IL2CPP_STRUCT_IChannelDataStore_DEFINED)
#define IL2CPP_STRUCT_IChannelDataStore_DEFINED
struct IChannelDataStore__Class;
struct IChannelDataStore {
    struct IChannelDataStore__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IChannelDataStore_FWDDECL)
#define IL2CPP_STRUCT_IChannelDataStore_FWDDECL
#include <Modloader/app/structs/IChannelDataStore__Class.h>
#endif
#undef IL2CPP_STRUCT_IChannelDataStore_INITIALIZING
#if !defined(IL2CPP_STRUCT_IChannelDataStore_DEFINED) && !defined(IL2CPP_STRUCT_IChannelDataStore_FWDDECL)
#include <Modloader/app/structs/IChannelDataStore.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IChannelDataStore.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
