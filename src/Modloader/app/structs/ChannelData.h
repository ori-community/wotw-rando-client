#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChannelData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChannelData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChannelData_DEFINED)
#include <Modloader/app/structs/ChannelData__Fields.h>
#if defined(IL2CPP_STRUCT_ChannelData__Fields_DEFINED)
#define IL2CPP_STRUCT_ChannelData_DEFINED
struct ChannelData__Class;
struct ChannelData {
    struct ChannelData__Class* klass;
    MonitorData* monitor;
    struct ChannelData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChannelData_FWDDECL)
#define IL2CPP_STRUCT_ChannelData_FWDDECL
#include <Modloader/app/structs/ChannelData__Class.h>
#endif
#undef IL2CPP_STRUCT_ChannelData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChannelData_DEFINED) && !defined(IL2CPP_STRUCT_ChannelData_FWDDECL)
#include <Modloader/app/structs/ChannelData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChannelData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
