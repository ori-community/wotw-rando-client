#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeviceInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeviceInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeviceInfo_DEFINED)
#include <Modloader/app/structs/DeviceInfo__Fields.h>
#if defined(IL2CPP_STRUCT_DeviceInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_DeviceInfo_DEFINED
struct DeviceInfo__Class;
struct DeviceInfo {
    struct DeviceInfo__Class* klass;
    MonitorData* monitor;
    struct DeviceInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeviceInfo_FWDDECL)
#define IL2CPP_STRUCT_DeviceInfo_FWDDECL
#include <Modloader/app/structs/DeviceInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_DeviceInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeviceInfo_DEFINED) && !defined(IL2CPP_STRUCT_DeviceInfo_FWDDECL)
#include <Modloader/app/structs/DeviceInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeviceInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
