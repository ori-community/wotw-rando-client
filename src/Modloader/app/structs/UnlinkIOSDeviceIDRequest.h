#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnlinkIOSDeviceIDRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnlinkIOSDeviceIDRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnlinkIOSDeviceIDRequest_DEFINED)
#include <Modloader/app/structs/UnlinkIOSDeviceIDRequest__Fields.h>
#if defined(IL2CPP_STRUCT_UnlinkIOSDeviceIDRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_UnlinkIOSDeviceIDRequest_DEFINED
struct UnlinkIOSDeviceIDRequest__Class;
struct UnlinkIOSDeviceIDRequest {
    struct UnlinkIOSDeviceIDRequest__Class* klass;
    MonitorData* monitor;
    struct UnlinkIOSDeviceIDRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnlinkIOSDeviceIDRequest_FWDDECL)
#define IL2CPP_STRUCT_UnlinkIOSDeviceIDRequest_FWDDECL
#include <Modloader/app/structs/UnlinkIOSDeviceIDRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_UnlinkIOSDeviceIDRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnlinkIOSDeviceIDRequest_DEFINED) && !defined(IL2CPP_STRUCT_UnlinkIOSDeviceIDRequest_FWDDECL)
#include <Modloader/app/structs/UnlinkIOSDeviceIDRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnlinkIOSDeviceIDRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
