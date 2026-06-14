#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeviceInfoRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeviceInfoRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeviceInfoRequest_DEFINED)
#include <Modloader/app/structs/DeviceInfoRequest__Fields.h>
#if defined(IL2CPP_STRUCT_DeviceInfoRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_DeviceInfoRequest_DEFINED
struct DeviceInfoRequest__Class;
struct DeviceInfoRequest {
    struct DeviceInfoRequest__Class* klass;
    MonitorData* monitor;
    struct DeviceInfoRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeviceInfoRequest_FWDDECL)
#define IL2CPP_STRUCT_DeviceInfoRequest_FWDDECL
#include <Modloader/app/structs/DeviceInfoRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_DeviceInfoRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeviceInfoRequest_DEFINED) && !defined(IL2CPP_STRUCT_DeviceInfoRequest_FWDDECL)
#include <Modloader/app/structs/DeviceInfoRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeviceInfoRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
