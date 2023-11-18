#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Device_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Device_INITIALIZING
#if !defined(IL2CPP_STRUCT_Device_DEFINED)
#include <Modloader/app/structs/Device__Fields.h>
#if defined(IL2CPP_STRUCT_Device__Fields_DEFINED)
#define IL2CPP_STRUCT_Device_DEFINED
struct Device__Class;
struct Device {
    struct Device__Class* klass;
    MonitorData* monitor;
    struct Device__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Device_FWDDECL)
#define IL2CPP_STRUCT_Device_FWDDECL
#include <Modloader/app/structs/Device__Class.h>
#endif
#undef IL2CPP_STRUCT_Device_INITIALIZING
#if !defined(IL2CPP_STRUCT_Device_DEFINED) && !defined(IL2CPP_STRUCT_Device_FWDDECL)
#include <Modloader/app/structs/Device.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Device.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
