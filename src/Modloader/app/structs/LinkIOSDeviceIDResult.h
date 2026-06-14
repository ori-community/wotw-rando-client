#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LinkIOSDeviceIDResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LinkIOSDeviceIDResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkIOSDeviceIDResult_DEFINED)
#include <Modloader/app/structs/LinkIOSDeviceIDResult__Fields.h>
#if defined(IL2CPP_STRUCT_LinkIOSDeviceIDResult__Fields_DEFINED)
#define IL2CPP_STRUCT_LinkIOSDeviceIDResult_DEFINED
struct LinkIOSDeviceIDResult__Class;
struct LinkIOSDeviceIDResult {
    struct LinkIOSDeviceIDResult__Class* klass;
    MonitorData* monitor;
    struct LinkIOSDeviceIDResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LinkIOSDeviceIDResult_FWDDECL)
#define IL2CPP_STRUCT_LinkIOSDeviceIDResult_FWDDECL
#include <Modloader/app/structs/LinkIOSDeviceIDResult__Class.h>
#endif
#undef IL2CPP_STRUCT_LinkIOSDeviceIDResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkIOSDeviceIDResult_DEFINED) && !defined(IL2CPP_STRUCT_LinkIOSDeviceIDResult_FWDDECL)
#include <Modloader/app/structs/LinkIOSDeviceIDResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LinkIOSDeviceIDResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
