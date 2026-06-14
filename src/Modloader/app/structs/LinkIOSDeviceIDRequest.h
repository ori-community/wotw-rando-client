#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LinkIOSDeviceIDRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LinkIOSDeviceIDRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkIOSDeviceIDRequest_DEFINED)
#include <Modloader/app/structs/LinkIOSDeviceIDRequest__Fields.h>
#if defined(IL2CPP_STRUCT_LinkIOSDeviceIDRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_LinkIOSDeviceIDRequest_DEFINED
struct LinkIOSDeviceIDRequest__Class;
struct LinkIOSDeviceIDRequest {
    struct LinkIOSDeviceIDRequest__Class* klass;
    MonitorData* monitor;
    struct LinkIOSDeviceIDRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LinkIOSDeviceIDRequest_FWDDECL)
#define IL2CPP_STRUCT_LinkIOSDeviceIDRequest_FWDDECL
#include <Modloader/app/structs/LinkIOSDeviceIDRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_LinkIOSDeviceIDRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkIOSDeviceIDRequest_DEFINED) && !defined(IL2CPP_STRUCT_LinkIOSDeviceIDRequest_FWDDECL)
#include <Modloader/app/structs/LinkIOSDeviceIDRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LinkIOSDeviceIDRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
